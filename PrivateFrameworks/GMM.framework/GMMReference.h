/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GMMReference.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMReference : XXUnknownSuperclass {
@private
	NSString* _url;
	NSString* _title;
	NSString* _domain;
}
@property(retain, nonatomic) NSString* url;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* domain;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

@interface GMMReference (Descriptions)
-(id)description;
@end

