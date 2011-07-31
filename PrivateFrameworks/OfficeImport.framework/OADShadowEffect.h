/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADShadowEffect : OADEffect {
@private
	OADColor* mColor;
	float mBlurRadius;
	float mDistance;
	float mAngle;
}
-(id)initWithType:(int)type;
-(id)initWithShadowEffect:(id)shadowEffect type:(int)type;
-(void)dealloc;
-(id)color;
-(void)setColor:(id)color;
-(float)blurRadius;
-(void)setBlurRadius:(float)radius;
-(float)distance;
-(void)setDistance:(float)distance;
-(float)angle;
-(void)setAngle:(float)angle;
-(void)setStyleColor:(id)color;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end
