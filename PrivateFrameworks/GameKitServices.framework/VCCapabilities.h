/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface VCCapabilities : XXUnknownSuperclass {
@private
	BOOL isAudioEnabled;
	BOOL isAudioPausedToStart;
	BOOL isVideoEnabled;
	BOOL isVideoPausedToStart;
	BOOL isDuplexVideoOnly;
	BOOL isDuplexAudioOnly;
	BOOL isKeyExchangeEnabled;
	BOOL isRelayEnabled;
	BOOL isRelayForced;
	BOOL requiresWifi;
	unsigned preferredAudioCodec;
	unsigned actualAudioCodec;
	unsigned preferredVideoCodec;
	unsigned actualVideoCodec;
}
@property(assign) BOOL isAudioEnabled;
@property(assign) BOOL isVideoEnabled;
@property(assign) BOOL isDuplexVideoOnly;
@property(assign) BOOL isDuplexAudioOnly;
@property(assign) BOOL isKeyExchangeEnabled;
@property(assign) unsigned preferredAudioCodec;
@property(assign) unsigned actualAudioCodec;
@property(assign) unsigned preferredVideoCodec;
@property(assign) unsigned actualVideoCodec;
@property(assign) BOOL isAudioPausedToStart;
@property(assign) BOOL isVideoPausedToStart;
@property(assign) BOOL isRelayEnabled;
@property(assign) BOOL isRelayForced;
@property(assign) BOOL requiresWifi;
+(id)AudioOnlyVCCapabilities;
+(id)VideoOnlyVCCapabilities;
-(id)init;
-(id)description;
@end
