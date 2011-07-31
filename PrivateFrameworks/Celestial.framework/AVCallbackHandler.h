/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSCondition;

@interface AVCallbackHandler : XXUnknownSuperclass {
	id _target;
	SEL _action;
	SEL _mainThreadAction;
	NSCondition* _condition;
	id _params;
}
@property(assign) id target;
@property(assign) SEL action;
@property(assign) SEL mainThreadAction;
-(id)init;
-(void)dealloc;
-(void)setCallbackParams:(id)params;
-(id)waitForCallbackParams;
-(BOOL)hasParams;
@end
