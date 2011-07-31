/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface AVQueueFeeder : XXUnknownSuperclass {
}
-(id)init;
-(unsigned)numberOfPaths;
-(unsigned)itemCount;
-(id)pathAtIndex:(unsigned)index;
-(id)playbackInfoAtIndex:(unsigned)index;
-(void)contentsDidChangeByInsertingRange:(NSRange)contents;
-(void)contentsDidChangeByRemovingRange:(NSRange)contents;
-(void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;
-(double)bookmarkTimeForIndex:(unsigned)index;
@end
