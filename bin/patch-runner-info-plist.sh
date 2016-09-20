#!/usr/bin/env bash

set -e

source bin/log_functions.sh
source bin/plist-buddy.sh

if [ $# == 0 ]; then
  echo ""
  echo "1. Removes the leading new line from the DeviceAgent-Runner.app/Info.plist."
  echo "2. Syncs the DeviceAgent-Runner.app/Info.plist and DeviceAgent.xctest/Info.plist"
  echo "   CFBundleShortVersionString and CFBundleVersion with the AppStub."
  echo "3. Resigns if the DeviceAgent-Runner was build for physical devices."
  echo ""
  echo "This script is suitable for xcode-build-phase Run Scripts and"
  echo "the make ipa-agent rule."
  echo ""
  echo "You should not never call this script directly."
  echo ""
  echo "Usage:"
  echo "   $0 path/to/AppStub.app path/to/DeviceAgent-Runner.app"
  exit 1;
fi

STUB="${1}"
RUNNER="${2}"
DEVICE_AGENT="${RUNNER}/PlugIns/DeviceAgent.xctest"

if [ ! -e "${STUB}" ]; then
  error "App stub does not exist: ${STUB}"
  exit 1
fi

if [ ! -e "${RUNNER}" ]; then
  error "Runner does not exist: ${RUNNER}"
  exit 1
fi

if [ ! -e "${DEVICE_AGENT}" ]; then
  error "DeviceAgent.xctest does not exist: ${DEVICE_AGENT}"
  exit 1
fi

banner "Extracting $(basename ${STUB}) Version Info"

STUB_PLIST="${STUB}/Info.plist"

BUNDLE_VERSION=""
plist_read_key "${STUB_PLIST}" "CFBundleVersion" BUNDLE_VERSION
info "CFBundleVersion: ${BUNDLE_VERSION}"

SHORT_VERSION=""
plist_read_key "${STUB_PLIST}" "CFBundleShortVersionString" SHORT_VERSION
info "CFBundleShortVersionString: ${SHORT_VERSION}"

banner "Patching Info.plists"

RUNNER_PLIST="${RUNNER}/Info.plist"
info "${RUNNER_PLIST}"

if [ "$(head -n 1 $RUNNER_PLIST)" == "" ]; then
  info "$(basename ${RUNNER})/Info.plist has a leading newline!"
  TMP_PLIST=`mktemp`
  tail -n +2 "${RUNNER_PLIST}" > "${TMP_PLIST}"
  mv "${TMP_PLIST}" "${RUNNER_PLIST}"
  info "Removed leading newline from $(basename ${RUNNER})/Info.plist"
else
  info "$(basename ${RUNNER})/Info.plist does not have a leading newline!"
fi

info "Syncing $(basename ${RUNNER}) version"

plist_set_key "${RUNNER_PLIST}" "CFBundleVersion" "${BUNDLE_VERSION}"
plist_set_key "${RUNNER_PLIST}" "CFBundleShortVersionString" "${SHORT_VERSION}"

echo ""

DEVICE_AGENT_PLIST="${DEVICE_AGENT}/Info.plist"
info "${DEVICE_AGENT_PLIST}"

info "Syncing $(basename ${DEVICE_AGENT}) version"

plist_set_key "${DEVICE_AGENT_PLIST}" "CFBundleVersion" "${BUNDLE_VERSION}"
plist_set_key "${DEVICE_AGENT_PLIST}" "CFBundleShortVersionString" "${SHORT_VERSION}"

banner "Resigning"

set +e
ARCHINFO=`xcrun lipo -info "${RUNNER}/XCTRunner"`
IGNORED=`echo ${ARCHINFO} | egrep -o "arm"`
EXIT_STATUS=$?
set -e

# $1 variable to store the identity in
# $2 the .app to extract the identity from
# extract_identity IDENTITY "${RUNNER}"
function extract_identity {
    DETAILS=`xcrun codesign --display --verbose=3 ${2} 2>&1`
    TMP=`echo ${DETAILS} | egrep -o "iPhone Developer: .*\)" |  tr -d '\n'`
    eval "$1=\"${TMP}\""
}

if [ "${EXIT_STATUS}" != "0" ]; then

  xcrun codesign \
    --sign - \
    --force \
    --deep \
    --timestamp=none \
    "${DEVICE_AGENT}"

  xcrun codesign \
    --sign - \
    --force \
    --deep \
    --timestamp=none \
    "${RUNNER}/Frameworks/XCTest.framework"

  xcrun codesign \
    --sign - \
    --force \
    --deep \
    --timestamp=none \
    "${RUNNER}"
  xcrun codesign --verify --verbose=4 "${RUNNER}"
else
    ENTITLEMENTS=bin/codesign/DeviceAgent.xctest.xcent
    IDENTITY=""
    extract_identity IDENTITY "${RUNNER}"

    xcrun codesign \
      --sign "${IDENTITY}" \
      --force \
      --deep \
      --entitlements "${ENTITLEMENTS}" \
      ${DEVICE_AGENT}

    xcrun codesign \
      --sign "${IDENTITY}" \
      --force \
      --deep \
      "${RUNNER}/Frameworks/XCTest.framework"

    xcrun codesign \
      --sign "${IDENTITY}" \
      --force \
      --deep \
      --entitlements "${ENTITLEMENTS}" \
      ${RUNNER}

    bin/codesign/verify-ios-certs.sh "${RUNNER}"
fi
