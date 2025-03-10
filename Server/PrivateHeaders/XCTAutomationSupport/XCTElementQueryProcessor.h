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

@class XCTCapabilities;
@protocol XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource;


@protocol XCTElementSnapshotProvider;

@interface XCTElementQueryProcessor : NSObject
{
    id <XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource> _dataSource;
    XCTCapabilities *_remoteInterfaceCapabilities;
}

@property(readonly) __weak id <XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource> dataSource;
@property(retain) XCTCapabilities *remoteInterfaceCapabilities;

- (void)fetchMatchesForQuery:(id)arg1 clientCapabilities:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithDataSource:(id)arg1;

@end

