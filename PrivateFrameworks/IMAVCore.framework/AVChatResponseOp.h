/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import "AVChatNegotiationOp.h"

@class NSDictionary;

@interface AVChatResponseOp : AVChatNegotiationOp {
	NSDictionary* _callerProperties;
	unsigned _response;
	unsigned _sessionID;
}
-(void)dealloc;
-(id)initWithParticipant:(id)participant response:(unsigned)response conferenceID:(id)anId;
-(void)createChildOperations;
-(void)_sendMessageToBuddy:(id)buddy result:(id)result;
-(void)didFinish;
-(void)main;
@end

