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

#import "XCTConnectionAccepting-Protocol.h"
#import "XCTElementSnapshotAttributeDataSource-Protocol.h"
#import "XCTElementSnapshotProvider-Protocol.h"
#import "XCTMacCatalystStatusProviding-Protocol.h"
#import "XCTMessagingChannel_RunnerToUIProcess-Protocol.h"
#import "XCTRemoteApplicationAutomationTarget-Protocol.h"

@class DTXConnection, DTXProxyChannel, NSMutableArray, NSString, XCTAnimationsIdleNotifier, XCTCapabilities, XCTElementQueryProcessor, XCTMainRunLoopIdleNotifier;
@protocol OS_dispatch_queue, XCTAccessibilityFramework, XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource, XCTInternalEntitlementChecking;


@protocol XCTElementSnapshotProvider;

@interface XCTAutomationSession : NSObject <XCTMessagingChannel_RunnerToUIProcess, XCTRemoteApplicationAutomationTarget, XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource, XCTMacCatalystStatusProviding, XCTConnectionAccepting>
{
    id <XCTAccessibilityFramework> _accessibilityFramework;
    id <XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource> _dataSource;
    id <XCTInternalEntitlementChecking> _internalEntitlementChecker;
    NSMutableArray *_connections;
    XCTElementQueryProcessor *_queryProcessor;
    NSObject<OS_dispatch_queue> *_queue;
    XCTMainRunLoopIdleNotifier *_runLoopIdleMonitor;
    XCTAnimationsIdleNotifier *_animationIdleNotifier;
    DTXConnection *_dtxConnection;
    DTXProxyChannel *_proxyChannel;
    XCTCapabilities *_remoteInterfaceCapabilities;
}

@property(readonly) id <XCTAccessibilityFramework> accessibilityFramework;
@property(readonly) BOOL allowsRemoteAccess;
@property(readonly) XCTAnimationsIdleNotifier *animationIdleNotifier;
@property(readonly) NSMutableArray *connections;
@property(readonly) __weak id <XCTElementSnapshotProvider><XCTElementSnapshotAttributeDataSource> dataSource;
@property(readonly) DTXConnection *dtxConnection;
@property(readonly) BOOL hasBannerNotificationIsStickyAttribute;
@property __weak id <XCTInternalEntitlementChecking> internalEntitlementChecker;
@property(readonly) BOOL providesValuesForPrivilegedAttributes;
@property(readonly) DTXProxyChannel *proxyChannel;
@property(readonly) XCTElementQueryProcessor *queryProcessor;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
@property(retain) XCTCapabilities *remoteInterfaceCapabilities;
@property(readonly) XCTMainRunLoopIdleNotifier *runLoopIdleMonitor;
@property(readonly) BOOL supportsHostedViewCoordinateTransformations;
@property(readonly) BOOL usePointTransformationsForFrameConversions;

+ (id)capabilitiesBuilder;
- (id)_XCT_attributesForElement:(id)arg1 attributes:(id)arg2;
- (id)_XCT_exchangeCapabilities:(id)arg1;
- (id)_XCT_fetchMatchesForQuery:(id)arg1;
- (id)_XCT_notifyWhenAnimationsAreIdle;
- (id)_XCT_notifyWhenMainRunLoopIsIdle;
- (id)_XCT_setMallocStackLoggingWithMode:(id)arg1;
- (BOOL)acceptNewConnection:(id)arg1;
- (id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (void)attributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)exchangeCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchMatchesForQuery:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithAccessibilityFramework:(id)arg1;
- (id)initWithAccessibilityFramework:(id)arg1 dataSource:(id)arg2;
- (BOOL)isMacCatalystForPID:(NSInteger)arg1;
- (void)listenForRemoteConnectionViaSerializedTransportWrapper:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyWhenAnimationsAreIdle:(CDUnknownBlockType)arg1;
- (void)notifyWhenMainRunLoopIsIdle:(CDUnknownBlockType)arg1;
- (id)parameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 error:(id *)arg4;
- (void)requestHostAppExecutableNameWithReply:(CDUnknownBlockType)arg1;
- (void)setMallocStackLoggingWithMode:(NSInteger)arg1 reply:(CDUnknownBlockType)arg2;
- (id)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 timeoutControls:(id)arg4 error:(id *)arg5;
- (id)valuesForPrivilegedAttributes:(id)arg1 forElement:(id)arg2 error:(id *)arg3;


@end

