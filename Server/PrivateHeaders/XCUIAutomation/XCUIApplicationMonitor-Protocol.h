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

#import "XCUIApplicationPlatformServicesProviderDelegate-Protocol.h"
#import "XCUIApplicationProcessTracker-Protocol.h"

@class NSNumber, NSSet, NSString, XCUIApplicationImpl, XCUIApplicationProcess, XCUIApplicationRegistry;
@protocol XCUIPlatformApplicationServicesProviding;

@protocol XCUIApplicationMonitor <NSObject, XCUIApplicationProcessTracker, XCUIApplicationPlatformServicesProviderDelegate>
- (void)acquireBackgroundAssertionForPID:(NSInteger)arg1 reply:(void (^)(BOOL))arg2;
- (XCUIApplicationImpl *)applicationImplementationForApplicationAtPath:(NSString *)arg1 bundleID:(NSString *)arg2;
- (void)crashInProcessWithBundleID:(NSString *)arg1 path:(NSString *)arg2 pid:(NSInteger)arg3 symbol:(NSString *)arg4;
- (void)launchRequestedForApplicationProcess:(XCUIApplicationProcess *)arg1;
- (void)processWithToken:(NSNumber *)arg1 exitedWithStatus:(NSInteger)arg2;
- (void)replacePlatformServicesProvider:(id <XCUIPlatformApplicationServicesProviding>)arg1;
- (void)resetTrackedAppStates;
- (void)stopTrackingProcessWithToken:(NSNumber *)arg1;
- (void)terminateApplicationProcess:(XCUIApplicationProcess *)arg1 withToken:(id)arg2;
- (void)terminationTrackedForApplicationProcess:(XCUIApplicationProcess *)arg1;
- (void)waitForUnrequestedTerminationOfLaunchedApplicationsWithTimeout:(double)arg1;
@end

