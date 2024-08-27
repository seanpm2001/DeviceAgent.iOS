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


@class NSArray, NSIndexPath, NSNumber, NSSet, NSString;

@interface XCSourceCodeTreeNode : NSObject <NSSecureCoding>
{
    NSArray *_childNodes;
    NSUInteger _selectedChildNodeIndex;
    NSString *_sourceCodePrefix;
    NSString *_sourceCodeSuffix;
    XCSourceCodeTreeNode *_parentNode;
    NSSet *__identifierValues;
    NSNumber *__index;
    NSString *__queryType;
    NSNumber *__returnType;
    NSNumber *__calleeType;
    NSNumber *__elementType;
}

@property(copy, setter=_setCalleeType:) NSNumber *_calleeType;
@property(copy, setter=_setElementType:) NSNumber *_elementType;
@property(copy, setter=_setIdentifierValues:) NSSet *_identifierValues;
@property(copy, setter=_setIndex:) NSNumber *_index;
@property(copy, setter=_setQueryType:) NSString *_queryType;
@property(copy, setter=_setReturnType:) NSNumber *_returnType;
@property(retain) NSArray *childNodes;
@property(readonly, copy) NSString *displayName;
@property __weak XCSourceCodeTreeNode *parentNode;
@property(readonly) XCSourceCodeTreeNode *rootNode;
@property(retain) XCSourceCodeTreeNode *selectedChildNode;
@property NSUInteger selectedChildNodeIndex;
@property(readonly) NSIndexPath *selectedChildNodeIndexPath;
@property(copy) NSString *sourceCodePrefix;
@property(copy) NSString *sourceCodeSuffix;

+ (NSUInteger)_defaultOptions;
+ (BOOL)_isContentEqualIgnoringSelection:(BOOL)arg1 childNodes:(id)arg2 childNodes:(id)arg3 toDistanceFromRoot:(NSInteger)arg4;
+ (BOOL)_isContentOfNodesArraysEqual:(id)arg1 ignoringSelection:(BOOL)arg2 toDistanceFromRoot:(NSInteger)arg3;
+ (BOOL)_isContentOfNodesEqual:(id)arg1 ignoringSelection:(BOOL)arg2 toDistanceFromRoot:(NSInteger)arg3;
+ (id)_nodesByMergingSimilarNodes:(id)arg1;
+ (struct _NSRange)_rangeOfFirstSourceCodeTreeInString:(id)arg1 range:(struct _NSRange)arg2 compiledSourceCodeRange:(struct _NSRange *)arg3 jsonRange:(struct _NSRange *)arg4;
+ (void)_shareSourceCodeStringsForNodes:(id)arg1;
+ (id)_sourceCodeForNodes:(id)arg1 error:(id *)arg2;
+ (id)_stringByDecodingSourceCode:(id)arg1;
+ (id)_stringByEncodingSourceCode:(id)arg1;
+ (id)_stringRepresentationsOfNodesAsSeparateLines:(id)arg1 language:(NSUInteger)arg2 options:(NSUInteger)arg3 error:(id *)arg4;
+ (struct _NSRange)rangeOfFirstSourceCodeTreeInString:(id)arg1 range:(struct _NSRange)arg2;
+ (id)stringRepresentationsOfNodesAsSeparateLines:(id)arg1 language:(NSUInteger)arg2 error:(id *)arg3;
+ (id)treeForStringRepresentation:(id)arg1 range:(struct _NSRange)arg2 error:(id *)arg3;
- (void)_absorbOnlyChildrenIntoParents;
- (BOOL)_canHaveSiblingNode:(id)arg1;
- (BOOL)_canPushPutSolitaryRootNodes;
- (id)_copyIncludingNodesWithDistanceFromRoot:(NSUInteger)arg1 descendantChildrenArrays:(id)arg2 selectedChildNodeIndexes:(id)arg3;
- (id)_copyIncludingNodesWithDistanceFromRoot:(NSInteger)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)_copyIncludingNodesWithMinimumDistanceFromLeaf:(NSUInteger)arg1 descendantChildrenArrays:(id)arg2 selectedChildNodeIndexes:(id)arg3;
- (id)_depthStringWithDepth:(NSUInteger)arg1;
- (NSUInteger)_descendantCount;
- (NSUInteger)_distanceFromRoot;
- (BOOL)_isContentEqual:(id)arg1 ignoringSelection:(BOOL)arg2 toDistanceFromRoot:(NSUInteger)arg3;
- (BOOL)_leavesHaveNoNonLeafSiblingsAndHaveSamePrefix:(id *)arg1 suffix:(id *)arg2;
- (BOOL)_leavesHaveSameAccumulatedPrefix:(id *)arg1;
- (NSUInteger)_maximumDistanceFromLeaf;
- (NSUInteger)_minimumDistanceFromLeaf;
- (id)_stringRepresentationWithCompiledCodeRange:(struct _NSRange *)arg1 options:(NSUInteger)arg2 error:(id *)arg3;
- (id)_stringRepresentationWithOptions:(NSUInteger)arg1 error:(id *)arg2;
- (id)_treeAsJSONWithError:(id *)arg1;
- (id)_treeByPushingOutPrefix:(id *)arg1 error:(id *)arg2;
- (id)copy;
- (id)descriptionWithDepth:(NSUInteger)arg1;
- (id)initWithSourceCodePrefix:(id)arg1 sourceCodeSuffix:(id)arg2;
- (id)selectedChildNodesIndexesWithError:(id *)arg1;
- (id)selectedDescendantsSourceCodeWithError:(id *)arg1;
- (BOOL)setChildNodes:(id)arg1 error:(id *)arg2;
- (void)setChildrenOnAllLeafNodes:(id)arg1 selectChildNodeIndex:(NSUInteger)arg2;
- (id)sourceCodeForAllDescendants;
- (id)stringRepresentationWithCompiledCodeRange:(struct _NSRange *)arg1 error:(id *)arg2;
- (id)stringRepresentationWithError:(id *)arg1;

@end

