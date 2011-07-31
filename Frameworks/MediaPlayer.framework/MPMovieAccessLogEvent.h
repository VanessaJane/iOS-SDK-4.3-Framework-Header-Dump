/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCopying.h"
#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

@interface MPMovieAccessLogEvent : XXUnknownSuperclass <NSCopying> {
	MPMovieAccessLogEventInternal _internal;
}
@property(assign, nonatomic) MPMovieAccessLogEventInternal _internal;
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;
@property(readonly, assign, nonatomic) double indicatedBitrate;
@property(readonly, assign, nonatomic) double observedBitrate;
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;
@property(readonly, assign, nonatomic) int numberOfStalls;
@property(readonly, assign, nonatomic) double durationWatched;
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;
@property(readonly, assign, nonatomic) double playbackStartOffset;
@property(readonly, assign, nonatomic) NSString* playbackSessionID;
@property(readonly, assign, nonatomic) unsigned numberOfServerAddressChanges;
@property(readonly, assign, nonatomic) NSString* serverAddress;
@property(readonly, assign, nonatomic) NSString* URI;
@property(readonly, assign, nonatomic) NSDate* playbackStartDate;
@property(readonly, assign, nonatomic) unsigned numberOfSegmentsDownloaded;
-(id)_initWithAVItemAccessLogEvent:(id)avitemAccessLogEvent;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end
