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

#import "XCTIssueHandling-Protocol.h"


__attribute__((visibility("hidden")))
@interface XCUIDefaultIssueHandler : NSObject <XCTIssueHandling>
{
}

+ (id)sharedHandler;
- (void)expectFailureWithContext:(id)arg1;
- (void)expectFailureWithContext:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)handleIssue:(id)arg1;
- (void)handleIssue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C


@end

