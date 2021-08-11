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



@interface XCTMemgraph : NSObject <NSCopying, NSSecureCoding>
{
    NSInteger _processIdentifier;
    NSString *_filePath;
}

@property(readonly, nonatomic) NSString *filePath;
@property(readonly, nonatomic) NSInteger processIdentifier;

- (id)initWithGraphData:(id)arg1;
- (id)initWithPid:(NSInteger)arg1 filePath:(id)arg2;
- (id)saveMemgraphData:(id)arg1 withProcessName:(id)arg2;

@end
