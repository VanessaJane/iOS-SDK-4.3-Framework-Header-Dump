/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"


@interface CPTextBox : CPRegion {
	float rotationAngle;
}
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isBoxRegion;
-(void)accept:(id)accept;
-(void)setRotationAngle:(float)angle;
-(float)rotationAngle;
-(BOOL)isRotated;
-(CGRect)bounds;
-(id)description;
@end

