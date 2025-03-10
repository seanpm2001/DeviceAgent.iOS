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

@class DTXChannel, DTXMessageParser, DTXMessageTransmitter, DTXResourceTracker, DTXTransport, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol DTXBlockCompressor, OS_dispatch_queue, OS_dispatch_semaphore;

@interface DTXConnection : NSObject
{
    NSString *_label;
    NSObject<OS_dispatch_queue> *_outgoing_message_queue;
    NSObject<OS_dispatch_queue> *_outgoing_control_queue;
    DTXTransport *_controlTransport;
    NSSet *_permittedBlockCompressors;
    NSObject<OS_dispatch_queue> *_receive_queue;
    NSObject<OS_dispatch_queue> *_handler_queue;
    NSUInteger _nextChannelCode;
    NSMutableDictionary *_channelsByCode;
    NSMutableDictionary *_unconfiguredChannelsByCode;
    NSMutableDictionary *_handlersByIdentifier;
    NSMutableArray *_protocolHandlers;
    NSMutableDictionary *_localCapabilityVersions;
    NSMutableDictionary *_localCapabilityClasses;
    NSDictionary *_remoteCapabilityVersions;
    NSMutableArray *_capabilityOverrideBlocks;
    DTXResourceTracker *_resourceTracker;
    DTXResourceTracker *_incomingResourceTracker;
    NSObject<OS_dispatch_semaphore> *_firstMessageSem;
    DTXMessageParser *_incomingParser;
    DTXMessageTransmitter *_outgoingTransmitter;
    DTXChannel *_defaultChannel;
    BOOL _tracer;
    BOOL _remoteTracer;
    NSInteger _connectionIndex;
    CDUnknownBlockType _channelHandler;
    NSUInteger _logMessageCallstackSizeThreshold;
    NSInteger _remoteCompressionCapabilityVersion;
    NSInteger _newChannelCompressionHint;
    NSInteger _compressionTypeForUnspecified;
    NSUInteger _compressionMinSizeThreshold;
    id <DTXBlockCompressor> _compressor;
}

@property(readonly, nonatomic) NSInteger atomicConnectionNumber;
@property(readonly, retain, nonatomic) DTXChannel *defaultChannel;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) NSUInteger maximumEnqueueSize;
@property(nonatomic) BOOL remoteTracer;
@property(nonatomic) BOOL tracer;

+ (id)connectionToAddress:(id)arg1;
+ (void)observeDecompressionExceptionLogging:(CDUnknownBlockType)arg1;
+ (void)registerTransport:(Class)arg1 forScheme:(id)arg2;
- (BOOL)_addHandler:(CDUnknownBlockType)arg1 forMessage:(NSUInteger)arg2 channel:(id)arg3;
- (void)_cancelInternal:(CDUnknownBlockType)arg1;
- (void)_channelCanceled:(NSUInteger)arg1;
- (void)_handleMessageParseException:(id)arg1 forChannelCode:(NSUInteger)arg2 messageID:(NSUInteger)arg3 fragmentCount:(NSUInteger)arg4 withPayloadBytes:(const void *)arg5 ofLength:(NSUInteger)arg6;
- (void)_handleMissingRemoteCapabilities;
- (void)_handleProxyRequestForInterface:(id)arg1 interfaceName:(id)arg2 peerInterface:(id)arg3 peerInterfaceName:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_makeProxyChannelWithRemoteInterface:(id)arg1 remoteInterfaceName:(id)arg2 exportedInterface:(id)arg3 exportedInterfaceName:(id)arg4;
- (void)_notifyCompressionHint:(NSUInteger)arg1 forChannelCode:(NSUInteger)arg2;
- (void)_notifyOfPublishedCapabilities:(id)arg1;
- (void)_receiveQueueSetCompressionHint:(NSUInteger)arg1 onChannel:(id)arg2;
- (void)_requestChannelWithCode:(NSUInteger)arg1 identifier:(id)arg2;
- (void)_routeMessage:(id)arg1;
- (void)_scheduleMessage:(id)arg1 toChannel:(id)arg2;
- (id)_sendHeartbeatAsyncWithTimeout:(double)arg1;
- (void)_setTracerState:(NSUInteger)arg1;
- (void)_setupWireProtocols;
- (id)_testing_remoteCapabilityVersions;
- (void)_unregisterChannel:(id)arg1;
- (void)cancel;
- (void)cancelWithSerializedTransport:(CDUnknownBlockType)arg1;
- (void)handleProxyRequestForInterface:(id)arg1 interfaceName:(id)arg2 peerInterface:(id)arg3 peerInterfaceName:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)handleProxyRequestForInterface:(id)arg1 peerInterface:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithTransport:(id)arg1;
- (id)localCapabilities;
- (id)makeChannelWithIdentifier:(id)arg1;
- (id)makeProxyChannelWithRemoteInterface:(id)arg1 exportedInterface:(id)arg2;
- (id)makeProxyChannelWithRemoteInterface:(id)arg1 remoteInterfaceName:(id)arg2 exportedInterface:(id)arg3 exportedInterfaceName:(id)arg4;
- (void)overridePermittedBlockCompressors:(id)arg1;
- (double)preflightSynchronouslyWithTimeout:(double)arg1;
- (void)publishCapability:(id)arg1 withVersion:(NSInteger)arg2 forClass:(Class)arg3;
- (BOOL)publishCapability:(id)arg1 withVersion:(NSInteger)arg2 forClass:(Class)arg3 error:(id *)arg4;
- (void)publishServicesInImagePath:(id)arg1;
- (id)publishedAddresses;
- (void)registerCapabilityOverrideBlock:(CDUnknownBlockType)arg1;
- (void)registerDisconnectHandler:(CDUnknownBlockType)arg1;
- (NSInteger)remoteCapabilityVersion:(id)arg1;
- (id)remoteCapabilityVersions;
- (void)replaceCompressorForCompression:(id)arg1;
- (void)replaceCompressorForDecompression:(id)arg1;
- (void)resume;
- (void)sendControlAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendControlSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)sendMessage:(id)arg1 fromChannel:(id)arg2 sendMode:(NSInteger)arg3 syncWithReply:(BOOL)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (BOOL)sendMessageAsync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessageSync:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)setChannelHandler:(CDUnknownBlockType)arg1;
- (void)setCompressionHint:(NSInteger)arg1 forChannel:(id)arg2;
- (void)setDispatchTarget:(id)arg1;
- (void)setMessageHandler:(CDUnknownBlockType)arg1;
- (void)suspend;


@end

