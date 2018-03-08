// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

#import "XCTestExpectation.h"

@class NSPredicate, _XCTNSPredicateExpectationImplementation;

@interface XCTNSPredicateExpectation : XCTestExpectation
{
    _XCTNSPredicateExpectationImplementation *_internal;
}

@property(copy) CDUnknownBlockType handler;
@property(retain) _XCTNSPredicateExpectationImplementation *internal;
@property(readonly) id object;
@property double pollingInterval;
@property(readonly, copy) NSPredicate *predicate;
@property(nonatomic) NSUInteger expectedFulfillmentCount; // @dynamic expectedFulfillmentCount;

- (void)cleanup;
- (void)considerFulfilling;
- (id)debugDescription;
- (void)fulfill;
- (id)initWithPredicate:(id)arg1 object:(id)arg2;
- (void)setHasBeenWaitedOn:(BOOL)arg1;


@end
