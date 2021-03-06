/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShadowEffect.h"


__attribute__((visibility("hidden")))
@interface OADOuterShadowEffect : OADShadowEffect {
@private
	float mXScale;
	float mYScale;
	float mXSkew;
	float mYSkew;
	int mAlignment;
	BOOL mRotateWithShape;
}
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(float)xScale;
-(void)setXScale:(float)scale;
-(float)yScale;
-(void)setYScale:(float)scale;
-(float)xSkew;
-(void)setXSkew:(float)skew;
-(float)ySkew;
-(void)setYSkew:(float)skew;
-(int)alignment;
-(void)setAlignment:(int)alignment;
-(BOOL)rotateWithShape;
-(void)setRotateWithShape:(BOOL)shape;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end

