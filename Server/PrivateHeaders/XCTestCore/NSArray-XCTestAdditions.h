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

@interface NSArray (XCTestAdditions)
+ (id)xct_arrayWithRepetitions:(NSInteger)arg1 ofObject:(id)arg2;
- (void)xct_arrayByApplyingAsyncBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)xct_arrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)xct_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)xct_objectsPassingTest:(CDUnknownBlockType)arg1;
@end

