/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSString;

@interface ABPhonePredicate : ABPredicate {
@private
	NSString* _phoneNumber;
	NSString* _country;
}
@property(copy, nonatomic) NSString* phoneNumber;
@property(copy, nonatomic) NSString* country;
-(BOOL)isValid;
-(id)predicateFormat;
-(id)queryJoinsInCompound:(BOOL)compound;
-(id)queryWhereString;
-(BOOL)hasCallback;
-(void)ab_bindStatement:(CPSqliteStatement*)statement withBindingOffset:(int*)bindingOffset predicateIdentifier:(int)identifier;
-(void)evaluateCallbackWithSqliteContext:(sqlite3_context*)sqliteContext predicateContext:(void*)context values:(Mem**)values count:(int)count;
@end

