/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;

@interface SCROEvent : XXUnknownSuperclass {
	int _handlerType;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _setDictionary;
	NSMutableDictionary* _getDictionary;
	NSMutableArray* _actions;
	BOOL _readOnly;
}
+(id)brailleEvent;
-(id)initForHandlerType:(int)handlerType;
-(void)dealloc;
-(int)handlerType;
-(void)requestRegisterCallbackForKey:(int)key;
-(void)requestSetValue:(id)value forKey:(int)key;
-(void)requestValueForKey:(int)key;
-(void)requestPerformActionForKey:(int)key;
-(id)claimValueForKey:(int)key;
-(void)setMainDictionary:(id)dictionary;
-(id)mainDictionary;
-(void)setClaimDictionary:(id)dictionary;
-(id)claimDictionary;
-(void)performWithHandler:(id)handler trusted:(BOOL)trusted;
@end
