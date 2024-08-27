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


@interface XCTScreenCapturePolicy : NSObject <NSSecureCoding>
{
    NSInteger _captureFormat;
    NSInteger _attachmentLifetime;
}

@property(readonly, nonatomic) NSInteger attachmentLifetime;
@property(readonly, nonatomic) NSInteger captureFormat;

+ (id)defaultPolicy;
- (id)dictionaryRepresentation;
- (id)initWithCaptureFormat:(NSInteger)arg1 attachmentLifetime:(NSInteger)arg2;
- (id)initWithDictionary:(id)arg1;

@end
