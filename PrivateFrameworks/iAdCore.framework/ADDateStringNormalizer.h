/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSRegularExpression;

@interface ADDateStringNormalizer : XXUnknownSuperclass {
	NSRegularExpression* _regularExpression;
}
@property(retain, nonatomic) NSRegularExpression* regularExpression;
+(id)formatter;
+(id)normalizers;
+(id)dateFromString:(id)string;
-(void)dealloc;
-(id)normalize:(id)normalize;
@end
