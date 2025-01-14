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

#import "XCUIScreenshotProviding-Protocol.h"

@class NSString, XCUIButtonConsole, XCUIKnobControl;
@protocol XCUIDevice, XCUIScreenDataSource;

@interface XCUIScreen : NSObject <XCUIScreenshotProviding>
{
    BOOL _isMainScreen;
    XCUIKnobControl *_knobControl;
    XCUIButtonConsole *_buttonConsole;
    id <XCUIDevice> _device;
    id <XCUIScreenDataSource> _screenDataSource;
    NSInteger _displayID;
}

@property(readonly) CGRect bounds;
@property(readonly) XCUIButtonConsole *buttonConsole;
@property(readonly) __weak id <XCUIDevice> device;
@property(readonly) NSInteger displayID;
@property(readonly) BOOL isMainScreen;
@property(readonly) XCUIKnobControl *knobControl;
@property(readonly) double scale;
@property(readonly) id <XCUIScreenDataSource> screenDataSource;
@property(readonly) NSUInteger traits;

+ (id)mainScreen;
+ (id)screens;
- (id)initWithDisplayID:(NSInteger)arg1 isMainScreen:(BOOL)arg2 device:(id)arg3 screenDataSource:(id)arg4;
- (id)makeDiagnosticScreenshotAttachment;
- (id)screenshot;
- (id)screenshotAttachmentWithName:(id)arg1 lifetime:(NSInteger)arg2;
- (id)screenshotWithEncoding:(id)arg1 options:(NSUInteger)arg2;
- (id)screenshotWithPreferredEncoding:(id)arg1 rect:(CGRect)arg2 error:(id *)arg3;
- (id)screenshotWithPreferredEncoding:(id)arg1 rect:(CGRect)arg2 options:(NSUInteger)arg3 error:(id *)arg4;


@end

