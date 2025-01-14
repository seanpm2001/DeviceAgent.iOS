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

@class NSObject;
@protocol OS_dispatch_queue;

@interface DTXSharedMemoryTransport
{
    struct DTXSharedMemory *_shm;
    NSObject<OS_dispatch_queue> *_listenQueue;
    BOOL _creator;
}

@property(nonatomic) NSInteger remotePid;
@property(readonly, nonatomic) struct DTXSharedMemory *sharedMemory;
@property(readonly, nonatomic) NSUInteger totalSharedMemorySize;

+ (id)addressForMemory:(NSUInteger)arg1 inProcess:(NSInteger)arg2;
+ (id)addressForPosixSharedMemoryWithName:(id)arg1;
+ (id)schemes;
- (BOOL)_setupCreatingSharedMemory:(id)arg1 size:(NSInteger)arg2;
- (BOOL)_setupWithShm:(struct DTXSharedMemory *)arg1 asCreator:(BOOL)arg2;
- (void)disconnect;
- (id)initWithLocalName:(id)arg1 size:(NSInteger)arg2;
- (id)initWithMappedMemory:(struct DTXSharedMemory *)arg1;
- (id)initWithMemoryAddress:(NSUInteger)arg1 inTask:(NSUInteger)arg2;
- (id)initWithRemoteAddress:(id)arg1;
- (id)localAddresses;
- (id)permittedBlockCompressionTypes;
- (NSUInteger)transmit:(const void *)arg1 ofLength:(NSUInteger)arg2;

@end

