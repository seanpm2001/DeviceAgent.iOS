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

@class NSMutableArray;
@protocol XCTestObservation;

@interface XCTestObservationCenter : NSObject
{
    BOOL _suspended;
    NSMutableArray *_observers;
    NSMutableArray *_privateObservers;
    NSMutableArray *_internalObservers;
    CDUnknownBlockType _exceptionHandler;
    id <XCTestObservation> _throwingTestObserver;
    SEL _throwingTestObserverMethod;
}

@property(readonly, copy) CDUnknownBlockType exceptionHandler;
@property(readonly) NSMutableArray *internalObservers;
@property(readonly) NSMutableArray *observers;
@property(readonly) NSMutableArray *privateObservers;
@property BOOL suspended;
@property(retain) id <XCTestObservation> throwingTestObserver;
@property SEL throwingTestObserverMethod;

+ (void)setSharedTestObservationCenter:(id)arg1;
+ (id)sharedTestObservationCenter;
- (void)_context:(id)arg1 didFinishActivity:(id)arg2;
- (void)_context:(id)arg1 willStartActivity:(id)arg2;
- (void)_handleException:(id)arg1 thrownBy:(id)arg2 inMethod:(SEL)arg3;
- (void)_observeTestExecutionForBlock:(CDUnknownBlockType)arg1;
- (void)_performBlockOnInternalObserversWhichRespondToSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;
- (void)_performBlockOnObserversWhichRespondToSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;
- (void)_performBlockOnPrivateObserversWhichRespondToSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;
- (void)_resumeObservation;
- (void)_suspendObservation;
- (void)_suspendObservationForBlock:(CDUnknownBlockType)arg1;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(NSUInteger)arg13 polarity:(NSInteger)arg14;
- (void)_testCase:(id)arg1 didRecordExpectedFailure:(id)arg2;
- (void)_testCase:(id)arg1 didRecordIssue:(id)arg2;
- (void)_testCaseDidStart:(id)arg1;
- (void)_testCaseDidStop:(id)arg1;
- (void)_testCasePlaceholderRun:(id)arg1 isUnavailableWithReason:(id)arg2;
- (void)_testCaseWasSkipped:(id)arg1 withDescription:(id)arg2 sourceCodeContext:(id)arg3;
- (void)_testSuite:(id)arg1 didRecordExpectedFailure:(id)arg2;
- (void)_testSuite:(id)arg1 didRecordIssue:(id)arg2;
- (void)_testSuiteDidStart:(id)arg1;
- (void)_testSuiteDidStop:(id)arg1;
- (void)addTestObserver:(id)arg1;
- (id)initWithObservers:(id)arg1 exceptionHandler:(CDUnknownBlockType)arg2;
- (void)removeTestObserver:(id)arg1;

@end
