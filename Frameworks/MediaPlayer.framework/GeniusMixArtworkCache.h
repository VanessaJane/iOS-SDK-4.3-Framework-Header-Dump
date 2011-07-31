/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSData;

@interface GeniusMixArtworkCache : XXUnknownSuperclass {
@private
	NSData* _data;
	CGImageRef _artworkImage;
}
@property(readonly, assign, nonatomic) CGImageRef artworkImage;
@property(readonly, assign, nonatomic) CGSize coverSize;
@property(readonly, assign, nonatomic) unsigned coverCount;
+(id)artworkCacheWithCoverCount:(unsigned)coverCount coverSize:(CGSize)size artworkData:(void*)data length:(unsigned)length;
+(id)artworkCacheWithContentsOfFile:(id)file;
-(BOOL)writeToFile:(id)file;
-(void)_cleanUpCachesInBackground;
-(id)init;
-(void)dealloc;
@end
