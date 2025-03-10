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

#import "MXMInstrumental-Protocol.h"

@class XCTPerformanceMeasurementTimestamp;
@protocol XCTMetric;

@interface XCTMetricInstrumentalAdapter : NSObject <MXMInstrumental>
{
    XCTPerformanceMeasurementTimestamp *_startTimestamp;
    XCTPerformanceMeasurementTimestamp *_stopTimestamp;
    id <XCTMetric> _metric;
}

@property(retain, nonatomic) id <XCTMetric> metric;

- (void)didStartAtContinuousTime:(NSUInteger)arg1 absoluteTime:(NSUInteger)arg2 startDate:(id)arg3;
- (void)didStartAtTime:(NSUInteger)arg1 startDate:(id)arg2;
- (void)didStopAtContinuousTime:(NSUInteger)arg1 absoluteTime:(NSUInteger)arg2 stopDate:(id)arg3;
- (void)didStopAtTime:(NSUInteger)arg1 stopDate:(id)arg2;
- (BOOL)harvestData:(id *)arg1 error:(id *)arg2;
- (id)initWithMetric:(id)arg1;
- (BOOL)prepareWithOptions:(id)arg1 error:(id *)arg2;
- (void)willStartAtEstimatedTime:(NSUInteger)arg1;

@end

