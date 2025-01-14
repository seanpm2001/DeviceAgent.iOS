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

#import "XCTMetric-Protocol.h"
#import "XCTMetric_Private-Protocol.h"

@class MXMMemoryMetric, NSString, XCTMemgraph;

@interface XCTMemoryMetric : NSObject <XCTMetric_Private, XCTMetric>
{
    NSString *_instrumentationName;
    MXMMemoryMetric *_underlyingMetric;
    NSString *_processDisplayName;
    NSString *_processIdentifierName;
    XCTMemgraph *_preGenerationMemgraph;
    XCTMemgraph *_postGenerationMemgraph;
}

@property(readonly, nonatomic) NSString *instrumentationName;
@property(retain, nonatomic) XCTMemgraph *postGenerationMemgraph;
@property(retain, nonatomic) XCTMemgraph *preGenerationMemgraph;
@property(retain, nonatomic) NSString *processDisplayName;
@property(retain, nonatomic) NSString *processIdentifierName;
@property(readonly, nonatomic) MXMMemoryMetric *underlyingMetric;

- (void)didStartMeasuringAtTimestamp:(id)arg1;
- (void)didStopMeasuringAtTimestamp:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithProcessIdentifier:(NSInteger)arg1;
- (id)initWithProcessName:(id)arg1;
- (id)initWithUnderlyingMetric:(id)arg1;
- (void)prepareToMeasureWithOptions:(id)arg1;
- (id)reportMeasurementsFromStartTime:(id)arg1 toEndTime:(id)arg2 error:(id *)arg3;
- (void)willBeginMeasuringAtEstimatedTimestamp:(id)arg1;


@end

