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

@class NSError, NSNumber, NSString, XCTCapabilities, XCTExpectedFailure, XCTIssue, XCTSourceCodeContext, XCTTestIdentifier, XCTestCaseRunConfiguration;

@protocol XCTMessagingRole_TestReporting
- (id)_XCT_didBeginExecutingTestPlan;
- (id)_XCT_didFailToBootstrapWithError:(NSError *)arg1;
- (id)_XCT_didFinishExecutingTestPlan;
- (id)_XCT_reportTestWithIdentifier:(XCTTestIdentifier *)arg1 didExceedExecutionTimeAllowance:(NSNumber *)arg2;
- (id)_XCT_testBundleReadyWithProtocolVersion:(NSNumber *)arg1 minimumVersion:(NSNumber *)arg2;
- (id)_XCT_testCaseDidStartWithIdentifier:(XCTTestIdentifier *)arg1 testCaseRunConfiguration:(XCTestCaseRunConfiguration *)arg2;
- (id)_XCT_testCaseWithIdentifier:(XCTTestIdentifier *)arg1 didFinishWithStatus:(NSString *)arg2 duration:(NSNumber *)arg3;
- (id)_XCT_testCaseWithIdentifier:(XCTTestIdentifier *)arg1 didRecordExpectedFailure:(XCTExpectedFailure *)arg2;
- (id)_XCT_testCaseWithIdentifier:(XCTTestIdentifier *)arg1 didRecordIssue:(XCTIssue *)arg2;
- (id)_XCT_testCaseWithIdentifier:(XCTTestIdentifier *)arg1 didStallOnMainThreadInFile:(NSString *)arg2 line:(NSNumber *)arg3;
- (id)_XCT_testCaseWithIdentifier:(XCTTestIdentifier *)arg1 wasSkippedWithMessage:(NSString *)arg2 sourceCodeContext:(XCTSourceCodeContext *)arg3;
- (id)_XCT_testRunnerReadyWithCapabilities:(XCTCapabilities *)arg1;
- (id)_XCT_testSuiteWithIdentifier:(XCTTestIdentifier *)arg1 didFinishAt:(NSString *)arg2 runCount:(NSNumber *)arg3 skipCount:(NSNumber *)arg4 failureCount:(NSNumber *)arg5 expectedFailureCount:(NSNumber *)arg6 uncaughtExceptionCount:(NSNumber *)arg7 testDuration:(NSNumber *)arg8 totalDuration:(NSNumber *)arg9;
- (id)_XCT_testSuiteWithIdentifier:(XCTTestIdentifier *)arg1 didRecordIssue:(XCTIssue *)arg2;
- (id)_XCT_testSuiteWithIdentifier:(XCTTestIdentifier *)arg1 didStartAt:(NSString *)arg2;
@end
