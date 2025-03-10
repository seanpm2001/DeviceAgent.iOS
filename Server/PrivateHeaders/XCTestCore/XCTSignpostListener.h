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

#import "XCTSignpostListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol XCTRemoteSignpostListenerProxy;

@interface XCTSignpostListener : NSObject <XCTSignpostListener>
{
    id <XCTRemoteSignpostListenerProxy> _remoteSignpostListenerProxy;
    NSMutableDictionary *_tokensToHandlers;
}

@property(readonly) id <XCTRemoteSignpostListenerProxy> remoteSignpostListenerProxy;
@property(readonly) NSMutableDictionary *tokensToHandlers;

+ (id)localSignpostListener;
+ (double)registerSignpostListenerTimeout;
- (id)initWithRemoteSignpostListenerProxy:(id)arg1;
- (void)receivedSignpost:(id)arg1 withToken:(id)arg2;
- (id)registerForSignpostsFromSubsystem:(id)arg1 category:(id)arg2 intervalTimeout:(double)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (void)unregisterForSignpostsWithToken:(id)arg1;


@end

