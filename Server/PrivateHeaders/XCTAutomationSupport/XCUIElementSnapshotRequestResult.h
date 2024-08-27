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

#import "XCTCapabilitiesProviding-Protocol.h"
#import "XCTRuntimeIssueContextReportingDelegate-Protocol.h"

@class NSOrderedSet, NSString, XCElementSnapshot;

@interface XCUIElementSnapshotRequestResult : NSObject <NSSecureCoding, XCTCapabilitiesProviding, XCTRuntimeIssueContextReportingDelegate>
{
    XCElementSnapshot *_rootElementSnapshot;
    NSOrderedSet *_runtimeIssues;
}

@property(readonly) XCElementSnapshot *rootElementSnapshot;
@property(readonly, copy) NSOrderedSet *runtimeIssues;

+ (void)provideCapabilitiesToBuilder:(id)arg1;
+ (BOOL)shouldRuntimeIssueContext:(id)arg1 reportIssue:(id)arg2;
- (id)initWithRootElementSnapshot:(id)arg1 runtimeIssues:(id)arg2;

// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


@end

