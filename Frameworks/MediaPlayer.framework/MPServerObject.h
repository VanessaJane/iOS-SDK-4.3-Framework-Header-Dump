/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPServerObject : XXUnknownSuperclass {
@private
	int _clientPID;
	XXStruct_kUSYWB* _clientAuditToken;
}
@property(readonly, assign, nonatomic) int clientPID;
@property(readonly, assign, nonatomic) XXStruct_kUSYWB* clientAuditToken;
+(id)_center;
-(id)init;
-(void)_registerNotificationsForSelectors;
-(id)_forwardMessage:(id)message userInfo:(id)info auditToken:(XXStruct_kUSYWB*)token;
@end
