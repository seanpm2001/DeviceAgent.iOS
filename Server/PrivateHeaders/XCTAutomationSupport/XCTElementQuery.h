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

#import "XCTCapabilitiesProviding-Protocol.h"

@class NSArray, NSDictionary, NSSet, XCAccessibilityElement, XCElementSnapshot, XCTTimeoutControls;
@protocol XCTElementSnapshotAttributeDataSource, XCTElementSnapshotProvider;


@protocol XCTElementSnapshotProvider;
@protocol XCTElementSnapshotAttributeDataSource;

@interface XCTElementQuery : NSObject <NSSecureCoding, XCTCapabilitiesProviding>
{
    BOOL _isMacOS;
    BOOL _suppressAttributeKeyPathAnalysis;
    BOOL _useLegacyElementType;
    XCAccessibilityElement *_rootElement;
    NSUInteger _options;
    XCTTimeoutControls *_timeoutControls;
    id <XCTElementSnapshotProvider> _snapshotProvider;
    id <XCTElementSnapshotAttributeDataSource> _elementSnapshotAttributeDataSource;
    XCElementSnapshot *_rootElementSnapshot;
    CDUnknownBlockType _evaluationContext;
    NSArray *_transformers;
}

@property __weak id <XCTElementSnapshotAttributeDataSource> elementSnapshotAttributeDataSource;
@property(readonly, copy) NSSet *elementTypes;
@property(copy, nonatomic) CDUnknownBlockType evaluationContext;
@property(readonly) BOOL isMacOS;
@property(readonly) NSUInteger options;
@property(readonly, copy) XCAccessibilityElement *rootElement;
@property(retain) XCElementSnapshot *rootElementSnapshot;
@property(retain) id <XCTElementSnapshotProvider> snapshotProvider;
@property BOOL suppressAttributeKeyPathAnalysis;
@property(retain) XCTTimeoutControls *timeoutControls;
@property BOOL useLegacyElementType;
@property(readonly, copy) NSArray *snapshotAttributes;
@property(readonly, copy) NSDictionary *snapshotParameters;
@property(readonly) BOOL supportsAttributeKeyPathAnalysis;
@property(readonly, copy) NSArray *transformers;

+ (id)_descriptionForTransformerArray:(id)arg1;
+ (id)_firstMatchTransformerSubarraysFromArray:(id)arg1 trailingMatchAllTransformers:(id *)arg2;
+ (void)provideCapabilitiesToBuilder:(id)arg1;
- (id)_allMatchingSnapshotsForInput:(id)arg1 transformers:(id)arg2 relatedElements:(id *)arg3 noMatchesMessage:(id *)arg4 error:(id *)arg5;
- (id)_firstMatchingSnapshotForInput:(id)arg1 transformers:(id)arg2 relatedElements:(id *)arg3 noMatchesMessage:(id *)arg4 error:(id *)arg5;
- (id)_firstMatchingSnapshotForInput:(id)arg1 transformersSubarrays:(id)arg2 relatedElements:(id *)arg3 noMatchesMessage:(id *)arg4 error:(id *)arg5;
- (id)_rootElementSnapshot:(id *)arg1;
- (id)_snapshotForElement:(id)arg1 error:(id *)arg2;
- (BOOL)canBeRemotelyEvaluatedWithCapabilities:(id)arg1;
- (BOOL)hasTransformerWithStopsOnFirstMatch;
- (id)initWithRootElement:(id)arg1 transformers:(id)arg2;
- (id)initWithRootElement:(id)arg1 transformers:(id)arg2 options:(NSUInteger)arg3;
- (id)initWithRootElement:(id)arg1 transformers:(id)arg2 options:(NSUInteger)arg3 isMacOS:(BOOL)arg4;
- (id)initWithRootElement:(id)arg1 transformers:(id)arg2 options:(NSUInteger)arg3 isMacOS:(BOOL)arg4 timeoutControls:(id)arg5;
- (id)matchingSnapshotsInSnapshotTree:(id)arg1 relatedElements:(id *)arg2 noMatchesMessage:(id *)arg3 error:(id *)arg4;
- (id)matchingSnapshotsWithRelatedElements:(id *)arg1 noMatchesMessage:(id *)arg2 error:(id *)arg3;

@end

