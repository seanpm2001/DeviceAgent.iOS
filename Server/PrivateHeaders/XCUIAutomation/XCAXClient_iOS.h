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

#import "XCUIAccessibilityInterface-Protocol.h"

@class NSMutableDictionary, NSString, XCAccessibilityElement;
@protocol OS_dispatch_queue, XCUIApplicationProcessTracker, XCUIDevice, XCUIRemoteAccessibilityInterface;


@protocol XCUIApplicationProcessTracker;

@interface XCAXClient_iOS : NSObject <XCUIAccessibilityInterface>
{
    BOOL _cachedSystemAppIsLoadedNotificationValue;
    id <XCUIApplicationProcessTracker> _applicationProcessTracker;
    id <XCUIRemoteAccessibilityInterface> _remoteAccessibilityInterface;
    id <XCUIDevice> _device;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_userTestingNotificationHandlers;
    NSMutableDictionary *_oneShotUserTestingNotificationHandlers;
    NSMutableDictionary *_cachedAccessibilityLoadedValuesForPIDs;
}

@property double AXTimeout;
@property(readonly) BOOL allowsRemoteAccess;
@property(readonly) id <XCUIApplicationProcessTracker> applicationProcessTracker;
@property(readonly) BOOL axNotificationsIncludeElement;
@property(readonly) NSMutableDictionary *cachedAccessibilityLoadedValuesForPIDs;
@property(readonly) BOOL cachedSystemAppIsLoadedNotificationValue;
@property(readonly) __weak id <XCUIDevice> device;
@property(readonly) BOOL hasBannerNotificationIsStickyAttribute;
@property(readonly) NSMutableDictionary *oneShotUserTestingNotificationHandlers;
@property(readonly) BOOL providesValuesForPrivilegedAttributes;
@property(retain) NSObject<OS_dispatch_queue> *queue;
@property(readonly) id <XCUIRemoteAccessibilityInterface> remoteAccessibilityInterface;
@property(readonly) BOOL supportsAnimationsInactiveNotifications;
@property(readonly) BOOL supportsHostedViewCoordinateTransformations;
@property(readonly, nonatomic) XCAccessibilityElement *systemApplication;
@property(readonly) BOOL usePointTransformationsForFrameConversions;
@property(readonly) NSMutableDictionary *userTestingNotificationHandlers;

- (id)_activeForegroundApplicationsWithPotentiallyInterruptingUI;
- (id)_addUserTestNotificationHandler:(CDUnknownBlockType)arg1;
- (void)_handleUserTestingNotificationFromElement:(id)arg1 withPayload:(id)arg2;
- (id)_hittableElementsInSnapshots:(id)arg1;
- (BOOL)_loadAccessibility:(id *)arg1;
- (BOOL)_registerForAXNotification:(NSInteger)arg1 error:(id *)arg2;
- (void)_removeUserTestNotificationHandlerForToken:(id)arg1;
- (BOOL)_setAXTimeout:(double)arg1 error:(id *)arg2;
- (id)_snapshotsForInterruptingElementsPresentedByApplication:(id)arg1 interuptedSnapshotFrame:(CGRect)arg2;
- (BOOL)_unloadAccessibility:(id *)arg1;
- (id)accessibilityElementForElementAtPoint:(CGPoint)arg1 error:(id *)arg2;
- (id)activeApplications;
- (id)addObserverForAXNotification:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (BOOL)cachedAccessibilityLoadedValueForPID:(NSInteger)arg1;
- (BOOL)cachedSystemAppIsLoaded;
- (id)defaultParameters;
- (BOOL)enableFauxCollectionViewCells:(id *)arg1;
- (void)handleAccessibilityNotification:(id)arg1 element:(id)arg2 userInfo:(id)arg3;
- (void)handleAccessibilityNotification:(NSInteger)arg1 fromElement:(id)arg2 payload:(id)arg3;
- (id)hitTestElement:(id)arg1 withPoint:(CGPoint)arg2 error:(id *)arg3;
- (id)initWithApplicationProcessTracker:(id)arg1 remoteAccessibilityInterface:(id)arg2 device:(id)arg3;
- (id)interruptingUIElementsAffectingSnapshot:(id)arg1 checkForHandledElement:(id)arg2 containsHandledElement:(BOOL *)arg3;
- (BOOL)isMacCatalystForPID:(NSInteger)arg1;
- (BOOL)isValidElement:(id)arg1;
- (BOOL)loadAccessibility:(id *)arg1;
- (id)localizableStringsDataForActiveApplications;
- (void)notifyOnNextOccurrenceOfUserTestingEvent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)notifyWhenEventLoopIsIdleForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)notifyWhenNoAnimationsAreActiveForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)notifyWhenViewControllerViewDidDisappearReply:(CDUnknownBlockType)arg1;
- (id)parameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 error:(id *)arg4;
- (BOOL)performAction:(id)arg1 onElement:(id)arg2 value:(id)arg3 error:(id *)arg4;
- (void)performWhenMenuOpens:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)registerForAXNotificationsForApplicationWithPID:(NSInteger)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1 forAXNotification:(id)arg2;
- (id)requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)runAccessibilityAuditForApplication:(id)arg1 withConfiguration:(id)arg2 error:(id *)arg3;
- (BOOL)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 outError:(id *)arg4;
- (BOOL)unloadAccessibility:(id *)arg1;
- (void)unregisterForAXNotificationsForApplicationWithPID:(NSInteger)arg1;
- (id)valuesForPrivilegedAttributes:(id)arg1 forElement:(id)arg2 error:(id *)arg3;
- (id)viewDidAppearExpectationForElement:(id)arg1 viewControllerName:(id)arg2;
- (void)waitForQuiescenceOnAllForegroundApplications;



@end

