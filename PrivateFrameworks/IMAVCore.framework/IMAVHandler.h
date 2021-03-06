/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSTimer;

@interface IMAVHandler : XXUnknownSuperclass {
	NSMutableArray* _wifiActivationQueue;
	NSTimer* _wiFiQueueTimer;
}
+(void)ensureHandlerSetup;
-(void)dealloc;
-(oneway void)account:(id)account conference:(id)conference receivedInvitationFrom:(id)from properties:(id)properties;
-(oneway void)account:(id)account conference:(id)conference receivedCounterProposalFrom:(id)from properties:(id)properties;
-(oneway void)account:(id)account conference:(id)conference receivedResponseToInvitationFrom:(id)from properties:(id)properties;
-(oneway void)account:(id)account conference:(id)conference receivedCancelInvitationFrom:(id)from properties:(id)properties;
-(oneway void)account:(id)account conference:(id)conference receivedUpdateFrom:(id)from data:(id)data;
-(oneway void)account:(id)account conference:(id)conference receivedAVMessage:(unsigned)message from:(id)from sessionID:(unsigned)anId userInfo:(id)info;
-(oneway void)account:(id)account conference:(id)conference peerIDChangedFromID:(id)anId toID:(id)anId4;
-(oneway void)account:(id)account conference:(id)conference changedToNewConferenceID:(id)newConferenceID;
-(oneway void)account:(id)account conference:(id)conference requestSendResponseWithResult:(int)result toPerson:(id)person;
-(void)_setWiFiActivationTimer;
-(void)_clearWiFiActivationQueue;
-(void)_checkWiFiQueue:(id)queue;
-(void)_notifyMissedInvitationFor:(id)aFor;
-(void)_notifyInvitationFor:(id)aFor;
-(void)_notifyOfIncomingInvitationFor:(id)aFor notifyInvitationListeners:(BOOL)listeners;
-(void)_enqueueIMAVChatForWiFiActivation:(id)wiFiActivation;
-(void)_handleIncomingAVChatForNotification:(id)notification;
-(oneway void)account:(id)account conference:(id)conference requestInvitationWithBuddy:(id)buddy;
-(oneway void)account:(id)account conference:(id)conference notifyMissedInvitationWithBuddy:(id)buddy;
-(oneway void)account:(id)account conference:(id)conference cancelRequestInvitationWithBuddy:(id)buddy;
-(oneway void)vcCapabilitiesChanged:(unsigned long long)changed;
-(oneway void)pendingVCRequestComplete;
-(oneway void)setupComplete;
-(oneway void)property:(id)property changedTo:(id)to from:(id)from;
-(oneway void)persistentProperty:(id)property changedTo:(id)to from:(id)from;
-(oneway void)account:(id)account postedError:(id)error;
-(oneway void)account:(id)account relay:(id)relay handleInitate:(id)initate fromPerson:(id)person;
-(oneway void)account:(id)account relay:(id)relay handleUpdate:(id)update fromPerson:(id)person;
-(oneway void)account:(id)account relay:(id)relay handleCancel:(id)cancel fromPerson:(id)person;
-(oneway void)currentAVChatInfoRequestedWithTransactionID:(unsigned)transactionID;
-(oneway void)audioReflectorRequested:(BOOL)requested transactionID:(unsigned)anId;
-(oneway void)videoStillForPersonRequested:(id)personRequested withTransactionID:(unsigned)transactionID;
@end

