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


@interface _XCTExceptionPointer : NSObject
{
    struct exception_ptr _exceptionPointer;
}

@property(readonly, copy) NSString *exceptionDescription;
@property(readonly) const struct exception_ptr *exceptionPointer;

+ (id)currentExceptionPointer;
- (id).cxx_construct;
- (id)_nameOfTypeInfo:(const struct type_info *)arg1;
- (id)initWithExceptionPointer:(const struct exception_ptr *)arg1;
- (void)raise;

@end

