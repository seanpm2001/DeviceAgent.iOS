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

@class NSDate, NSDictionary;

@protocol MXMInstrumental <NSCopying>
- (BOOL)harvestData:(id *)arg1 error:(id *)arg2;

@optional
- (void)didStartAtContinuousTime:(NSUInteger)arg1 absoluteTime:(NSUInteger)arg2 startDate:(NSDate *)arg3;
- (void)didStartAtTime:(NSUInteger)arg1 startDate:(NSDate *)arg2;
- (void)didStopAtContinuousTime:(NSUInteger)arg1 absoluteTime:(NSUInteger)arg2 stopDate:(NSDate *)arg3;
- (void)didStopAtTime:(NSUInteger)arg1 stopDate:(NSDate *)arg2;
- (BOOL)prepareWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (void)willStartAtEstimatedTime:(NSUInteger)arg1;
- (void)willStop;
@end

