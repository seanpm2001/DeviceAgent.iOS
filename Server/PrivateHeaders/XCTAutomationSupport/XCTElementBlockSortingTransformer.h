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

#import "XCTElementSetTransformer-Protocol.h"

@class NSSet, NSString;

@interface XCTElementBlockSortingTransformer : NSObject <XCTElementSetTransformer>
{
    BOOL stopsOnFirstMatch;
    NSString *transformationDescription;
    CDUnknownBlockType _comparator;
}

@property(readonly, copy) CDUnknownBlockType comparator;
@property(readonly, copy) NSSet *elementTypes;
@property BOOL stopsOnFirstMatch;
@property(copy) NSString *transformationDescription;
@property(readonly) BOOL supportsAttributeKeyPathAnalysis;

+ (void)provideCapabilitiesToBuilder:(id)arg1;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)arg1;
- (id)initWithComparator:(CDUnknownBlockType)arg1;
- (id)iteratorForInput:(id)arg1;
- (id)requiredKeyPathsOrError:(id *)arg1;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;


@end

