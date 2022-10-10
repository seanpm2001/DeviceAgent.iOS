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

@class NSDictionary;
@protocol XCUIApplicationRegistryProvider, XCUIPlatformApplicationServicesProviding;

@interface XCUIApplicationRegistry : NSObject
{
    id <XCUIPlatformApplicationServicesProviding> _platformServicesProvider;
    NSDictionary *_testDependencies;
    NSDictionary *_userOverrides;
    id <XCUIApplicationRegistryProvider> _platformProvider;
}

@property(retain) id <XCUIApplicationRegistryProvider> platformProvider;
@property(readonly) id <XCUIPlatformApplicationServicesProviding> platformServicesProvider;
@property(copy) NSDictionary *testDependencies;
@property(copy) NSDictionary *userOverrides;

- (id)_constructRecordMapFromRawMap:(id)arg1 isTestDependencyMap:(BOOL)arg2;
- (id)initWithTestDependencies:(id)arg1 userOverrides:(id)arg2 platformServicesProvider:(id)arg3;
- (id)recordForApplicationWithBundleIdentifier:(id)arg1 error:(id *)arg2;
- (void)replacePlatformServicesProvider:(id)arg1;
- (BOOL)testDependencyExistsForApplicationAtURL:(id)arg1;

@end
