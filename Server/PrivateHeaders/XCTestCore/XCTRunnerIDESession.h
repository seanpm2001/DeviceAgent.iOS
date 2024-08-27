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

#import "XCDebugLogDelegate-Protocol.h"
#import "XCTHarnessEventReporting-Protocol.h"
#import "XCTMessagingChannel_IDEToRunner-Protocol.h"
#import "XCTMessagingRole_ProcessMonitoring-Protocol.h"
#import "XCTMessagingRole_TestExecution-Protocol.h"
#import "_XCTestObservationInternal-Protocol.h"

@class DTXConnection, NSString, XCTCapabilities, XCTFuture, XCTPromise, XCTestRun;
@protocol XCTMessagingChannel_RunnerToIDE, NSObject, XCTRunnerIDESessionDelegate, XCUIApplicationMonitor;


@protocol XCTRunnerIDESessionDelegate;

@interface XCTRunnerIDESession : NSObject <XCTMessagingChannel_IDEToRunner, _XCTestObservationInternal, XCTMessagingRole_ProcessMonitoring, XCTMessagingRole_TestExecution, XCTHarnessEventReporting, XCDebugLogDelegate>
{
    struct os_unfair_lock_s _lock;
    XCTCapabilities *_IDECapabilities;
    XCTFuture *_readyForTestingFuture;
    XCTFuture *_testConfigurationFuture;
    XCTFuture *_IDEProxyFuture;
    id <XCTRunnerIDESessionDelegate> _delegate;
    id <XCUIApplicationMonitor> _applicationMonitor;
    DTXConnection *_IDEConnection;
    id <XCTMessagingChannel_RunnerToIDE, NSObject> _IDEProxy;
    XCTPromise *_readyForTestingPromise;
    XCTPromise *_IDEProxyPromise;
    XCTestRun *_currentTestRun;
    CDUnknownBlockType _readinessReply;
}

@property(retain) XCTCapabilities *IDECapabilities;
@property(readonly) DTXConnection *IDEConnection;
@property(readonly) id <XCTMessagingChannel_RunnerToIDE, NSObject> IDEProxy;
@property(readonly) XCTFuture *IDEProxyFuture;
@property(readonly) XCTPromise *IDEProxyPromise;
@property __weak id <XCUIApplicationMonitor> applicationMonitor;
@property(retain) XCTestRun *currentTestRun;
@property __weak id <XCTRunnerIDESessionDelegate> delegate;
@property(copy) CDUnknownBlockType readinessReply;
@property(readonly) XCTFuture *readyForTestingFuture;
@property(readonly) XCTPromise *readyForTestingPromise;
@property(readonly) XCTFuture *testConfigurationFuture;

+ (double)IDEConnectionTimeout;
+ (void)daemonMediatedSessionForSessionIdentifier:(id)arg1 daemonSession:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)exportedCapabilities;
+ (void)setSharedSession:(id)arg1;
+ (id)sharedSession;
- (id)_IDE_executeTestsWithIdentifiersToRun:(id)arg1 identifiersToSkip:(id)arg2;
- (id)_IDE_fetchAllTestIdentifiers;
- (id)_IDE_fetchParallelizableTestIdentifiers;
- (id)_IDE_processWithBundleID:(id)arg1 path:(id)arg2 pid:(id)arg3 crashedUnderSymbol:(id)arg4;
- (id)_IDE_processWithToken:(id)arg1 exitedWithStatus:(id)arg2;
- (id)_IDE_shutdown;
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(id)arg1;
- (id)_IDE_stopTrackingProcessWithToken:(id)arg1;
- (void)_context:(id)arg1 didFinishActivity:(id)arg2;
- (void)_context:(id)arg1 willStartActivity:(id)arg2;
- (void)_debugLogCIState;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(NSUInteger)arg13 polarity:(NSInteger)arg14;
- (void)flushOutgoingMessagesWithIDEConfirmationTimeout:(double)arg1;
- (id)initWithTransport:(id)arg1 delegate:(id)arg2;
- (void)logDebugMessage:(id)arg1;
- (void)reportBootstrappingFailure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportDidBeginExecutingTestPlan;
- (void)reportDidFinishExecutingTestPlanWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportInitializationForUITestingFinishedWithError:(id)arg1;
- (void)reportSelfDiagnosisIssue:(id)arg1 description:(id)arg2;
- (void)reportStallOnMainThreadInTestCase:(id)arg1 file:(id)arg2 line:(NSUInteger)arg3;
- (void)reportTestWithIdentifier:(id)arg1 didExceedExecutionTimeAllowance:(double)arg2;
- (void)testBundleDidFinish:(id)arg1;
- (void)testBundleWillStart:(id)arg1;
- (void)testCase:(id)arg1 didRecordExpectedFailure:(id)arg2;
- (void)testCase:(id)arg1 didRecordIssue:(id)arg2;
- (void)testCase:(id)arg1 didRecordSkipWithDescription:(id)arg2 sourceCodeContext:(id)arg3;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCasePlaceholder:(id)arg1 isUnavailableWithReason:(id)arg2;
- (void)testCaseWillStart:(id)arg1;
- (void)testSuite:(id)arg1 didRecordExpectedFailure:(id)arg2;
- (void)testSuite:(id)arg1 didRecordIssue:(id)arg2;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuiteWillStart:(id)arg1;



@end

