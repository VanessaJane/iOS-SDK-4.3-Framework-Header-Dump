/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import "AVPlayerItem.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSURL, AVVideoComposition, AVAudioMix, AVPlayerItemInternal, NSDate, NSArray, AVAsset;

@interface AVPlayerItem : XXUnknownSuperclass <NSCopying> {
@private
	AVPlayerItemInternal* _playerItem;
}
@property(readonly, assign, nonatomic) int status;
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) NSArray* timedMetadata;
@property(readonly, assign, nonatomic) NSArray* loadedTimeRanges;
@property(readonly, assign, nonatomic) NSArray* seekableTimeRanges;
@property(readonly, assign, nonatomic, getter=isPlaybackBufferEmpty) BOOL playbackBufferEmpty;
@property(readonly, assign, nonatomic, getter=isPlaybackBufferFull) BOOL playbackBufferFull;
@property(readonly, assign, nonatomic, getter=isPlaybackLikelyToKeepUp) BOOL playbackLikelyToKeepUp;
@property(copy, nonatomic) AVVideoComposition* videoComposition;
@property(copy, nonatomic) AVAudioMix* audioMix;
@property(assign, nonatomic) XXStruct_pwHToB reversePlaybackEndTime;
@property(assign, nonatomic) XXStruct_pwHToB forwardPlaybackEndTime;
@property(readonly, assign, nonatomic) CGSize presentationSize;
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;
@property(readonly, assign, nonatomic) NSArray* tracks;
@property(readonly, assign, nonatomic) AVAsset* asset;
+(void)initialize;
+(BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+(BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+(id)playerItemWithURL:(id)url;
+(id)playerItemWithAsset:(id)asset;
+(BOOL)automaticallyNotifiesObserversOfForwardPlaybackEndTime;
+(BOOL)automaticallyNotifiesObserversOfReversePlaybackEndTime;
+(BOOL)automaticallyNotifiesObserversOfLimitReadAhead;
+(BOOL)automaticallyNotifiesObserversOfAlwaysMonitorsPlayability;
+(BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForSeek;
+(BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForRateChange;
+(BOOL)automaticallyNotifiesObserversOfAudioMix;
+(BOOL)automaticallyNotifiesObserversOfVideoComposition;
+(BOOL)automaticallyNotifiesObserversOfGaplessInfo;
+(BOOL)automaticallyNotifiesObserversOfSoundCheckVolumeNormalization;
+(BOOL)automaticallyNotifiesObserversOfVolumeAdjustment;
+(BOOL)automaticallyNotifiesObserversOfNonForcedSubtitleDisplayEnabled;
+(BOOL)automaticallyNotifiesObserversOfStatus;
+(BOOL)automaticallyNotifiesObserversOfAsset;
+(BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+(BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+(BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;
+(BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+(BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+(BOOL)automaticallyNotifiesObserversOfPresentationSize;
+(BOOL)automaticallyNotifiesObserversOfTracks;
-(id)init;
-(id)initWithURL:(id)url;
-(id)initWithAsset:(id)asset;
-(id)chapterImageDataForTime:(XXStruct_pwHToB)time;
-(id)timesForChapterType:(id)chapterType;
-(id)retain;
-(void)release;
-(void)dealloc;
-(void)finalize;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(id)_weakReference;
-(dispatch_queue_s*)_stateDispatchQueue;
-(OpaqueFigPlaybackItem*)_figPlaybackItem;
-(id)_propertyStorage;
-(id)_cachedValueForKey:(id)key;
-(void)_willAccessKVOForKey:(id)key;
-(void)_didAccessKVOForKey:(id)key;
-(void)willChangeValueForKey:(id)key;
-(void)didChangeValueForKey:(id)key;
-(void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void*)context;
-(void)_setUpFigContentProtection:(BOOL)protection;
-(void)_configurePlaybackItem;
-(id)_player;
-(BOOL)_isCurrentPlayerItem;
-(void)_setIsCurrentPlayerItem:(BOOL)item;
-(id)_playerConnection;
-(void)_setPlayerConnection:(id)connection;
-(void)_createPlayerConnection:(id)connection shouldAppendItem:(BOOL)item;
-(void)_attachToPlayer:(id)player forImmediateEnqueueing:(BOOL)immediateEnqueueing shouldAppendItem:(BOOL)item;
-(void)_detachFromPlayer;
-(void)_playerChangeStatusToFailedWithError:(id)error;
-(id)_nextItem;
-(id)_previousItem;
-(void)_insertAfterItem:(id)item;
-(void)_removeFromItems;
-(id)_URL;
-(void)_setURL:(id)url;
-(void)_setAsset:(id)asset;
-(void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
-(void)_kickAssetObserversIfAppropriate;
-(void)_informObserversAboutAvailabilityOfTracks;
-(id)_chapterArrayWithType:(CFStringRef)type;
-(void)_changeStatusToFailedWithError:(id)error;
-(XXStruct_pwHToB)_duration;
-(id)_tracks;
-(id)_trackWithTrackID:(int)trackID;
-(id)_fpNotificationNames;
-(void)_addFPListeners;
-(void)_removeFPListeners;
-(void)_respondToBecomingReadyForBasicInspection;
-(void)_invokeReadyForEnqueueingHandlers;
-(void)_makeReadyForEnqueueingWithCompletionHandler:(id)completionHandler;
-(CGSize)_presentationSize;
-(XXStruct_pwHToB)currentTime;
-(void)seekToTime:(XXStruct_pwHToB)time;
-(void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;
-(id)currentDate;
-(BOOL)seekToDate:(id)date;
-(id)initialDate;
-(void)setInitialDate:(id)date;
-(id)currentEstimatedDate;
-(id)initialEstimatedDate;
-(void)setInitialEstimatedDate:(id)date;
-(void)stepByCount:(int)count;
-(XXStruct_pwHToB)_forwardPlaybackEndTime;
-(void)_quietlySetForwardPlaybackEndTime:(XXStruct_pwHToB)time;
-(XXStruct_pwHToB)_reversePlaybackEndTime;
-(void)_quietlySetReversePlaybackEndTime:(XXStruct_pwHToB)time;
-(BOOL)_limitReadAhead;
-(BOOL)limitReadAhead;
-(void)_quietlySetLimitReadAhead:(BOOL)ahead;
-(void)setLimitReadAhead:(BOOL)ahead;
-(BOOL)_alwaysMonitorsPlayability;
-(BOOL)alwaysMonitorsPlayability;
-(void)_quietlySetAlwaysMonitorsPlayability:(BOOL)playability;
-(void)setAlwaysMonitorsPlayability:(BOOL)playability;
-(BOOL)_continuesPlayingDuringPrerollForSeek;
-(BOOL)continuesPlayingDuringPrerollForSeek;
-(void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)seek;
-(void)setContinuesPlayingDuringPrerollForSeek:(BOOL)seek;
-(BOOL)_continuesPlayingDuringPrerollForRateChange;
-(BOOL)continuesPlayingDuringPrerollForRateChange;
-(void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;
-(void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;
-(void)_setVideoCompositionFrameDuration:(XXStruct_pwHToB)duration;
-(void)_setVideoCompositionRenderSize:(CGSize)size;
-(void)_setVideoCompositionRenderScale:(float)scale;
-(void)_setVideoCompositionInstructions:(id)instructions;
-(void)_setVideoCompositor:(id)compositor;
-(float)progressTowardsPlaybackLikelyToKeepUp;
-(id)playabilityMetrics;
-(id)_seekableTimeRanges;
-(id)_loadedTimeRanges;
-(id)gaplessInfo;
-(void)_quietlySetGaplessInfo:(id)info;
-(void)setGaplessInfo:(id)info;
-(void)_quietlySetSoundCheckVolumeNormalization:(float)normalization;
-(void)setSoundCheckVolumeNormalization:(float)normalization;
-(float)soundCheckVolumeNormalization;
-(void)_quietlySetVolumeAdjustment:(float)adjustment;
-(void)setVolumeAdjustment:(float)adjustment;
-(float)volumeAdjustment;
-(int)selectedTrackIDInTrackGroup:(id)trackGroup;
-(void)selectTrackWithID:(int)anId inTrackGroup:(id)trackGroup;
-(BOOL)isNonForcedSubtitleDisplayEnabled;
-(void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;
-(void)_configureProtectedContent;
-(OpaqueFigCPEProtector*)_figCPEProtector;
-(id)chapterNames;
-(id)chapterHREFs;
-(void)_setTimedMetadata:(id)metadata;
-(void)_setSyncLayersOnFigPlaybackItem;
-(void)_removeSyncLayer:(id)layer;
-(void)_addSyncLayer:(id)layer;
-(id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)error;
@end

@interface AVPlayerItem (AVPlayerItemLogging)
-(id)accessLog;
-(id)errorLog;
@end

@interface AVPlayerItem (AVPlayerItemProtectedContentPrivate)
@property(readonly, assign, nonatomic) NSDate* _rentalPlaybackExpirationDate;
@property(readonly, assign, nonatomic) NSDate* _rentalPlaybackStartedDate;
@property(readonly, assign, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;
@property(readonly, assign, nonatomic) NSDate* _rentalExpirationDate;
@property(readonly, assign, nonatomic) NSDate* _rentalStartDate;
@property(readonly, assign, nonatomic, getter=_isRental) BOOL _rental;
@property(assign, nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;
@property(copy, nonatomic, setter=_setProtectedContentPlaybackSupportStorageURL:) NSURL* _protectedContentPlaybackSupportStorageURL;
+(id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)provider withOptions:(id)options;
+(void)_uninitializeProtectedContentPlaybackSupportSession:(id)session;
-(void)_setContentProtectionInfo:(id)info;
-(void)_setContentAuthorizationInfo:(id)info;
@end

@interface AVPlayerItem (AVPlayerItemProtectedContent)
@property(readonly, assign, nonatomic, getter=isContentAuthorizedForPlayback) BOOL contentAuthorizedForPlayback;
@property(readonly, assign, nonatomic, getter=isApplicationAuthorizedForPlayback) BOOL applicationAuthorizedForPlayback;
@property(readonly, assign, nonatomic, getter=isAuthorizationRequiredForPlayback) BOOL authorizationRequiredForPlayback;
@end

