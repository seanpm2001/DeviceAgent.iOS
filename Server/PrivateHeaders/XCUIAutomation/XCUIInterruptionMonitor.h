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

#import "XCUIInterruptionMonitoring-Protocol.h"


@interface XCUIInterruptionMonitor : NSObject <XCUIInterruptionMonitoring>
{
    BOOL _didHandleUIInterruption;
    NSInteger _platform;
}

@property BOOL didHandleUIInterruption;
@property(readonly) NSInteger platform;

+ (CDUnknownBlockType)defaultInterruptionHandler_iOS_watchOS;
- (id)addInterruptionHandlerWithDescription:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)handleInterruptingElement:(id)arg1;
- (id)initWithPlatform:(NSInteger)arg1;
- (void)removeInterruptionHandlerWithIdentifier:(id)arg1;

// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


@end

