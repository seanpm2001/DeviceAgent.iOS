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

#import <objc/NSObject.h>

#import "XCDebugLogDelegate-Protocol.h"
#import "XCTASDebugLogDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface XCTDefaultDebugLogHandler : NSObject <XCTASDebugLogDelegate, XCDebugLogDelegate>
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_logSinks;
    NSMutableArray *_debugMessageBuffer;
}

@property(readonly) NSMutableArray *debugMessageBuffer;

+ (id)sharedHandler;
- (void)_locked_flushDebugMessageBufferWithBlock:(CDUnknownBlockType)arg1;
- (void)addLogSink:(id)arg1;
- (void)logDebugMessage:(id)arg1;
- (void)logStartupInfo;
- (void)printBufferedDebugMessages;
- (void)removeLogSink:(id)arg1;

// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


@end

