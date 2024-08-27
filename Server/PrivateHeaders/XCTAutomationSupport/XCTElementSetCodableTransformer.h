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

#import "XCTElementSetTransformer-Protocol.h"

@class NSSet, NSString;

@interface XCTElementSetCodableTransformer : NSObject <XCTElementSetTransformer, NSSecureCoding>
{
    BOOL _stopsOnFirstMatch;
    NSString *_transformationDescription;
}

@property(readonly, copy) NSSet *elementTypes;
@property BOOL stopsOnFirstMatch;
@property(copy) NSString *transformationDescription;
@property(readonly) BOOL supportsAttributeKeyPathAnalysis;

+ (void)provideCapabilitiesToBuilder:(id)arg1;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)arg1;
- (id)iteratorForInput:(id)arg1;
- (id)requiredKeyPathsOrError:(id *)arg1;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;

// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


@end

