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
@property(readonly) XCTElementIndexingTransformer *indexingTransformer;
@property(retain) XCElementSnapshot *input;
@property(readonly) NSMutableSet *mutableRelatedElements;
@property(readonly) id <XCTElementSetTransformer> transformer;

- (id)initWithInput:(id)arg1 filteringTransformer:(id)arg2;
- (id)nextMatch;


@end

