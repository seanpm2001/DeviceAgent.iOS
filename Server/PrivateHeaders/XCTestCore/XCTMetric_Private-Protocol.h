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

#import "XCTMetric-Protocol.h"

@class NSString, XCTMeasureOptions, XCTPerformanceMeasurementTimestamp;

@protocol XCTMetric_Private <XCTMetric>

@optional
- (void)didStartMeasuringAtTimestamp:(XCTPerformanceMeasurementTimestamp *)arg1;
- (void)didStopMeasuringAtTimestamp:(XCTPerformanceMeasurementTimestamp *)arg1;
- (void)prepareToMeasureWithOptions:(XCTMeasureOptions *)arg1;
- (void)willBeginMeasuringAtEstimatedTimestamp:(XCTPerformanceMeasurementTimestamp *)arg1;
@end

