// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled May 27 2023 00:50:17).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

#import "XCTRunnerDaemonSession.h"

#import "XCTMessagingRole_UIApplicationStateUpdating-Protocol.h"
#import "XCUIApplicationAutomationSessionProviding-Protocol.h"
#import "XCUIDeviceAutomationModeInterface-Protocol.h"
#import "XCUIDeviceEventAndStateInterface-Protocol.h"
#import "XCUILocalDeviceScreenshotIPCInterface-Protocol.h"
#import "XCUIPlatformApplicationServicesProviding-Protocol.h"
#import "XCUIRemoteAccessibilityInterface-Protocol.h"
#import "XCUIRemoteSiriInterface-Protocol.h"
#import "XCUIResetAuthorizationStatusOfProtectedResourcesInterface-Protocol.h"

@class NSString, XCTCapabilities;
@protocol XCUIApplicationPlatformServicesProviderDelegate;

@interface XCTRunnerDaemonSession (XCUIPlatformApplicationServicesProviding) <XCUIPlatformApplicationServicesProviding, XCUIDeviceAutomationModeInterface, XCUIResetAuthorizationStatusOfProtectedResourcesInterface, XCUIRemoteSiriInterface, XCUIDeviceEventAndStateInterface, XCUILocalDeviceScreenshotIPCInterface, XCUIApplicationAutomationSessionProviding, XCTMessagingRole_UIApplicationStateUpdating, XCUIRemoteAccessibilityInterface>
+ (id)capabilities;
+ (id)daemonCapabilitiesForProtocolVersion:(NSUInteger)arg1 platform:(NSUInteger)arg2 error:(id *)arg3;
+ (void)legacyCapabilitiesForDaemonConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)modernCapabilitiesForDaemonConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)registerCapabilitiesForDaemonConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)unsupportedBundleIdentifiersForAutomationSessions;
- (void)_XCT_applicationDidUpdateState:(id)arg1;
- (void)_XCT_applicationWithBundleID:(id)arg1 didUpdatePID:(NSInteger)arg2 andState:(NSUInteger)arg3;
- (id)axNotificationHandler;
- (void)beginMonitoringApplicationWithSpecifier:(id)arg1;
- (void)clearSimulatedLocationWithReply:(CDUnknownBlockType)arg1;
- (NSUInteger)currentKeyboardModifierFlags;
- (void)daemonDidUpdatePID:(NSInteger)arg1 forApplicationWithBundleID:(id)arg2 andState:(NSUInteger)arg3;
- (BOOL)enableAutomationModeWithError:(id *)arg1;
- (void)enableFauxCollectionViewCells:(CDUnknownBlockType)arg1;
- (void)fetchAttributes:(id)arg1 forElement:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchAttributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchParameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)fetchSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)finishInitializationForUIAutomation;
- (void)getAppearanceModeWithReply:(CDUnknownBlockType)arg1;
- (void)getDeviceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)getInterfaceOrientationWithReply:(CDUnknownBlockType)arg1;
- (void)getSimulatedLocationWithReply:(CDUnknownBlockType)arg1;
- (void)hasHardwareButton:(NSInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (double)implicitEventConfirmationIntervalForCurrentContext;
- (void)injectAssistantRecognitionStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)injectVoiceRecognitionAudioInputPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)launchApplicationWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environment:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)loadAccessibilityWithTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)openDefaultApplicationForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 usingApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performAccessibilityAction:(id)arg1 onElement:(id)arg2 value:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)performDeviceEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playBackHIDEventRecordingFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receivedAccessibilityNotification:(NSInteger)arg1 fromElement:(id)arg2 payload:(id)arg3;
- (void)registerForAccessibilityNotification:(NSInteger)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestApplicationSpecifierForPID:(NSInteger)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestAutomationSessionForTestTargetWithPID:(NSInteger)arg1 preferredBackendPath:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestBackgroundAssertionForPID:(NSInteger)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestElementAtPoint:(CGPoint)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)requestPointerEventsSupportedOrError:(id *)arg1;
- (BOOL)requestPressureEventsSupportedOrError:(id *)arg1;
- (void)requestScreenshotWithRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)requestSiriEnabledStatus:(CDUnknownBlockType)arg1;
- (void)requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestUnsupportedBundleIdentifiersForAutomationSessions:(CDUnknownBlockType)arg1;
- (BOOL)resetAuthorizationStatusForBundleIdentifier:(id)arg1 resourceIdentifier:(id)arg2 error:(id *)arg3;
- (void)runAccessibilityAuditForElement:(id)arg1 withConfiguration:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setAXTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setAxNotificationHandler:(id)arg1;
- (void)setImplicitEventConfirmationIntervalForCurrentContext:(double)arg1;
- (void)setImplicitEventConfirmationIntervalForCurrentContextWithoutSideEffects:(double)arg1;
- (void)setLocalizableStringsDataGatheringEnabled:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSimulatedLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startHIDEventRecordingWithReply:(CDUnknownBlockType)arg1;
- (void)startSiriUIRequestWithAudioFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSiriUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopHIDEventRecordingWithReply:(CDUnknownBlockType)arg1;
- (BOOL)supportsHIDEventRecording;
- (id)synthesizeEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)terminateApplicationWithBundleID:(id)arg1 pid:(NSInteger)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unloadAccessibility:(CDUnknownBlockType)arg1;
- (void)unregisterForAccessibilityNotification:(NSInteger)arg1 registrationToken:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)updateAppearanceMode:(NSInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDeviceOrientation:(NSInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)useLegacyEventCoordinateTransformationPath;
- (BOOL)usePointTransformationsForFrameConversions;

@end

