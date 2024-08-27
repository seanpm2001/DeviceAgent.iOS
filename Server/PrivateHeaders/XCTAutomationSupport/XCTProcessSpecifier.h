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



@interface XCTProcessSpecifier : NSObject <NSSecureCoding>
{
    NSString *_bundleID;
    NSString *_path;
}

@property(readonly, copy) NSString *bundleID;
@property(readonly, copy) NSString *path;

- (id)initWithBundleID:(id)arg1 path:(id)arg2;

@end

