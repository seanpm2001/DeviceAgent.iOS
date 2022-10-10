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

@class NSArray, XCUIApplication;

@interface XCUIAccessibilityAudit : NSObject
{
    XCUIApplication *_application;
    NSArray *__auditTypes;
    NSArray *__ignoredIdentifiers;
}

@property(retain, nonatomic) NSArray *_auditTypes;
@property(copy, nonatomic) NSArray *_ignoredIdentifiers;
@property(readonly, nonatomic) XCUIApplication *application;

- (id)_runAudit:(id *)arg1;
- (id)initWithApplication:(id)arg1 auditType:(id)arg2 elementIdentifiersToIgnore:(id)arg3;
- (id)runAuditWithError:(id *)arg1;

@end
