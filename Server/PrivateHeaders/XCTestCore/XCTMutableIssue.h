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

@class NSArray, NSDate, NSError, NSMutableArray, NSString, XCTSourceCodeContext;

@interface XCTMutableIssue
{
    NSMutableArray *_mutableAttachments;
}

@property(copy) NSArray *attachments;
@property(retain) NSError *associatedError; // @dynamic associatedError;
@property(copy) NSString *compactDescription; // @dynamic compactDescription;
@property(copy) NSString *detailedDescription; // @dynamic detailedDescription;
@property(retain) XCTSourceCodeContext *sourceCodeContext; // @dynamic sourceCodeContext;
@property(copy) NSDate *timestamp; // @dynamic timestamp;
@property NSInteger type; // @dynamic type;

- (void)addAttachment:(id)arg1;
- (id)initWithType:(NSInteger)arg1 compactDescription:(id)arg2 detailedDescription:(id)arg3 sourceCodeContext:(id)arg4 associatedError:(id)arg5 attachments:(id)arg6;


@end

