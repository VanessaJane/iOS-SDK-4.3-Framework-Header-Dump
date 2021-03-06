/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@protocol DOMEventTarget;

__attribute__((visibility("hidden")))
@interface DOMGestureEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL metaKey;
@property(readonly, assign) BOOL altKey;
@property(readonly, assign) BOOL shiftKey;
@property(readonly, assign) BOOL ctrlKey;
@property(readonly, assign) float rotation;
@property(readonly, assign) float scale;
@property(readonly, retain) id<DOMEventTarget> target;
-(void)initGestureEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail screenX:(int)x screenY:(int)y clientX:(int)x8 clientY:(int)y9 ctrlKey:(BOOL)key altKey:(BOOL)key11 shiftKey:(BOOL)key12 metaKey:(BOOL)key13 target:(id)target scale:(float)scale rotation:(float)rotation;
@end

