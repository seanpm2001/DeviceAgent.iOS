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

@class XCTScreenshotRequest;

@protocol XCUIScreenDataSource <NSObject>
- (void)requestBoundsForScreenWithIdentifier:(NSInteger)arg1 completion:(void (^)(CGRect, NSError *))arg2;
- (void)requestScaleForScreenWithIdentifier:(NSInteger)arg1 completion:(void (^)(double, NSError *))arg2;
- (void)requestScreenIdentifiersWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)requestScreenshotWithRequest:(XCTScreenshotRequest *)arg1 withReply:(void (^)(XCTImage *, NSError *))arg2;
- (void)requestTraitsForScreenWithIdentifier:(NSInteger)arg1 completion:(void (^)(NSUInteger, NSError *))arg2;
@end

