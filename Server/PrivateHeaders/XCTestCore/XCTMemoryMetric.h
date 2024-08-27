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
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N,V_instrumentationName

- (void)prepareToMeasureWithOptions:(id)arg1;
- (id)reportMeasurementsFromStartTime:(id)arg1 toEndTime:(id)arg2 error:(id *)arg3;
- (void)willBeginMeasuringAtEstimatedTimestamp:(id)arg1;

// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


@end

