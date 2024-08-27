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

@class DTXConnection, NSString;
@protocol OS_dispatch_queue;

@interface DTXChannel : NSObject
{
    NSString *_label;
    DTXConnection *_connection;
    DTXConnection *_strongConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct os_unfair_lock_s _handlerGuard;
    NSUInteger _channelCode;
    NSInteger _compressionTypeHint;
    BOOL _canceled;
    struct __DTXChannelGuarded_private {
        CDStruct_f5f3468d _fields;
    } _channelGuarded;
}

@property(readonly, nonatomic) DTXConnection *_connection;
@property(readonly, nonatomic) NSUInteger channelCode;
@property NSInteger compressionTypeHint;
@property BOOL isCanceled;
@property(copy, nonatomic) NSString *label;

- (CDStruct_f5f3468d)_callbackSnapshot;
- (void)_scheduleBlock:(CDUnknownBlockType)arg1;
- (void)_scheduleMessage:(id)arg1 tracker:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_setDispatchTarget:(id)arg1 queue:(id)arg2;
- (void)_setDispatchValidator:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithConnection:(id)arg1 channelIdentifier:(NSUInteger)arg2 label:(id)arg3;
- (void)registerDisconnectHandler:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)sendControlAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendControlSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)sendMessageAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessageSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)setDispatchTarget:(id)arg1;
- (void)setMessageHandler:(CDUnknownBlockType)arg1;
- (void)suspend;



@end

