/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "ScreenReaderOutputServer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock;

@interface SCROClient : XXUnknownSuperclass {
	NSLock* _lock;
	unsigned _identifier;
	unsigned _port;
	CFArrayRef _queue;
	CFSetRef _callbackSet;
}
+(void)initialize;
+(id)addClientGetIdentifier:(unsigned*)identifier getPort:(unsigned*)port;
+(long)removeClientWithPort:(unsigned)port;
+(void)sendCallback:(id)callback;
+(id)callbacksForClientIdentifier:(unsigned)clientIdentifier;
+(void)registerCallbackWithKey:(int)key forClientIdentifier:(unsigned)clientIdentifier;
-(id)init;
-(void)dealloc;
-(void)_lock;
-(void)_unlock;
-(void)_invalidate;
-(void)_registerCallbackWithKey:(int)key;
-(id)_dequeueCallbacks;
-(BOOL)_wantsCallback:(id)callback;
-(void)_sendCallback:(id)callback;
@end

