/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSError, NSSet, NSString, NSData;

@interface CoreDAVDiscoveryAccountInfo : XXUnknownSuperclass <CoreDAVAccountInfoProvider> {
	NSString* _scheme;
	NSString* _host;
	NSString* _serverRoot;
	int _port;
	NSString* _user;
	NSString* _password;
	NSData* _identityPersist;
	NSURL* _principalURL;
	NSString* _accountID;
	NSSet* _serverComplianceClasses;
	NSString* _userAgentHeader;
	BOOL _shouldFailAllTasks;
	BOOL _started;
	NSError* _error;
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;
}
@property(retain) NSString* scheme;
@property(retain) NSString* host;
@property(assign) int port;
@property(retain) NSString* serverRoot;
@property(retain) NSString* user;
@property(retain) NSString* password;
@property(retain) NSData* identityPersist;
@property(retain) NSURL* principalURL;
@property(retain) NSString* accountID;
@property(assign) BOOL shouldFailAllTasks;
@property(retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;
@property(assign) BOOL started;
@property(retain) NSError* error;
@property(retain) NSSet* serverComplianceClasses;
@property(retain) NSString* userAgentHeader;
-(id)initWithAccountInfoProvider:(id)accountInfoProvider;
-(void)dealloc;
-(id)description;
-(id)url;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;
-(id)mmeToken;
-(BOOL)handleTrustChallenge:(id)challenge;
-(BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;
-(BOOL)handleCertificateError:(id)error;
-(BOOL)shouldTurnModalOnBadPassword;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;
-(BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;
-(BOOL)handleShouldUseCredentialStorage;
@end

