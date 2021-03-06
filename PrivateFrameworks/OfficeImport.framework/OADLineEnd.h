/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADProperties.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADLineEnd : OADProperties <NSCopying> {
@private
	unsigned char mType;
	unsigned char mWidth;
	unsigned char mLength;
	unsigned mIsTypeOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsLengthOverridden : 1;
}
+(id)defaultProperties;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithDefaults;
-(id)initWithType:(int)type width:(int)width length:(int)length;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(int)type;
-(void)setType:(int)type;
-(BOOL)isTypeOverridden;
-(int)width;
-(void)setWidth:(int)width;
-(BOOL)isWidthOverridden;
-(int)length;
-(void)setLength:(int)length;
-(BOOL)isLengthOverridden;
@end

