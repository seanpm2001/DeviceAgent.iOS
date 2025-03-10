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

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol XCTIssueHandling;

@interface XCTExpectedFailureContextManager : NSObject
{
    id <XCTIssueHandling> _issueHandler;
    NSMutableArray *_threadAgnosticContextStack;
    NSMutableDictionary *_contextStacksByThreadId;
}

@property(readonly) NSMutableDictionary *contextStacksByThreadId;
@property(readonly) NSArray *immutableExpectedFailureContextStackForCurrentThread;
@property(readonly) __weak id <XCTIssueHandling> issueHandler;
@property(readonly) NSMutableArray *threadAgnosticContextStack;

- (void)_cleanUpContext:(id)arg1;
- (void)checkForExpectedFailureMatchingIssue:(id)arg1;
- (id)expectedFailureContextStackForCurrentThread;
- (id)expectedFailureContextStackForThreadWithId:(NSUInteger)arg1;
- (id)initWithIssueHandler:(id)arg1;
- (void)invalidate;
- (void)popExpectedFailureContext:(id)arg1;
- (void)pushExpectedFailureContext:(id)arg1;

@end

