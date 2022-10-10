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

@class XCUIElement;

@interface XCUIElementBaseEventTarget : NSObject
{
    XCUIElement *_element;
}

@property(readonly) XCUIElement *element;

+ (BOOL)_dispatchEventWithEventBuilder:(CDUnknownBlockType)arg1 eventSynthesizer:(id)arg2 withSnapshot:(id)arg3 applicationSnapshot:(id)arg4 process:(id)arg5 error:(id *)arg6;
+ (BOOL)_isInvalidEventDuration:(double)arg1;
+ (id)forElement:(id)arg1;
- (BOOL)_allUIInterruptionsHandledForElementSnapshot:(id)arg1 error:(id *)arg2;
- (id)_clickElementSnapshot:(id)arg1 forDuration:(double)arg2 thenDragToElement:(id)arg3 withVelocity:(double)arg4 thenHoldFor:(double)arg5 error:(id *)arg6;
- (BOOL)_dispatchEventWithEventBuilder:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)_highestNonWindowAncestorOfElement:(id)arg1 notSharedWithElement:(id)arg2;
- (id)_hitPointByAttemptingToScrollToVisibleSnapshot:(id)arg1 error:(id *)arg2;
- (id)_pointsInFrame:(CGRect)arg1 numberOfTouches:(NSUInteger)arg2;
- (BOOL)_shouldDispatchEvent:(id *)arg1;
- (BOOL)_tapWithNumberOfTaps:(NSUInteger)arg1 numberOfTouches:(NSUInteger)arg2 activityTitle:(id)arg3 error:(id *)arg4;
- (BOOL)dispatchEventWithDescription:(id)arg1 eventBuilder:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)initWithElement:(id)arg1;

@end
