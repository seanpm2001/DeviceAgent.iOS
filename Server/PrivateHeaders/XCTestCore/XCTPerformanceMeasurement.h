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

@class NSMeasurement, NSString;

@interface XCTPerformanceMeasurement : NSObject
{
    NSString *_identifier;
    NSString *_displayName;
    NSMeasurement *_value;
    double _doubleValue;
    NSString *_unitSymbol;
    NSInteger _polarity;
}

@property(readonly, copy) NSString *displayName;
@property(readonly) double doubleValue;
@property(readonly, copy) NSString *identifier;
@property(readonly) NSInteger polarity;
@property(readonly, copy) NSString *unitSymbol;
@property(readonly, copy) NSMeasurement *value;

+ (id)displayFriendlyMeasurement:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 doubleValue:(double)arg3 unitSymbol:(id)arg4;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 doubleValue:(double)arg3 unitSymbol:(id)arg4 polarity:(NSInteger)arg5;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 value:(id)arg3;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 value:(id)arg3 polarity:(NSInteger)arg4;

@end

