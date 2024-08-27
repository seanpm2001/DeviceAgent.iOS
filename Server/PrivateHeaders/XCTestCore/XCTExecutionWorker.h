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

#import "XCTTestWorker-Protocol.h"

@class NSArray, NSError, NSString, XCTBlockingQueue;

__attribute__((visibility("hidden")))
@interface XCTExecutionWorker : NSObject <XCTTestWorker>
{
    XCTBlockingQueue *_workQueue;
    NSArray *_executionExtensions;
    NSError *_error;
    struct os_unfair_lock_s {
        unsigned int _os_unfair_lock_opaque;
    } _lock;
    BOOL _result;
}

- (void)enqueueTestIdentifiersToRun:(id)arg1 testIdentifiersToSkip:(id)arg2;
- (void)executeTestIdentifiers:(id)arg1 skippingTestIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)fetchAllTestIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchParallelizableTestIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithExecutionExtensions:(id)arg1;
- (BOOL)runWithError:(id *)arg1;
- (void)shutdown;



@end

