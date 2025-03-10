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

#import "XCTCapabilitiesProviding-Protocol.h"

@class NSOrderedSet, NSSet, NSString, XCElementSnapshot, XCTCapabilities;
@protocol XCTMatchingElementIterator;

@protocol XCTElementSetTransformer <NSObject, NSCopying, XCTCapabilitiesProviding>
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(XCTCapabilities *)arg1;
- (id <XCTMatchingElementIterator>)iteratorForInput:(XCElementSnapshot *)arg1;
- (NSSet *)requiredKeyPathsOrError:(id *)arg1;
- (NSOrderedSet *)transform:(NSOrderedSet *)arg1 relatedElements:(id *)arg2;
@end

