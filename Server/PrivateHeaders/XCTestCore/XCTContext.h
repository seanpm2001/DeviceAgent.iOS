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

#import "XCTActivityRecordContext-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, XCTActivityRecordStack, XCTestCase;

@interface XCTContext : NSObject <XCTActivityRecordContext>
{
    BOOL _valid;
    BOOL _isReportingBase;
    NSDate *_startDate;
    NSMutableDictionary *_associatedObjects;
    NSMutableArray *_tearDownBlocks;
    XCTContext *_parent;
    XCTestCase *_testCase;
    XCTActivityRecordStack *_activityRecordStack;
}

@property(readonly) XCTActivityRecordStack *activityRecordStack;
@property(readonly) NSUInteger activityRecordStackDepth;
@property(readonly) NSDictionary *aggregationRecords;
@property(readonly) NSMutableDictionary *associatedObjects;
@property(readonly) NSMutableArray *interruptionHandlers;
@property(readonly) BOOL isReportingBase;
@property(readonly, getter=isValid) BOOL valid;
@property(readonly) XCTContext *parent;
@property(readonly) XCTContext *reportingBaseContext;
@property(readonly, copy) NSDate *startDate;
@property(readonly) NSMutableArray *tearDownBlocks;
@property(readonly) __weak XCTestCase *testCase;
@property(readonly) NSDictionary *testRunConfiguration;
@property(readonly) NSUInteger transitiveActivityRecordStackDepth;

+ (id)_currentContextInThread:(id)arg1;
+ (void)_recordActivityMessageWithFormat:(id)arg1;
+ (void)_runActivityNamed:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)_runActivityNamed:(id)arg1 type:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (BOOL)_shouldReportActivityWithType:(id)arg1;
+ (id)currentContext;
+ (id)currentContextInThread:(id)arg1;
+ (BOOL)hasContextInThread:(id)arg1;
+ (void)runActivityNamed:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)runInContextForTestCase:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)runInContextForTestCase:(id)arg1 markAsReportingBase:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
+ (void)runInternalActivityNamed:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (BOOL)shouldReportActivityWithType:(id)arg1 inTestMode:(NSInteger)arg2;
- (void)_pushOnToCurrentThreadContextStack;
- (void)_reportEmptyActivityWithType:(id)arg1 format:(id)arg2;
- (void)_runActivityNamed:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_runActivityNamed:(id)arg1 type:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addTearDownBlock:(CDUnknownBlockType)arg1;
- (id)associatedObjectForKey:(id)arg1;
- (void)didFinishActivity:(id)arg1;
- (id)initWithParent:(id)arg1 testCase:(id)arg2;
- (void)invalidate;
- (void)setAssociatedObject:(id)arg1 forKey:(id)arg2;
- (id)topActivity;
- (void)unwindRemainingActivities;
- (id)willStartActivityWithTitle:(id)arg1 type:(id)arg2;


@end
