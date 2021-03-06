/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UIGestureRecognizerDelegate.h"
#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIPinchGestureRecognizer, MPActivityGestureRecognizer, MPTapGestureRecognizer, MPSwipeGestureRecognizer;
@protocol MPSwipableViewDelegate;

@interface MPSwipableView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	int _enabledGestureTypes;
	int _simultaneousGestureTypes;
	id<MPSwipableViewDelegate> _swipeDelegate;
	MPTapGestureRecognizer* _tapGestureRecognizer;
	MPSwipeGestureRecognizer* _swipeGestureRecognizer;
	MPActivityGestureRecognizer* _activityGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
}
@property(assign, nonatomic) id<MPSwipableViewDelegate> swipeDelegate;
@property(assign, nonatomic) int enabledGestureTypes;
@property(assign, nonatomic) int simultaneousGestureTypes;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)addGestureRecognizer:(id)recognizer;
-(void)removeGestureRecognizer:(id)recognizer;
-(void)_swipeGestureRecognized:(id)recognized;
-(void)_tapGestureRecognized:(id)recognized;
-(void)_activityGestureRecognized:(id)recognized;
-(void)_pinchGestureRecognized:(id)recognized;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)_updateGestureRecognizersForEnabledTypes;
@end

