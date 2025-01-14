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

@class NSMutableArray, XCTestCase;

__attribute__((visibility("hidden")))
@interface XCTAttachmentManager : NSObject
{
    BOOL _isValid;
    XCTestCase *_testCase;
    NSMutableArray *_attachments;
}

@property(readonly) NSMutableArray *attachments;
@property BOOL isValid;
@property(readonly) XCTestCase *testCase;

+ (void)_synthesizeActivityForAttachment:(id)arg1 testCase:(id)arg2;
- (void)_invalidate;
- (void)dequeueAndReportBackgroundAttachments;
- (void)enqueueAttachment:(id)arg1;
- (void)ensureNoRemainingAttachments;
- (id)initWithTestCase:(id)arg1;

@end

