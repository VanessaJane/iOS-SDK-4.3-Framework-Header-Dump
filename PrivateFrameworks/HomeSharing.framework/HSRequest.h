/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSString, NSData, NSDictionary;

@interface HSRequest : XXUnknownSuperclass {
@private
	NSString* _action;
	NSData* _bodyData;
	NSDictionary* _headers;
	NSDictionary* _arguments;
	CFHTTPMessageRef _message;
	int _method;
}
@property(readonly, assign, nonatomic) NSString* action;
@property(copy, nonatomic) NSData* bodyData;
@property(assign, nonatomic) int method;
+(id)request;
-(id)initWithAction:(id)action;
-(void)dealloc;
-(void)setValue:(id)value forHeaderField:(id)headerField;
-(void)setValue:(id)value forArgument:(id)argument;
-(id)requestURLForBaseURL:(id)baseURL sessionID:(unsigned)anId;
-(CFHTTPMessageRef)CFHTTPMessageForBaseURL:(id)baseURL sessionID:(unsigned)anId;
-(id)canonicalResponseForResponse:(id)response;
-(BOOL)acceptsGzipEncoding;
-(id)_defaultHeaderFields;
-(id)_methodStringForMethod:(int)method;
@end

@interface HSRequest (HSConnectionAdditions)
-(id)requestURLForConnection:(id)connection;
@end

