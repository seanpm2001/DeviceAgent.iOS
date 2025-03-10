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



@interface XCUIApplicationSpecifier : NSObject <NSCopying>
{
    BOOL _isCryptexHosted;
    NSString *_bundleIdentifier;
    NSString *_path;
}

@property(readonly) NSString *bundleIdentifier;
@property(readonly) BOOL isCryptexHosted;
@property(readonly) NSString *path;

+ (id)specifierWithBundleIdentifier:(id)arg1 path:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 path:(id)arg2;

@end

