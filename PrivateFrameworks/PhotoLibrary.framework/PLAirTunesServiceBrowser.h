/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSNetServiceBrowserDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class NSMutableSet, NSSet;

@interface PLAirTunesServiceBrowser : XXUnknownSuperclass <NSNetServiceBrowserDelegate> {
	DNSServiceRef_tRef _dnsService;
	NSMutableSet* _discoveredAirTunesServices;
	NSMutableSet* _availableAirTunesServices;
	BOOL _searchForAirTunesServers;
}
@property(assign, nonatomic) BOOL searchForAirTunesServers;
@property(readonly, assign, nonatomic) NSSet* availableAirTunesServices;
-(id)init;
-(void)dealloc;
-(void)_didFindService:(id)service moreComing:(BOOL)coming;
-(void)_didRemoveService:(id)service moreComing:(BOOL)coming;
-(void)_netServiceResolutionDidChange:(id)_netServiceResolution;
-(void)_invalidate;
-(void)_refresh;
@end

