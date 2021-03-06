/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GMMIncomingSuperTile, GMMStreetViewMetadata, GMMIncomingThumbnail, GMMIncomingTile, GMMNavigationImage, NSString;

@interface GMMStreetViewResponse : XXUnknownSuperclass {
@private
	NSString* _panoId;
	GMMIncomingSuperTile* _incomingSuperTile;
	GMMIncomingTile* _incomingTile;
	GMMIncomingThumbnail* _incomingThumbnail;
	GMMNavigationImage* _navigationImage;
	GMMStreetViewMetadata* _metadata;
	NSString* _signature;
	BOOL _throttled;
	BOOL _hasThrottled;
}
@property(retain, nonatomic) NSString* panoId;
@property(retain, nonatomic) GMMIncomingSuperTile* incomingSuperTile;
@property(retain, nonatomic) GMMIncomingTile* incomingTile;
@property(retain, nonatomic) GMMIncomingThumbnail* incomingThumbnail;
@property(retain, nonatomic) GMMNavigationImage* navigationImage;
@property(retain, nonatomic) GMMStreetViewMetadata* metadata;
@property(retain, nonatomic) NSString* signature;
@property(assign, nonatomic) BOOL throttled;
@property(readonly, assign, nonatomic) BOOL hasThrottled;
@property(readonly, assign, nonatomic) BOOL hasSignature;
@property(readonly, assign, nonatomic) BOOL hasMetadata;
@property(readonly, assign, nonatomic) BOOL hasNavigationImage;
@property(readonly, assign, nonatomic) BOOL hasIncomingThumbnail;
@property(readonly, assign, nonatomic) BOOL hasIncomingTile;
@property(readonly, assign, nonatomic) BOOL hasIncomingSuperTile;
@property(readonly, assign, nonatomic) BOOL hasPanoId;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
@end

