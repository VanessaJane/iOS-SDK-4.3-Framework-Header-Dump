/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "ScreenReaderOutputServer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SCROServerDelegate;

@interface SCROServer : XXUnknownSuperclass {
	id<SCROServerDelegate> _delegate;
	CFRunLoopSourceRef _serverSource;
	CFRunLoopSourceRef _deathSource;
	CFRunLoopTimerRef _deathTimer;
	unsigned _serverPort;
	unsigned _deathPort;
	int _clientCount;
	BOOL _isRegisteredWithMach;
}
+(id)sharedServer;
+(void)initialize;
+(id)allocWithZone:(NSZone*)zone;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(id)retain;
-(unsigned)retainCount;
-(void)release;
-(id)autorelease;
-(long)_clientCount;
-(void)_setClientCount:(long)count;
-(CFRunLoopTimerRef)_deathTimer;
-(unsigned)_deathPort;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(BOOL)isRegisteredWithMach;
-(BOOL)registerWithMach;
-(void)unregisterWithMach;
-(CFRunLoopSourceRef)serverSource;
@end

