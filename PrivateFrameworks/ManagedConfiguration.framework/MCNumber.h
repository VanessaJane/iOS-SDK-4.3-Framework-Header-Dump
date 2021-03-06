/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber;

@interface MCNumber : XXUnknownSuperclass <NSCoding> {
@private
	NSNumber* _number;
}
+(id)numberWithUnsignedInt:(unsigned)unsignedInt;
+(id)numberWithInt:(int)int;
-(id)initWithUnsignedInt:(unsigned)unsignedInt;
-(id)initWithInt:(int)int;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)descriptionWithLocale:(id)locale;
@end

