/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@protocol MPMediaPlayback
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;
@property(assign, nonatomic) double currentPlaybackTime;
@property(assign, nonatomic) float currentPlaybackRate;
-(void)prepareToPlay;
-(void)play;
-(void)pause;
-(void)stop;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
@end

