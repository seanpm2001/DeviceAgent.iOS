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

@class NSString, XCTSourceCodeContext;

@interface XCTSkippedTestContext : NSObject
{
    BOOL _isFromXCTSkip;
    NSString *_summary;
    NSString *_explanation;
    NSString *_evaluatedExpression;
    NSString *_message;
    XCTSourceCodeContext *_sourceCodeContext;
}

@property(readonly, copy) NSString *evaluatedExpression;
@property(readonly, copy) NSString *explanation;
@property(readonly) BOOL isFromXCTSkip;
@property(readonly, copy) NSString *message;
@property(readonly) XCTSourceCodeContext *sourceCodeContext;
@property(readonly, copy) NSString *summary;

+ (id)skippedTestContextWithExceptionPointer:(id)arg1 evaluatedExpression:(id)arg2 message:(id)arg3 sourceCodeContext:(id)arg4;
- (id)initWithCurrentExceptionAndEvaluatedExpression:(id)arg1 message:(id)arg2 sourceCodeContext:(id)arg3;
- (id)initWithError:(id)arg1 evaluatedExpression:(id)arg2 message:(id)arg3 sourceCodeContext:(id)arg4;
- (id)initWithException:(id)arg1 evaluatedExpression:(id)arg2 message:(id)arg3 sourceCodeContext:(id)arg4;
- (id)initWithExpectedValue:(BOOL)arg1 evaluatedExpression:(id)arg2 message:(id)arg3 sourceCodeContext:(id)arg4;
- (id)initWithExplanation:(id)arg1 evaluatedExpression:(id)arg2 message:(id)arg3 sourceCodeContext:(id)arg4;
- (id)initWithExplanation:(id)arg1 evaluatedExpression:(id)arg2 message:(id)arg3 sourceCodeContext:(id)arg4 isFromXCTSkip:(BOOL)arg5;
- (id)initWithNonSkipError:(id)arg1;

@end

