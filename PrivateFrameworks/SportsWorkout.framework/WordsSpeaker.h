/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class Decomposer, Player;

@interface WordsSpeaker : XXUnknownSuperclass {
	Decomposer* _matcher;
	Player* _player;
}
@property(readonly, assign, nonatomic) BOOL isPlaying;
-(id)initWithGender:(id)gender language:(id)language;
-(BOOL)playSoundsForWords:(id)words;
-(void)stopAllSounds;
@end

