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

@class NSBundle, NSString, XCTExpectedFailure, XCTIssue, XCTestCase, XCTestSuite;

@protocol XCTestObservation <NSObject>

@optional
- (void)testBundleDidFinish:(NSBundle *)arg1;
- (void)testBundleWillStart:(NSBundle *)arg1;
- (void)testCase:(XCTestCase *)arg1 didFailWithDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(NSUInteger)arg4;
- (void)testCase:(XCTestCase *)arg1 didRecordExpectedFailure:(XCTExpectedFailure *)arg2;
- (void)testCase:(XCTestCase *)arg1 didRecordIssue:(XCTIssue *)arg2;
- (void)testCaseDidFinish:(XCTestCase *)arg1;
- (void)testCaseWillStart:(XCTestCase *)arg1;
- (void)testSuite:(XCTestSuite *)arg1 didFailWithDescription:(NSString *)arg2 inFile:(NSString *)arg3 atLine:(NSUInteger)arg4;
- (void)testSuite:(XCTestSuite *)arg1 didRecordExpectedFailure:(XCTExpectedFailure *)arg2;
- (void)testSuite:(XCTestSuite *)arg1 didRecordIssue:(XCTIssue *)arg2;
- (void)testSuiteDidFinish:(XCTestSuite *)arg1;
- (void)testSuiteWillStart:(XCTestSuite *)arg1;
@end
