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

@class NSString, Protocol;

@interface DTXProxyRequestHandler : NSObject
{
    Protocol *_publishedProtocol;
    NSString *_publishedProtocolName;
    Protocol *_peerProtocol;
    NSString *_peerProtocolName;
    CDUnknownBlockType _handlerBlock;
}

@property(readonly, copy) NSString *channelIdentifier;
@property(readonly, copy) CDUnknownBlockType handlerBlock;
@property(readonly) Protocol *peerProtocol;
@property(readonly, copy) NSString *peerProtocolName;
@property(readonly) Protocol *publishedProtocol;
@property(readonly, copy) NSString *publishedProtocolName;

- (id)initWithPublishedProtocol:(id)arg1 publishedProtocolName:(id)arg2 peerProtocol:(id)arg3 peerProtocolName:(id)arg4 handlerBlock:(CDUnknownBlockType)arg5;
- (BOOL)matchesPublishedProtocolName:(id)arg1 peerProtocolName:(id)arg2;

@end

