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

@class NSData, NSDictionary, NSError;
@protocol NSSecureCoding><NSObject;

@interface DTXMessage : NSObject
{
    NSUInteger _messageType;
    NSInteger _compressionType;
    NSUInteger _status;
    NSData *_payloadData;
    NSUInteger _cost;
    NSData *_serializedData;
    id <NSSecureCoding><NSObject> _payloadObject;
    void *_auxiliary;
    _Atomic BOOL _immutable;
    BOOL _deserialized;
    BOOL _expectsReply;
    NSUInteger _identifier;
    NSUInteger _channelCode;
    NSUInteger _conversationIndex;
    NSDictionary *_auxiliaryPromoted;
}

@property(nonatomic) NSUInteger channelCode;
@property(nonatomic) NSUInteger conversationIndex;
@property(readonly, nonatomic) NSUInteger cost;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) BOOL deserialized;
@property(retain, nonatomic) NSError *error;
@property(nonatomic) NSUInteger errorStatus;
@property(nonatomic) BOOL expectsReply;
@property(nonatomic) NSUInteger identifier;
@property(readonly, nonatomic) BOOL isBarrier;
@property(readonly, nonatomic) BOOL isDispatch;
@property(nonatomic) NSUInteger messageType;
@property(readonly, nonatomic) id <NSSecureCoding><NSObject> object;
@property(copy, nonatomic) id <NSSecureCoding><NSObject> payloadObject;
@property(readonly, nonatomic) NSUInteger serializedLength;

+ (id)defaultAllowedSecureCodingClasses;
+ (BOOL)extractSerializedCompressionInfoFromBuffer:(const char *)arg1 length:(NSUInteger)arg2 compressionType:(NSInteger *)arg3 uncompressedLength:(NSUInteger *)arg4 compressedDataOffset:(NSUInteger *)arg5;
+ (id)message;
+ (id)messageReferencingBuffer:(const void *)arg1 length:(NSUInteger)arg2 destructor:(CDUnknownBlockType)arg3;
+ (id)messageWithBuffer:(const void *)arg1 length:(NSUInteger)arg2;
+ (id)messageWithData:(id)arg1;
+ (id)messageWithError:(id)arg1;
+ (id)messageWithObject:(id)arg1;
+ (id)messageWithPrimitive:(void *)arg1;
+ (id)messageWithSelector:(SEL)arg1 arguments:(id)arg2;
+ (id)messageWithSelector:(SEL)arg1 objectArguments:(id)arg2;
+ (id)messageWithSelector:(SEL)arg1 typesAndArguments:(NSUInteger)arg2;
+ (void)setReportCompressionBlock:(CDUnknownBlockType)arg1;
- (void)_appendTypesAndValues:(NSUInteger)arg1 withKey:(id)arg2 list:(struct __va_list_tag [1])arg3;
- (id)_decompressedData:(id)arg1 compressor:(id)arg2 compressionType:(NSInteger)arg3;
- (id)_faultAuxiliaryValueOfType:(Class)arg1 forKey:(id)arg2;
- (id)_initWithReferencedSerializedForm:(id)arg1 compressor:(id)arg2 payloadSet:(CDUnknownBlockType)arg3;
- (void)_makeBarrier;
- (void)_makeImmutable;
- (id)_mutableAuxiliaryDictionary;
- (void)_setPayloadBuffer:(const char *)arg1 length:(NSUInteger)arg2 shouldCopy:(BOOL)arg3 destructor:(CDUnknownBlockType)arg4;
- (void)_willModifyAuxiliary;
- (void)compressWithCompressor:(id)arg1 usingType:(NSInteger)arg2 forCompatibilityWithVersion:(NSInteger)arg3;
- (id)dataForMessageKey:(id)arg1;
- (id)descriptionWithRoutingInformation:(struct DTXMessageRoutingInfo)arg1;
- (const void *)getBufferWithReturnedLength:(NSUInteger *)arg1;
- (id)initWithInvocation:(id)arg1;
- (id)initWithSelector:(SEL)arg1 firstArg:(id)arg2 remainingObjectArgs:(struct __va_list_tag [1])arg3;
- (id)initWithSelector:(SEL)arg1 objects:(id)arg2;
- (id)initWithSerializedForm:(id)arg1 compressor:(id)arg2;
- (id)initWithSerializedForm:(const char *)arg1 length:(NSUInteger)arg2 destructor:(CDUnknownBlockType)arg3 compressor:(id)arg4;
- (NSInteger)integerForMessageKey:(id)arg1;
- (void)invokeWithTarget:(id)arg1 replyChannel:(id)arg2 validator:(CDUnknownBlockType)arg3;
- (id)newReply;
- (id)newReplyReferencingBuffer:(const void *)arg1 length:(NSUInteger)arg2 destructor:(CDUnknownBlockType)arg3;
- (id)newReplyWithError:(id)arg1;
- (id)newReplyWithMessage:(id)arg1;
- (id)newReplyWithObject:(id)arg1;
- (id)objectWithAllowedClasses:(id)arg1;
- (void)serializedFormApply:(CDUnknownBlockType)arg1;
- (void)setData:(id)arg1 forMessageKey:(id)arg2;
- (void)setInteger:(NSInteger)arg1 forMessageKey:(id)arg2;
- (void)setObject:(id)arg1 forMessageKey:(id)arg2;
- (void)setString:(id)arg1 forMessageKey:(id)arg2;
- (BOOL)shouldInvokeWithTarget:(id)arg1;
- (id)stringForMessageKey:(id)arg1;
- (id)valueForMessageKey:(id)arg1;

@end

