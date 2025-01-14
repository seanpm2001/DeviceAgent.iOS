// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 26 2020 14:08:26).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

#import <objc/NSObject.h>

#import "XCUIApplicationMonitor-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, XCTestConfiguration, XCUIApplicationImplDepot, XCUIApplicationRegistry;
@protocol OS_dispatch_queue, XCUIDevice, XCUIPlatformApplicationServicesProviding;

@interface XCUIApplicationMonitor : NSObject <XCUIApplicationMonitor>
{
    XCUIApplicationRegistry *_applicationRegistry;
    NSSet *_unsupportedBundleIdentifiersForAutomationSessions;
    id <XCUIDevice> _device;
    id <XCUIPlatformApplicationServicesProviding> _platformServicesProvider;
    XCTestConfiguration *_testConfiguration;
    double _crashReportWaitInterval;
    NSObject<OS_dispatch_queue> *_queue;
    XCUIApplicationImplDepot *_applicationImplDepot;
    NSMutableSet *_trackedBundleIDs;
    NSMutableDictionary *_applicationProcessesForPID;
    NSMutableDictionary *_applicationProcessesForToken;
    NSMutableSet *_launchedApplications;
    NSUUID *_appLaunchSignpostsToken;
    NSMapTable *_applicationsToResponsiveSignpostExpectations;
}

@property(copy) NSUUID *appLaunchSignpostsToken;
@property(readonly, copy) XCUIApplicationImplDepot *applicationImplDepot;
@property(readonly, copy) NSMutableDictionary *applicationProcessesForPID;
@property(readonly, copy) NSMutableDictionary *applicationProcessesForToken;
@property(retain) XCUIApplicationRegistry *applicationRegistry;
@property(readonly) NSMapTable *applicationsToResponsiveSignpostExpectations;
@property double crashReportWaitInterval;
@property(readonly) __weak id <XCUIDevice> device;
@property(readonly, copy) NSMutableSet *launchedApplications;
@property(readonly) id <XCUIPlatformApplicationServicesProviding> platformServicesProvider;
@property(readonly) BOOL providesClientStateUpdates;
@property(retain) NSObject<OS_dispatch_queue> *queue;
@property(readonly) XCTestConfiguration *testConfiguration;
@property(readonly, copy) NSMutableSet *trackedBundleIDs;
@property(readonly) NSSet *unsupportedBundleIdentifiersForAutomationSessions;

- (id)_appFromSet:(id)arg1 thatTransitionedToNotRunningDuringTimeInterval:(double)arg2;
- (void)_handleFirstFramePresentationResponsiveSignpost:(id)arg1;
- (BOOL)_isTrackingBundleID:(id)arg1;
- (void)_setIsTrackingForBundleID:(id)arg1;
- (void)_terminateApplicationProcess:(id)arg1;
- (void)_waitForCrashReportOrCleanExitStatusOfApp:(id)arg1;
- (void)acquireBackgroundAssertionForPID:(NSInteger)arg1 reply:(CDUnknownBlockType)arg2;
- (id)applicationImplementationForApplicationAtPath:(id)arg1 bundleID:(id)arg2;
- (id)applicationProcessWithPID:(NSInteger)arg1;
- (id)applicationProcessWithToken:(id)arg1;
- (void)crashInProcessWithBundleID:(id)arg1 path:(id)arg2 pid:(NSInteger)arg3 symbol:(id)arg4;
- (id)firstFramePresentationResponsiveSignpostExpectationForApplication:(id)arg1;
- (id)initWithDevice:(id)arg1 platformServicesProvider:(id)arg2;
- (id)initWithDevice:(id)arg1 platformServicesProvider:(id)arg2 testConfiguration:(id)arg3;
- (void)launchRequestedForApplicationProcess:(id)arg1;
- (id)monitoredApplicationWithProcessIdentifier:(NSInteger)arg1;
- (void)processWithToken:(id)arg1 exitedWithStatus:(NSInteger)arg2;
- (void)replacePlatformServicesProvider:(id)arg1;
- (void)resetTrackedAppStates;
- (void)setApplicationProcess:(id)arg1 forPID:(NSInteger)arg2;
- (void)setApplicationProcess:(id)arg1 forToken:(id)arg2;
- (void)stopTrackingProcessWithToken:(id)arg1;
- (void)terminateApplicationProcess:(id)arg1 withToken:(id)arg2;
- (void)terminationTrackedForApplicationProcess:(id)arg1;
- (void)updatedApplicationStateSnapshot:(id)arg1;
- (void)waitForUnrequestedTerminationOfLaunchedApplicationsWithTimeout:(double)arg1;


@end

