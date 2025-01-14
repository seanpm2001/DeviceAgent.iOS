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

@class NSArray, NSDictionary, NSURL;

@interface XCUIApplicationOpenRequest : NSObject
{
    BOOL _activateIfRunning;
    BOOL _terminateIfRunning;
    BOOL _usePlatformLauncher;
    BOOL _disableAccessibility;
    NSArray *_launchArguments;
    NSDictionary *_environmentVariables;
    NSURL *_launchUrl;
}

@property BOOL activateIfRunning;
@property BOOL disableAccessibility;
@property(copy) NSDictionary *environmentVariables;
@property(copy) NSArray *launchArguments;
@property(retain) NSURL *launchUrl;
@property BOOL terminateIfRunning;
@property BOOL usePlatformLauncher;

+ (id)activationRequestFromLaunchRequest:(id)arg1;
+ (id)activationRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 usePlatformLauncher:(BOOL)arg3;
+ (id)launchRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 launchURL:(id)arg3 usePlatformLauncher:(BOOL)arg4 disableAccessibility:(BOOL)arg5;
+ (id)launchRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 usePlatformLauncher:(BOOL)arg3;

@end

