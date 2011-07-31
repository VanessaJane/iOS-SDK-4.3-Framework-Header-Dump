/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFPen.h"


__attribute__((visibility("hidden")))
@interface MFCocoaPen : MFPen {
@private
	float m_PixelSize;
}
+(id)penWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double*)array LPToDPTransform:(id)dptransform;
-(id)initWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double*)array;
-(void)applyDashedLinesToPath:(id)path;
-(void)applyLineJoinStyleToPath:(id)path :(id)arg2;
-(void)applyLineCapStyleToPath:(id)path;
-(void)strokePath:(id)path :(id)arg2;
@end
