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

#import "XCTAccessibilityFramework-Protocol.h"


@interface XCTAccessibilityFramework : NSObject <XCTAccessibilityFramework>
{
    BOOL _allowsRemoteAccess;
    NSInteger _processID;
    struct __AXUIElement *_systemWideElement;
}

@property(readonly) BOOL allowsRemoteAccess;
@property(readonly) NSInteger processID;
@property struct __AXUIElement *systemWideElement;

- (BOOL)PIDForAXUIElement:(struct __AXUIElement *)arg1 PID:(NSInteger *)arg2 error:(id *)arg3;
- (BOOL)_canAccessElement:(struct __AXUIElement *)arg1 withError:(id *)arg2;
- (id)_displayStringForAXUIElementProcess:(struct __AXUIElement *)arg1;
- (void)_setAXRequestingClient;
- (NSInteger)appOrientationForElement:(struct __AXUIElement *)arg1 error:(id *)arg2;
- (id)attributes:(id)arg1 forElement:(struct __AXUIElement *)arg2 error:(id *)arg3;
- (id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (CGRect)frameForElement:(struct __AXUIElement *)arg1 error:(id *)arg2;
- (id)initAllowingRemoteAccess:(BOOL)arg1 processID:(NSInteger)arg2;
- (id)initForLocalAccess;
- (id)initForRemoteAccess;
- (struct __AXUIElement *)mainWindowForElement:(struct __AXUIElement *)arg1 error:(id *)arg2;
- (void)performWithAXTimeout:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)userTestingSnapshotForElement:(struct __AXUIElement *)arg1 options:(id)arg2 error:(id *)arg3;



@end

