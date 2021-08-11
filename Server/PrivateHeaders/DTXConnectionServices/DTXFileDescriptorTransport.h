//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 26 2020 14:08:26).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTXConnectionServices/DTXTransport.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTXFileDescriptorTransport : DTXTransport
{
    int _inFD;
    int _outFD;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    int _outputWaitKQ;
    NSObject<OS_dispatch_source> *_inputSource;
    CDUnknownBlockType _inputReaderBlock;
    CDUnknownBlockType _disconnectBlock;
}

- (void).cxx_destruct;
- (int)_createWriteKQueue:(int)arg1;
- (void)_setupReadSource:(int)arg1;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (id)initWithIncomingFileDescriptor:(int)arg1 outgoingFileDescriptor:(int)arg2 disconnectBlock:(CDUnknownBlockType)arg3;
- (id)initWithIncomingFilePath:(id)arg1 outgoingFilePath:(id)arg2 error:(id *)arg3;
- (id)initWithXPCRepresentation:(id)arg1;
- (id)serializedXPCRepresentation;
- (void)setupWithIncomingDescriptor:(int)arg1 outgoingDescriptor:(int)arg2 disconnectBlock:(CDUnknownBlockType)arg3;
- (unsigned int)supportedDirections;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;

@end
