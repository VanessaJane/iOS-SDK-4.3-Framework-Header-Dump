/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSSet, NSString;

@interface ADLocalAd : XXUnknownSuperclass {
	NSString* _path;
	NSString* _name;
	NSDictionary* _creatives;
	NSString* _selectedCreativeName;
	NSDictionary* _properties;
	NSSet* _sizes;
}
@property(retain, nonatomic) NSString* path;
@property(retain, nonatomic) NSString* name;
@property(readonly, retain, nonatomic) NSDictionary* creatives;
@property(copy, nonatomic) NSString* selectedCreativeName;
@property(retain, nonatomic) NSDictionary* properties;
@property(readonly, copy, nonatomic) NSSet* sizes;
+(id)localAdWithURL:(id)url;
-(void)dealloc;
-(id)initWithPath:(id)path error:(id*)error;
@end
