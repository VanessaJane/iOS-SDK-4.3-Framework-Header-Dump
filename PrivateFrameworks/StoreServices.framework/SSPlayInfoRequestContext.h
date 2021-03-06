/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, NSData;

@interface SSPlayInfoRequestContext : XXUnknownSuperclass <NSCopying> {
@private
	NSString* _playerGUID;
	NSData* _sic;
	NSArray* _sinfs;
}
@property(copy, nonatomic) NSString* playerGUID;
@property(copy, nonatomic) NSData* SICData;
@property(copy, nonatomic) NSArray* sinfs;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)copyPropertyListEncoding;
-(id)initWithPropertyListEncoding:(id)propertyListEncoding;
@end

