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

#import "XCUIScreenDataSource-Protocol.h"

@protocol XCUILocalDeviceScreenRecordingIPCInterface, XCUILocalDeviceScreenshotIPCInterface;

@interface XCUILocalDeviceScreenDataSource : NSObject <XCUIScreenDataSource>
{
    id <XCUILocalDeviceScreenshotIPCInterface> _screenshotIPCInterface;
    id <XCUILocalDeviceScreenRecordingIPCInterface> _screenRecordingIPCInterface;
}

@property(readonly, nonatomic) BOOL preferScreenshotsOverScreenRecordings;
@property(retain, nonatomic) id <XCUILocalDeviceScreenRecordingIPCInterface> screenRecordingIPCInterface;
@property(retain, nonatomic) id <XCUILocalDeviceScreenshotIPCInterface> screenshotIPCInterface;
@property(readonly, nonatomic) BOOL supportsHEICImageEncoding;
@property(readonly, nonatomic) BOOL supportsScreenRecording;

- (id)_clippedScreenshotFromImage:(id)arg1 encoding:(id)arg2 rect:(CGRect)arg3;
- (id)_displayWithIdentifier:(NSInteger)arg1;
- (id)initWithScreenshotIPCInterface:(id)arg1 screenRecordingIPCInterface:(id)arg2;
- (void)requestBoundsForScreenWithIdentifier:(NSInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScaleForScreenWithIdentifier:(NSInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestScreenIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestScreenshotAttachmentWithRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)requestScreenshotWithRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)requestTraitsForScreenWithIdentifier:(NSInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startScreenRecordingWithRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)stopScreenRecordingWithUUID:(id)arg1 withReply:(CDUnknownBlockType)arg2;



@end

