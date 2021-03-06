/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKVoiceChatService.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol GKVoiceChatClient;

@interface GKVoiceChatService : XXUnknownSuperclass {
@private
	id _voiceChatService;
}
@property(readonly, assign) float inputMeterLevel;
@property(readonly, assign) float outputMeterLevel;
@property(assign, nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(assign, nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(assign, nonatomic) float remoteParticipantVolume;
@property(assign, nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property(assign) id<GKVoiceChatClient> client;
+(void)initialize;
+(id)defaultVoiceChatService;
+(BOOL)isVoIPAllowed;
-(BOOL)startVoiceChatWithParticipantID:(id)participantID error:(id*)error;
-(void)stopVoiceChatWithParticipantID:(id)participantID;
-(BOOL)acceptCallID:(int)anId error:(id*)error;
-(void)denyCallID:(int)anId;
-(void)receivedRealTimeData:(id)data fromParticipantID:(id)participantID;
-(void)receivedData:(id)data fromParticipantID:(id)participantID;
@end

@interface GKVoiceChatService (PrivateMethods)
-(void)dealloc;
@end

