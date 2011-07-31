/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface GKComposeRecipient : XXUnknownSuperclass {
	void* _record;
	int _recordID;
	int _property;
	int _identifier;
	NSString* _address;
	NSString* _label;
}
+(id)recipientWithRecord:(void*)record recordID:(int)anId property:(int)property identifier:(int)identifier;
+(id)recipientWithRecord:(void*)record property:(int)property identifier:(int)identifier;
+(id)recipientWithProperty:(int)property address:(id)address;
-(id)description;
-(id)initWithRecord:(void*)record recordID:(int)anId property:(int)property identifier:(int)identifier address:(id)address;
-(BOOL)isEmail;
-(BOOL)isPhone;
-(int)property;
-(void*)record;
-(int)recordID;
-(void)setRecord:(void*)record recordID:(int)anId identifier:(int)identifier;
-(id)address;
-(id)commentedAddress;
-(id)label;
-(id)unlocalizedLabel;
-(int)identifier;
-(void)setIdentifier:(int)identifier;
-(id)copyWithZone:(NSZone*)zone;
-(id)compositeName;
-(id)displayString;
-(id)uncommentedAddress;
-(id)_unformattedAddress;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(void)dealloc;
@end
