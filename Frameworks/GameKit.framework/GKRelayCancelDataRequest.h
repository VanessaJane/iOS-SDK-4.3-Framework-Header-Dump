/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSDictionary;

@interface GKRelayCancelDataRequest : GKDataRequest {
@private
	NSDictionary* _cancelRelayRequest;
}
@property(retain, nonatomic) NSDictionary* cancelRelayRequest;
-(void)dealloc;
-(id)key;
-(id)request;
-(void)handleResponseFromServer:(id)server error:(id)error;
@end
