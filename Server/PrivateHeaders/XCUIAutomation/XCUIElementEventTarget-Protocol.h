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

@class XCUIElement;

@protocol XCUIElementEventTarget <NSObject>
- (BOOL)clickForDuration:(double)arg1 thenDragToElement:(XCUIElement *)arg2 withVelocity:(double)arg3 thenHoldForDuration:(double)arg4 error:(id *)arg5;
- (BOOL)clickWithError:(id *)arg1;
- (BOOL)doubleClickWithError:(id *)arg1;
- (BOOL)doubleTapWithError:(id *)arg1;
- (BOOL)hoverWithError:(id *)arg1;
- (BOOL)rightClickWithError:(id *)arg1;
- (BOOL)swipeDownWithError:(id *)arg1;
- (BOOL)swipeDownWithVelocity:(double)arg1 error:(id *)arg2;
- (BOOL)swipeLeftWithError:(id *)arg1;
- (BOOL)swipeLeftWithVelocity:(double)arg1 error:(id *)arg2;
- (BOOL)swipeRightWithError:(id *)arg1;
- (BOOL)swipeRightWithVelocity:(double)arg1 error:(id *)arg2;
- (BOOL)swipeUpWithError:(id *)arg1;
- (BOOL)swipeUpWithVelocity:(double)arg1 error:(id *)arg2;
- (BOOL)tapWithError:(id *)arg1;
- (BOOL)tapWithNumberOfTaps:(NSUInteger)arg1 numberOfTouches:(NSUInteger)arg2 error:(id *)arg3;
- (BOOL)twoFingerTapWithError:(id *)arg1;
@end

