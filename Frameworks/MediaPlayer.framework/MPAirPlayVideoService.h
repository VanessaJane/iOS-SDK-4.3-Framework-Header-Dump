/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "NSNetServiceDelegate.h"

@class MPAVItem, MCMediaControlClientRemote, NSString, NSNetService, NSDictionary, NSData;

@interface MPAirPlayVideoService : XXUnknownSuperclass <NSNetServiceDelegate> {
@private
	int _resolutionState;
	NSNetService* _netService;
	DNSServiceRef_tRef _dnsService;
	NSString* _ipAddress;
	MCMediaControlClientRemote* _mediaControlClient;
	MPAVItem* _item;
	void* _context;
	NSData* _playInfoData;
	NSDictionary* _cachedPlaybackInfo;
	double _lastFetchedPlaybackInfoTimeInterval;
	double _cachedCurrentPlaybackTime;
	float _cachedVolume;
	unsigned _capabilities;
	BOOL _didResolveOrFailToResolve;
	BOOL _hasVolumeControl;
	BOOL _isPlaying;
	BOOL _playbackTimeIsValid;
	BOOL _preparingToPlay;
	BOOL _waitingForPlaybackToBegin;
	BOOL _waitingForPasswordEntry;
	unsigned _bufferingState;
	unsigned _playbackState;
}
@property(assign, nonatomic) void* context;
@property(readonly, assign, nonatomic) BOOL _didResolveOrFailToResolve;
@property(readonly, assign, nonatomic) NSNetService* netService;
@property(readonly, assign, nonatomic) BOOL isAvailable;
+(void)_beginBackgroundNetworkAssertion;
+(void)_endBackgroundNetworkAssertion;
-(id)_initWithNSNetService:(id)nsnetService;
-(void)dealloc;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)name;
-(id)ipAddress;
-(BOOL)canDisplayItem:(id)item;
-(int)resolutionState;
-(BOOL)prepareToDisplayItem:(id)displayItem completionHandler:(id)handler;
-(id)item;
-(void)setItem:(id)item;
-(BOOL)playWithCompletionHandler:(id)completionHandler;
-(void)stop;
-(BOOL)setRate:(float)rate;
-(unsigned)bufferingState;
-(unsigned)playbackState;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)time;
-(id)currentPlaybackDate;
-(id)currentEstimatedPlaybackDate;
-(double)durationIfAvailable;
-(double)playableDuration;
-(double)timeOfPlayableStart;
-(double)timeOfPlayableEnd;
-(double)timeOfSeekableStart;
-(double)timeOfSeekableEnd;
-(BOOL)hasVolumeControl;
-(float)volume;
-(void)setVolume:(float)volume;
-(unsigned)capabilities;
-(void)sendPICRequestData:(id)data responseHandler:(id)handler;
-(void)sendPlayInfoData:(id)data;
-(void)_cancelResolve;
-(id)_currentPlaybackInfo;
-(void)_playWithLocalFilePath:(id)localFilePath password:(id)password startPosition:(float)position playInfo:(id)info completionHandler:(id)handler;
-(void)_playRemoteWithParams:(id)params password:(id)password completionHandler:(id)handler;
-(void)_resolveWithTimeout:(double)timeout;
-(void)_sendPICRequestData:(id)data password:(id)password responseHandler:(id)handler;
-(void)_setPlaybackState:(unsigned)state;
-(void)_updateForPlaybackEnding;
-(void)_updateForPlaybackStarting;
@end

