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

#import "XCTExecutionExtension-Protocol.h"

@class NSString, XCTestConfiguration, XCTestSuite;

@interface XCTTestRunSession : NSObject <XCTExecutionExtension>
{
    XCTestConfiguration *_testConfiguration;
    XCTestSuite *_testSuite;
}

- (void)executeTestsWithIdentifiers:(id)arg1 skippingTestsWithIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getParallelizableTestIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTestConfiguration:(id)arg1 error:(id *)arg2;


@end

