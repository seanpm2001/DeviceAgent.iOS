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


@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface XCSynthesizedEventRecord : NSObject <NSSecureCoding>
{
    NSMutableArray *_eventPaths;
    BOOL _beginsPersistentState;
    BOOL _endsPersistentState;
    NSString *_name;
    NSInteger _interfaceOrientation;
    NSInteger _targetProcessID;
    NSUInteger _displayID;
    NSDictionary *_systemAutomationProperties;
    CGVector _originalOffset;
    struct CGSize _parentWindowSize;
}

@property BOOL beginsPersistentState;
@property(readonly) NSUInteger displayID;
@property BOOL endsPersistentState;
@property(readonly) NSArray *eventPaths;
@property(readonly) NSInteger interfaceOrientation;
@property(readonly) double maximumOffset;
@property(readonly, copy) NSString *name;
@property(nonatomic) CGVector originalOffset;
@property struct CGSize parentWindowSize;
@property(copy) NSDictionary *systemAutomationProperties;
@property NSInteger targetProcessID;

- (void)addPointerEventPath:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 displayID:(NSUInteger)arg2;
- (id)initWithName:(id)arg1 displayID:(NSUInteger)arg2 interfaceOrientation:(NSInteger)arg3;
- (id)initWithName:(id)arg1 interfaceOrientation:(NSInteger)arg2;
- (BOOL)synthesizeWithError:(id *)arg1;
- (void)unsetInterfaceOrientation;

@end

