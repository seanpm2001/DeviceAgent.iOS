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

@class NSData, XCSynthesizedEventRecord;

@protocol XCTMessagingRole_ForcePressureSupportQuerying
- (void)_XCT_postTelemetryData:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_XCT_requestCurrentKeyboardModifierFlagsWithReply:(void (^)(NSUInteger, NSError *))arg1;
- (void)_XCT_requestPressureEventsSupported:(void (^)(BOOL, NSError *))arg1;
- (void)_XCT_synthesizeEvent:(XCSynthesizedEventRecord *)arg1 implicitConfirmationInterval:(double)arg2 completion:(void (^)(NSError *))arg3;
@end

