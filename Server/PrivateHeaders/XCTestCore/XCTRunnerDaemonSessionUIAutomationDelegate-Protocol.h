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

@class NSData, NSString, NSXPCConnection, XCAccessibilityElement;
@protocol XCUIAXNotificationHandling, XCUIApplicationPlatformServicesProviderDelegate;

@protocol XCTRunnerDaemonSessionUIAutomationDelegate <NSObject>

@optional
+ (void)registerCapabilitiesForDaemonConnection:(NSXPCConnection *)arg1 completion:(void (^)(XCTCapabilities *, NSError *))arg2;
- (void)daemonDidUpdatePID:(NSInteger)arg1 forApplicationWithBundleID:(NSString *)arg2 andState:(NSUInteger)arg3;
- (void)finishInitializationForUIAutomation;
- (void)receivedAccessibilityNotification:(NSInteger)arg1 fromElement:(XCAccessibilityElement *)arg2 payload:(NSData *)arg3;
- (void)requestBackgroundAssertionForPID:(NSInteger)arg1 reply:(void (^)(BOOL))arg2;
@end

