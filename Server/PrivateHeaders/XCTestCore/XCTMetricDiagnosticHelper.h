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

@class NSArray, XCTAttachmentManager, XCTMeasureOptions, XCTMemoryChecker, XCTTestIdentifier;

@interface XCTMetricDiagnosticHelper : NSObject
{
    NSArray *_metrics;
    NSArray *_memoryMetrics;
    XCTAttachmentManager *_attachmentManager;
    XCTTestIdentifier *_testIdentifier;
    XCTMeasureOptions *_measureOptions;
    XCTMemoryChecker *_memoryChecker;
}

@property(copy, nonatomic) XCTMeasureOptions *measureOptions;
@property(retain, nonatomic) XCTMemoryChecker *memoryChecker;
@property(copy, nonatomic) NSArray *memoryMetrics;
@property(copy, nonatomic) NSArray *metrics;
@property(retain) XCTTestIdentifier *testIdentifier;

- (void)addAttachment:(id)arg1;
- (void)applyXcodebuildCommandLineOverridesToOptions:(id)arg1;
- (void)attachMemgraphsForMetric:(id)arg1;
- (void)attachPerfdataFileCollected:(id)arg1;
- (void)attachTraceFileCollectedForInstrument:(id)arg1;
- (void)collectMemgraphsForPregeneration:(BOOL)arg1;
- (id)generateCompressedMemgraphDirectory:(id)arg1;
- (id)getMemgraphDataForPid:(NSInteger)arg1 error:(id *)arg2;
- (id)getPidForProcessName:(id)arg1 error:(id *)arg2;
- (id)initWithMetrics:(id)arg1 attachmentManager:(id)arg2 options:(id)arg3 testIdentifier:(id)arg4;
- (void)performMemoryDiagnosticRunForBlock:(CDUnknownBlockType)arg1;
- (void)sendMetricUseToCoreAnalytics:(id)arg1;
- (NSInteger)setMallocStackLoggingForPregeneration:(BOOL)arg1 forPid:(id)arg2 error:(id *)arg3;
- (void)setMallocStackLoggingForRunnerProcessForPregeneration:(BOOL)arg1;

@end

