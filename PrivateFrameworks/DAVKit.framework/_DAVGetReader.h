/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DAVResponseBodyReader.h"

@class NSMutableData;

@interface _DAVGetReader : XXUnknownSuperclass <DAVResponseBodyReader> {
	NSMutableData* _data;
}
-(id)init;
-(void)dealloc;
-(BOOL)request:(id)request acceptResponseWithHTTPStatusCode:(int)httpstatusCode;
-(void)request:(id)request readResponseBody:(id)body;
-(id)data;
@end
