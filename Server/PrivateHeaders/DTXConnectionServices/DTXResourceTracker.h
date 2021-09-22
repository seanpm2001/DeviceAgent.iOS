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

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DTXResourceTracker : NSObject
{
    NSUInteger _total;
    NSUInteger _maxChunk;
    NSUInteger _used;
    NSUInteger _waiting;
    NSUInteger _acquireNum;
    NSInteger _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_acqSem;
    DTXResourceTracker *_parentTracker;
    BOOL _log;
}

@property(nonatomic) BOOL log;
@property(nonatomic) NSUInteger maxChunkSize;
@property(nonatomic) NSUInteger totalSize;

- (NSUInteger)acquireSize:(NSUInteger)arg1;
- (void)forceAcquireSize:(NSUInteger)arg1;
- (void)releaseSize:(NSUInteger)arg1;
- (void)resumeLimits;
- (void)suspendLimits;

@end

