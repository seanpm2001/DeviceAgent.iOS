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

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface XCTActivityRecordStack : NSObject
{
    NSMutableArray *_storage;
    NSMutableDictionary *_mutableAggregationRecords;
}

@property(readonly) NSDictionary *aggregationRecords;
@property(readonly) NSMutableDictionary *mutableAggregationRecords;
@property(readonly) NSMutableArray *storage;

- (NSInteger)depth;
- (void)didFinishActivity:(id)arg1 observationCenter:(id)arg2 context:(id)arg3;
- (id)topActivity;
- (void)unwindRemainingActivitiesWithObservationCenter:(id)arg1 context:(id)arg2;
- (id)willStartActivityWithTitle:(id)arg1 type:(id)arg2 observationCenter:(id)arg3 context:(id)arg4;

@end

