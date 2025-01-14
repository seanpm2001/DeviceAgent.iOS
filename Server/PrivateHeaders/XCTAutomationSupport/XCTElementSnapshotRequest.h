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

@class NSArray, NSDictionary, NSError, XCAXCycleDetector, XCAccessibilityElement, XCElementSnapshot, XCTAccessibilitySnapshot_iOS, XCTTimeoutControls;
@protocol NSCopying, OS_dispatch_queue, XCTAccessibilityFramework, XCTMacCatalystStatusProviding;

@interface XCTElementSnapshotRequest : NSObject
{
    BOOL _preserveRemoteElementPlaceholders;
    BOOL _loadResult;
    BOOL _hasLoaded;
    id <XCTAccessibilityFramework> _accessibilityFramework;
    XCAccessibilityElement *_element;
    NSArray *_attributes;
    NSDictionary *_parameters;
    XCElementSnapshot *_elementSnapshot;
    id <NSCopying> _accessibilitySnapshot;
    XCTTimeoutControls *_timeoutControls;
    XCAXCycleDetector *_cycleDetector;
    id <XCTMacCatalystStatusProviding> _macCatalystStatusProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_loadError;
}

@property(readonly) id <XCTAccessibilityFramework> accessibilityFramework;
@property(copy) id <NSCopying> accessibilitySnapshot;
@property(readonly) XCTAccessibilitySnapshot_iOS *accessibilitySnapshot_iOS;
@property(readonly) NSArray *attributes;
@property(retain) XCAXCycleDetector *cycleDetector;
@property(readonly) XCAccessibilityElement *element;
@property(retain) XCElementSnapshot *elementSnapshot;
@property BOOL hasLoaded;
@property(retain) NSError *loadError;
@property BOOL loadResult;
@property(retain) id <XCTMacCatalystStatusProviding> macCatalystStatusProvider;
@property(copy) NSDictionary *parameters;
@property BOOL preserveRemoteElementPlaceholders;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
@property(readonly) XCTTimeoutControls *timeoutControls;

- (id)_childrenOfElement:(id)arg1 userTestingSnapshot:(id)arg2 frameTransformer:(CDUnknownBlockType)arg3 outError:(id *)arg4;
- (id)_snapshotFromRemoteElementUserTestingSnapshot:(id)arg1 parentElement:(id)arg2 error:(id *)arg3;
- (id)_snapshotFromUserTestingSnapshot:(id)arg1 frameTransformer:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)accessibilitySnapshotOrError:(id *)arg1;
- (id)elementSnapshotOrError:(id *)arg1;
- (id)initWithAccessibilityFramework:(id)arg1 element:(id)arg2 attributes:(id)arg3 parameters:(id)arg4;
- (id)initWithAccessibilityFramework:(id)arg1 element:(id)arg2 attributes:(id)arg3 parameters:(id)arg4 timeoutControls:(id)arg5;
- (BOOL)loadSnapshotAndReturnError:(id *)arg1;
- (id)safeParametersForParameters:(id)arg1;

@end

