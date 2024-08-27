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

@class NSData;

@protocol XCTMessagingRole_HIDEventRecording
- (void)_XCT_playBackHIDEventRecordingFromData:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_XCT_startHIDEventRecordingWithReply:(void (^)(NSError *))arg1;
- (void)_XCT_stopHIDEventRecordingWithReply:(void (^)(NSData *, NSError *))arg1;
@end

