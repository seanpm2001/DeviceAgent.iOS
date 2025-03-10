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

#import "XCTWaiterManagement-Protocol.h"
#import "XCTestExpectationDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue, XCTWaiterDelegate, XCTWaiterManager;


@protocol XCTWaiterDelegate;

@interface XCTWaiter : NSObject <XCTestExpectationDelegate, XCTWaiterManagement>
{
    BOOL _enforceOrderOfFulfillment;
    id <XCTWaiterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSInteger _state;
    NSInteger _result;
    double _timeout;
    NSArray *_waitCallStackReturnAddresses;
    NSArray *_expectations;
    NSMutableArray *_mutableFulfilledExpectations;
    struct __CFRunLoop *_waitingRunLoop;
    id <XCTWaiterManager> _manager;
    NSUInteger _waitingThreadId;
}

@property(readonly) BOOL currentContextIsNested;
@property __weak id <XCTWaiterDelegate> delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property BOOL enforceOrderOfFulfillment;
@property(copy, nonatomic) NSArray *expectations;
@property(readonly) NSArray *fulfilledExpectations;
@property(readonly, getter=isInProgress) BOOL inProgress;
@property __weak id <XCTWaiterManager> manager;
@property(readonly, nonatomic) NSMutableArray *mutableFulfilledExpectations;
@property NSInteger result;
@property NSInteger state;
@property double timeout;
@property(copy) NSArray *waitCallStackReturnAddresses;
@property struct __CFRunLoop *waitingRunLoop;
@property(readonly) NSUInteger waitingThreadId;

+ (void)handleStalledWaiter:(id)arg1;
+ (void)installWatchdogForWaiter:(id)arg1 timeout:(double)arg2;
+ (void)setStallHandler:(CDUnknownBlockType)arg1;
+ (void)setWatchdogTimeoutSlop:(double)arg1;
+ (id)subsystemQueue;
+ (void)wait:(double)arg1;
+ (NSInteger)waitForExpectations:(id)arg1;
+ (NSInteger)waitForExpectations:(id)arg1 enforceOrder:(BOOL)arg2;
+ (NSInteger)waitForExpectations:(id)arg1 timeout:(double)arg2;
+ (NSInteger)waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(BOOL)arg3;
+ (double)watchdogTimeoutSlop;
- (void)_queue_computeInitiallyFulfilledExpectations;
- (BOOL)_queue_enforceOrderingWithFulfilledExpectations:(id)arg1;
- (void)_queue_setExpectations:(id)arg1;
- (void)_queue_validateExpectationFulfillmentWithTimeoutState:(BOOL)arg1;
- (void)_validateExpectationFulfillmentWithTimeoutState:(BOOL)arg1;
- (void)cancelPrimitiveWait;
- (void)cancelWaiting;
- (void)didFulfillExpectation:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)interruptForWaiter:(id)arg1;
- (BOOL)isFinished;
- (void)primitiveWait:(double)arg1;
- (void)swift_waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (NSInteger)waitForExpectations:(id)arg1;
- (NSInteger)waitForExpectations:(id)arg1 enforceOrder:(BOOL)arg2;
- (NSInteger)waitForExpectations:(id)arg1 timeout:(double)arg2;
- (NSInteger)waitForExpectations:(id)arg1 timeout:(double)arg2 enforceOrder:(BOOL)arg3;


@end

