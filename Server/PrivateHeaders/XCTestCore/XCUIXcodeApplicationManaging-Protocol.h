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

#import "XCUIApplicationManaging-Protocol.h"

@protocol XCUIXcodeApplicationManaging <XCUIApplicationManaging>
- (void)requestLaunchProgressForProcessWithToken:(id)arg1 completion:(void (^)(BOOL, float, NSError *))arg2;
- (void)terminateProcessWithToken:(id)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end
