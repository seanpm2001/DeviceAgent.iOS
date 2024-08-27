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

#import "XCTNSPredicateExpectationObject-Protocol.h"
#import "XCUIElementAttributes-Protocol.h"
#import "XCUIElementAttributesPrivate-Protocol.h"
#import "XCUIElementSnapshotProviding-Protocol.h"
#import "XCUIElementTypeQueryProvider-Protocol.h"
#import "XCUIElementTypeQueryProvider_Private-Protocol.h"
#import "XCUIScreenshotProviding-Protocol.h"

@class NSString, XCElementSnapshot, XCTLocalizableStringInfo, XCUIApplication, XCUICoordinate, XCUIElementQuery, XCUIScreen;
@protocol XCUIDevice, XCUIElementEventTarget;

@interface XCUIElement : NSObject <XCUIScreenshotProviding, XCUIElementSnapshotProviding, XCTNSPredicateExpectationObject, XCUIElementAttributesPrivate, XCUIElementTypeQueryProvider_Private, XCUIElementAttributes, XCUIElementTypeQueryProvider>
{
    BOOL _safeQueryResolutionEnabled;
    XCUIElementQuery *_query;
    XCElementSnapshot *_lastSnapshot;
}

@property(readonly, copy) XCUIElementQuery *activityIndicators;
@property(readonly, copy) XCUIElementQuery *alerts;
@property(readonly, nonatomic) XCUIApplication *application;
@property(readonly) BOOL bannerNotificationIsSticky;
@property(readonly, copy) XCUIElementQuery *bannerNotifications;
@property(readonly, copy) XCUIElementQuery *browsers;
@property(readonly, copy) XCUIElementQuery *buttons;
@property(readonly, copy) XCUIElementQuery *cells;
@property(readonly, copy) XCUIElementQuery *checkBoxes;
@property(readonly, copy) XCUIElementQuery *collectionViews;
@property(readonly, copy) XCUIElementQuery *colorWells;
@property(readonly, copy) XCUIElementQuery *comboBoxes;
@property(readonly, copy) NSString *compactDescription;
@property(readonly, copy) XCUIElementQuery *datePickers;
@property(readonly, copy) XCUIElementQuery *decrementArrows;
@property(readonly) id <XCUIDevice> device;
@property(readonly, copy) XCUIElementQuery *dialogs;
@property(readonly, copy) XCUIElementQuery *disclosedChildRows;
@property(readonly, copy) XCUIElementQuery *disclosureTriangles;
@property(readonly) NSInteger displayID;
@property(readonly, copy) XCUIElementQuery *dockItems;
@property(readonly, copy) XCUIElementQuery *drawers;
@property(readonly, copy) XCUIElement *elementBoundByAccessibilityElement;
@property(readonly) NSUInteger elementType;
@property(readonly) id <XCUIElementEventTarget> eventTarget;
@property(readonly, copy) XCUIElement *excludingNonModalElements;
@property(readonly) BOOL exists;
@property(readonly) XCUIElement *firstMatch;
@property(readonly) CGRect frame;
@property(readonly, copy) XCUIElementQuery *grids;
@property(readonly, copy) XCUIElementQuery *groups;
@property(readonly, copy) XCUIElementQuery *handles;
@property(readonly) BOOL hasBannerNotificationIsStickyAttribute;
@property(readonly) BOOL hasFocus;
@property(readonly) BOOL hasKeyboardFocus;
@property(readonly) BOOL hasUIInterruptions;
@property(readonly, copy) XCUIElementQuery *helpTags;
@property(readonly, copy) XCUICoordinate *hitPointCoordinate;
@property(readonly) NSInteger horizontalSizeClass;
@property(readonly, copy) XCUIElementQuery *icons;
@property(readonly) NSString *identifier;
@property(readonly, copy) XCUIElementQuery *images;
@property(readonly, copy) XCUIElement *includingNonModalElements;
@property(readonly, copy) XCUIElementQuery *incrementArrows;
@property(readonly, nonatomic) NSInteger interfaceOrientation;
@property(readonly, getter=isEnabled) BOOL enabled;
@property(readonly, getter=isHittable) BOOL hittable;
@property(readonly, getter=isSelected) BOOL selected;
@property(readonly) BOOL isTopLevelTouchBarElement;
@property(readonly) BOOL isTouchBarElement;
@property(readonly, copy) XCUIElementQuery *keyboards;
@property(readonly, copy) XCUIElementQuery *keys;
@property(readonly, copy) NSString *label;
@property(retain) XCElementSnapshot *lastSnapshot;
@property(readonly, copy) XCUIElementQuery *layoutAreas;
@property(readonly, copy) XCUIElementQuery *layoutItems;
@property(readonly, copy) XCUIElementQuery *levelIndicators;
@property(readonly, copy) XCUIElementQuery *links;
@property(readonly, copy) XCTLocalizableStringInfo *localizableStringInfo;
@property(readonly, copy) XCUIElementQuery *maps;
@property(readonly, copy) XCUIElementQuery *mattes;
@property(readonly, copy) XCUIElementQuery *menuBarItems;
@property(readonly, copy) XCUIElementQuery *menuBars;
@property(readonly, copy) XCUIElementQuery *menuButtons;
@property(readonly, copy) XCUIElementQuery *menuItems;
@property(readonly, copy) XCUIElementQuery *menus;
@property(readonly, copy) XCUIElementQuery *navigationBars;
@property(readonly) double normalizedSliderPosition;
@property(readonly, copy) XCUIElementQuery *otherElements;
@property(readonly, copy) XCUIElementQuery *outlineRows;
@property(readonly, copy) XCUIElementQuery *outlines;
@property(readonly, copy) XCUIElementQuery *pageIndicators;
@property(readonly, copy) XCUIElementQuery *pickerWheels;
@property(readonly, copy) XCUIElementQuery *pickers;
@property(readonly) NSString *placeholderValue;
@property(readonly, copy) XCUIElementQuery *popUpButtons;
@property(readonly, copy) XCUIElementQuery *popovers;
@property(readonly, copy) XCUIElementQuery *progressIndicators;
@property(readonly) XCUIElementQuery *query;
@property(readonly, copy) XCUIElementQuery *radioButtons;
@property(readonly, copy) XCUIElementQuery *radioGroups;
@property(readonly, copy) XCUIElementQuery *ratingIndicators;
@property(readonly, copy) XCUIElementQuery *relevanceIndicators;
@property(readonly, copy) XCUIElementQuery *rulerMarkers;
@property(readonly, copy) XCUIElementQuery *rulers;
@property BOOL safeQueryResolutionEnabled;
@property(readonly) XCUIScreen *screen;
@property(readonly) CGRect screenshotFrame;
@property(readonly, copy) XCUIElementQuery *scrollBars;
@property(readonly, copy) XCUIElementQuery *scrollViews;
@property(readonly, copy) XCUIElementQuery *searchFields;
@property(readonly, copy) XCUIElementQuery *secureTextFields;
@property(readonly, copy) XCUIElementQuery *segmentedControls;
@property(readonly, copy) XCUIElementQuery *sheets;
@property(readonly, copy) XCUIElementQuery *sliders;
@property(readonly, copy) XCUIElementQuery *splitGroups;
@property(readonly, copy) XCUIElementQuery *splitters;
@property(readonly, copy) XCUIElementQuery *staticTexts;
@property(readonly, copy) XCUIElementQuery *statusBars;
@property(readonly, copy) XCUIElementQuery *statusItems;
@property(readonly, copy) XCUIElementQuery *steppers;
@property(readonly, copy) XCUIElementQuery *switches;
@property(readonly, copy) XCUIElementQuery *tabBars;
@property(readonly, copy) XCUIElementQuery *tabGroups;
@property(readonly, copy) XCUIElementQuery *tableColumns;
@property(readonly, copy) XCUIElementQuery *tableRows;
@property(readonly, copy) XCUIElementQuery *tables;
@property(readonly, copy) XCUIElementQuery *tabs;
@property(readonly, copy) XCUIElementQuery *textFields;
@property(readonly, copy) XCUIElementQuery *textViews;
@property(readonly, copy) XCUIElementQuery *timelines;
@property(readonly, copy) NSString *title;
@property(readonly, copy) XCUIElementQuery *toggles;
@property(readonly, copy) XCUIElementQuery *toolbarButtons;
@property(readonly, copy) XCUIElementQuery *toolbars;
@property(readonly, copy) XCUIElementQuery *touchBars;
@property(readonly) id value;
@property(readonly, copy) XCUIElementQuery *valueIndicators;
@property(readonly) NSInteger verticalSizeClass;
@property(readonly, copy) XCUIElementQuery *webViews;
@property(readonly, copy) XCUIElementQuery *windows;

+ (BOOL)_dispatchEventWithEventBuilder:(CDUnknownBlockType)arg1 eventSynthesizer:(id)arg2 withSnapshot:(id)arg3 applicationSnapshot:(id)arg4 process:(id)arg5 error:(id *)arg6;
+ (BOOL)_isInvalidEventDuration:(double)arg1;
+ (void)performWithKeyModifiers:(NSUInteger)arg1 block:(CDUnknownBlockType)arg2;
+ (id)standardAttributeNames;
- (BOOL)_allUIInterruptionsHandledForElementSnapshot:(id)arg1 error:(id *)arg2;
- (void)_captureDebugInformation;
- (id)_childrenMatchingTypes:(id)arg1;
- (id)_clickElementSnapshot:(id)arg1 forDuration:(double)arg2 thenDragToElement:(id)arg3 withVelocity:(double)arg4 thenHoldFor:(double)arg5;
- (id)_debugDescriptionWithSnapshot:(id)arg1 noMatchesMessage:(id)arg2;
- (id)_descendantsMatchingTypes:(id)arg1;
- (void)_dispatchEvent:(id)arg1 eventBuilder:(CDUnknownBlockType)arg2;
- (BOOL)_dispatchEventWithEventBuilder:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)_focusValidForElementSnapshot:(id)arg1 error:(id *)arg2;
- (id)_highestNonWindowAncestorOfElement:(id)arg1 notSharedWithElement:(id)arg2;
- (id)_hitPointByAttemptingToScrollToVisibleSnapshot:(id)arg1 error:(id *)arg2;
- (id)_iOSSliderAdjustmentEventWithTargetPosition:(double)arg1 snapshot:(id)arg2 error:(id *)arg3;
- (id)_normalizedSliderPositionForSnapshot:(id)arg1 isVertical:(BOOL *)arg2 error:(id *)arg3;
- (id)_normalizedUISliderPositionForSnapshot:(id)arg1 isVertical:(BOOL *)arg2 error:(id *)arg3;
- (void)_pressWithPressure:(double)arg1 pressDuration:(double)arg2 holdDuration:(double)arg3 releaseDuration:(double)arg4 activityTitle:(id)arg5;
- (BOOL)_shouldDispatchEvent:(id *)arg1;
- (void)_swipe:(NSUInteger)arg1 withVelocity:(double)arg2;
- (BOOL)_waitForExistenceWithTimeout:(double)arg1;
- (BOOL)_waitForHittableWithTimeout:(double)arg1;
- (BOOL)_waitForNonExistenceWithTimeout:(double)arg1;
- (void)adjustToNormalizedSliderPosition:(double)arg1;
- (void)adjustToPickerWheelValue:(id)arg1;
- (id)childrenMatchingType:(NSUInteger)arg1;
- (void)click;
- (void)clickForDuration:(double)arg1;
- (void)clickForDuration:(double)arg1 thenDragToElement:(id)arg2;
- (void)clickForDuration:(double)arg1 thenDragToElement:(id)arg2 withVelocity:(double)arg3 thenHoldForDuration:(double)arg4;
- (id)coordinateWithNormalizedOffset:(CGVector)arg1;
- (id)descendantsMatchingType:(NSUInteger)arg1;
- (void)doubleClick;
- (void)doubleTap;
- (BOOL)evaluatePredicateForExpectation:(id)arg1 debugMessage:(id *)arg2;
- (BOOL)existsNoRetry;
- (void)forcePress;
- (void)handleUIInterruptions;
- (void)hover;
- (id)initWithElementQuery:(id)arg1;
- (id)makeNonExistenceExpectation;
- (void)pinchWithScale:(double)arg1 velocity:(double)arg2;
- (void)playBackEventStreamAtURL:(id)arg1 withSpeed:(double)arg2;
- (void)pressForDuration:(double)arg1;
- (void)pressForDuration:(double)arg1 thenDragToElement:(id)arg2;
- (void)pressForDuration:(double)arg1 thenDragToElement:(id)arg2 withVelocity:(double)arg3 thenHoldForDuration:(double)arg4;
- (void)pressWithPressure:(double)arg1 duration:(double)arg2;
- (void)resolveOrRaiseTestFailure;
- (BOOL)resolveOrRaiseTestFailure:(BOOL)arg1 error:(id *)arg2;
- (void)rightClick;
- (void)rotate:(double)arg1 withVelocity:(double)arg2;
- (id)screenshot;
- (id)screenshotAttachment;
- (id)screenshotAttachmentWithName:(id)arg1 lifetime:(NSInteger)arg2;
- (id)screenshotAttachmentWithPreferredEncoding:(id)arg1 options:(NSUInteger)arg2;
- (id)screenshotWithPreferredEncoding:(id)arg1 options:(NSUInteger)arg2;
- (void)scrollByDeltaX:(double)arg1 deltaY:(double)arg2;
- (void)scrollToVisible;
- (id)snapshotWithError:(id *)arg1;
- (void)swipeDown;
- (void)swipeDownWithVelocity:(double)arg1;
- (void)swipeLeft;
- (void)swipeLeftWithVelocity:(double)arg1;
- (void)swipeRight;
- (void)swipeRightWithVelocity:(double)arg1;
- (void)swipeUp;
- (void)swipeUpWithVelocity:(double)arg1;
- (void)tap;
- (void)tapOrClick;
- (void)tapWithNumberOfTaps:(NSUInteger)arg1 numberOfTouches:(NSUInteger)arg2;
- (NSUInteger)traits;
- (void)tripleClick;
- (void)twoFingerTap;
- (void)typeKey:(id)arg1 modifierFlags:(NSUInteger)arg2;
- (void)typeText:(id)arg1;
- (id)valueForAccessibilityAttribute:(id)arg1 error:(id *)arg2;
- (id)valuesForAccessibilityAttributes:(id)arg1 error:(id *)arg2;
- (BOOL)waitForExistenceWithTimeout:(double)arg1;


@end

