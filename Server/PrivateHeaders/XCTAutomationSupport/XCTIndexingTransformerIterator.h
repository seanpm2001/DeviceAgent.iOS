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

#import "XCTMatchingElementIterator-Protocol.h"

@class NSMutableSet, NSSet, NSString, XCElementSnapshot, XCTElementIndexingTransformer;
@protocol XCTElementSetTransformer;

__attribute__((visibility("hidden")))

@protocol XCTElementSetTransformer;

@interface XCTIndexingTransformerIterator : NSObject <XCTMatchingElementIterator>
{
    BOOL _hasMatched;
    XCElementSnapshot *_input;
    id <XCTElementSetTransformer> _transformer;
    XCElementSnapshot *_currentMatch;
    XCTElementIndexingTransformer *_indexingTransformer;
    NSUInteger _count;
    NSMutableSet *_mutableRelatedElements;
}

@property NSUInteger count;
@property(retain) XCElementSnapshot *currentMatch;
@property(readonly) NSSet *currentRelatedElements;
@property(readonly) BOOL hasMatched;
@property(readonly) __weak XCTElementIndexingTransformer *indexingTransformer;
@property(retain) XCElementSnapshot *input;
@property(readonly) NSMutableSet *mutableRelatedElements;
@property(readonly) id <XCTElementSetTransformer> transformer;

- (id)initWithInput:(id)arg1 filteringTransformer:(id)arg2;
- (id)nextMatch;

// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


@end

