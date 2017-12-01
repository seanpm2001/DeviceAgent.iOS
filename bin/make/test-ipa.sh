#!/usr/bin/env bash

source bin/log.sh
source bin/ditto.sh
source bin/simctl.sh

ensure_valid_core_sim_service

set -e

banner "Preparing"

if [ "${XCPRETTY}" = "0" ]; then
  USE_XCPRETTY=
else
  USE_XCPRETTY=`which xcpretty | tr -d '\n'`
fi

if [ ! -z ${USE_XCPRETTY} ]; then
  XC_PIPE='xcpretty -c'
else
  XC_PIPE='cat'
fi

XC_TARGET="TestApp"
XC_PROJECT="DeviceAgent.xcodeproj"
XC_CONFIG=Debug

XC_BUILD_DIR="build/ipa/TestApp"
mkdir -p "${XC_BUILD_DIR}"

INSTALL_DIR="Products/ipa/TestApp"

APP="TestApp.app"
DSYM="${APP}.dSYM"
IPA="TestApp.ipa"

INSTALLED_APP="${INSTALL_DIR}/${APP}"
INSTALLED_DSYM="${INSTALL_DIR}/${DSYM}"
INSTALLED_IPA="${INSTALL_DIR}/${IPA}"

BUILD_PRODUCTS_DIR="${XC_BUILD_DIR}/Build/Products/${XC_CONFIG}-iphoneos"
BUILD_PRODUCTS_APP="${BUILD_PRODUCTS_DIR}/${APP}"
BUILD_PRODUCTS_DSYM="${BUILD_PRODUCTS_DIR}/${DSYM}"

rm -rf "${BUILD_PRODUCTS_APP}"
rm -rf "${BUILD_PRODUCTS_DSYM}"
mkdir -p "${BUILD_PRODUCTS_DIR}"

info "Prepared archive directory"

if [ "${PREPARE_XTC_ONLY}" != "1" ]; then
  rm -rf "${INSTALL_DIR}"
  mkdir -p "${INSTALL_DIR}"

  info "Prepared install directory ${INSTALL_DIR}"

  banner "Building ${IPA}"

  COMMAND_LINE_BUILD=1 xcrun xcodebuild \
    -SYMROOT="${XC_BUILD_DIR}" \
    BUILT_PRODUCTS_DIR="${BUILD_PRODUCTS_DIR}" \
    TARGET_BUILD_DIR="${BUILD_PRODUCTS_DIR}" \
    DWARF_DSYM_FOLDER_PATH="${BUILD_PRODUCTS_DIR}" \
    -project "${XC_PROJECT}" \
    -target "${XC_TARGET}" \
    -configuration "${XC_CONFIG}" \
    -sdk iphoneos \
    ARCHS="armv7 armv7s arm64" \
    VALID_ARCHS="armv7 armv7s arm64" \
    ONLY_ACTIVE_ARCH=NO \
    build | $XC_PIPE

  EXIT_CODE=${PIPESTATUS[0]}

  if [ $EXIT_CODE != 0 ]; then
    error "Building ipa failed."
    exit $EXIT_CODE
  else
    info "Building ipa succeeded."
  fi

  banner "Installing ipa"

  install_with_ditto "${BUILD_PRODUCTS_APP}" "${INSTALLED_APP}"

  PAYLOAD_DIR="${INSTALL_DIR}/tmp/app/Payload"
  mkdir -p "${PAYLOAD_DIR}"

  ditto_or_exit "${INSTALLED_APP}" "${PAYLOAD_DIR}/${APP}"

  ditto_to_zip "${PAYLOAD_DIR}" "${INSTALLED_IPA}"
  install_with_ditto "${INSTALLED_IPA}" "${INSTALL_DIR}/DeviceAgent-device.ipa"
  ditto_to_zip "${INSTALLED_APP}" "${INSTALL_DIR}/DeviceAgent-device.app.zip"

  install_with_ditto "${BUILD_PRODUCTS_DSYM}" "${INSTALLED_DSYM}"
  install_with_ditto "${BUILD_PRODUCTS_DSYM}" \
    "${INSTALL_DIR}/DeviceAgent-device.app.dSYM"

  banner "IPA Code Signing Details"

  DETAILS=`xcrun codesign --display --verbose=2 ${INSTALLED_APP} 2>&1`

  echo "$(tput setaf 4)$DETAILS$(tput sgr0)"

  echo ""

  CAL_VERSION=`xcrun strings "${INSTALLED_APP}/${XC_TARGET}" | grep -E 'CALABASH VERSION' | head -n 1`
  info "${CAL_VERSION}"

  echo ""
fi
banner "Preparing for XTC Submit"

XTC_DIR="xtc-submit"
rm -rf "${XTC_DIR}"
mkdir -p "${XTC_DIR}"

install_with_ditto cucumber/features "${XTC_DIR}/features"
install_with_ditto cucumber/config/xtc-profiles.yml "${XTC_DIR}/cucumber.yml"
install_with_ditto cucumber/config/xtc-hooks.rb \
  "${XTC_DIR}/features/support/01_launch.rb"
install_with_ditto "${INSTALLED_IPA}" "${XTC_DIR}/"
install_with_ditto "${INSTALLED_DSYM}" "${XTC_DIR}/${DSYM}"
mkdir -p "${XTC_DIR}/.xtc"

rm -rf "${XTC_DIR}/features/.idea"

cat >"${XTC_DIR}/Gemfile" <<EOF
source "https://rubygems.org"

gem "calabash-cucumber"
gem "cucumber", "2.4.0"
gem "rspec", "~> 3.0"
gem "xamarin-test-cloud"
EOF

info "Wrote ${XTC_DIR}/Gemfile with contents"
cat "${XTC_DIR}/Gemfile"

info "Done!"
