/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADEffect.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGlowEffect : OADEffect {
@private
	OADColor* mColor;
	float mRadius;
}
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)color;
-(void)setColor:(id)color;
-(float)radius;
-(void)setRadius:(float)radius;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end
