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

#import "XCElementSnapshot.h"

#import "XCUIElementAttributes-Protocol.h"
#import "XCUIElementSnapshot-Protocol.h"
#import "XCUIElementSnapshotCoordinateTransforms-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface XCElementSnapshot (XCUIElementAttributes) <XCUIElementSnapshotCoordinateTransforms, XCUIElementSnapshot, XCUIElementAttributes>
- (BOOL)_canTransformPoint:(CGPoint)arg1;
- (BOOL)_elementIsContainerSubviewWithMatchingFrame:(id)arg1;
- (id)_snapshotForAccessibilityElement:(id)arg1 error:(id *)arg2;
- (id)_transformParametersOrError:(id *)arg1;
- (id)_transformPointWithRequest:(id)arg1 error:(id *)arg2;
- (id)_transformRectWithRequest:(id)arg1 error:(id *)arg2;
- (id)hitPoint:(id *)arg1;
- (id)hitPointForScrolling:(id *)arg1;
- (id)hitTest:(CGPoint)arg1;
- (id)hostingAndOrientationTransformedPoint:(CGPoint)arg1 error:(id *)arg2;
- (id)hostingAndOrientationTransformedRect:(CGRect)arg1 error:(id *)arg2;
- (id)point:(CGPoint)arg1 transformedForEventSynthesisFromOrientation:(NSInteger)arg2 error:(id *)arg3;
- (id)reparentedOrphanElementMatchingAccessibilityElement:(id)arg1 inconsistentRelationshipDescriptions:(id *)arg2 error:(id *)arg3;
- (id)snapshotFetchingIfNeededIntoTreeForAccessibilityElement:(id)arg1 error:(id *)arg2;
- (id)userOrientationTransformedEventSynthesisRect:(CGRect)arg1 error:(id *)arg2;

@end

