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

@interface XCUICoordinate : NSObject <NSCopying>
{
    XCUIElement *_element;
    XCUICoordinate *_coordinate;
    CGVector _normalizedOffset;
    CGVector _pointsOffset;
}

@property(readonly) XCUICoordinate *coordinate;
@property(readonly) XCUIElement *element;
@property(readonly) CGVector normalizedOffset;
@property(readonly) CGVector pointsOffset;
@property(readonly) XCUIElement *referencedElement;
@property(readonly) CGPoint screenPoint;

- (void)_clickForDuration:(double)arg1 thenDragToCoordinate:(id)arg2 dragVelocity:(double)arg3;
- (void)_pressWithPressure:(double)arg1 pressDuration:(double)arg2 holdDuration:(double)arg3 releaseDuration:(double)arg4 activityTitle:(id)arg5;
- (CGPoint)_userSpaceScreenPoint;
- (void)click;
- (void)clickForDuration:(double)arg1;
- (void)clickForDuration:(double)arg1 thenDragToCoordinate:(id)arg2;
- (void)clickForDuration:(double)arg1 thenDragToCoordinate:(id)arg2 withVelocity:(double)arg3 thenHoldForDuration:(double)arg4;
- (id)coordinateWithOffset:(CGVector)arg1;
- (id)device;
- (void)doubleClick;
- (void)doubleTap;
- (void)forcePress;
- (void)hover;
- (id)initWithCoordinate:(id)arg1 pointsOffset:(CGVector)arg2;
- (id)initWithElement:(id)arg1 normalizedOffset:(CGVector)arg2;
- (void)pressForDuration:(double)arg1;
- (void)pressForDuration:(double)arg1 thenDragToCoordinate:(id)arg2;
- (void)pressForDuration:(double)arg1 thenDragToCoordinate:(id)arg2 withVelocity:(double)arg3 thenHoldForDuration:(double)arg4;
- (void)pressWithPressure:(double)arg1 duration:(double)arg2;
- (void)rightClick;
- (void)scrollByDeltaX:(double)arg1 deltaY:(double)arg2;
- (void)swipeDown;
- (void)swipeDownWithVelocity:(double)arg1;
- (void)swipeLeft;
- (void)swipeLeftWithVelocity:(double)arg1;
- (void)swipeRight;
- (void)swipeRightWithVelocity:(double)arg1;
- (void)swipeUp;
- (void)swipeUpWithVelocity:(double)arg1;
- (void)tap;

@end
