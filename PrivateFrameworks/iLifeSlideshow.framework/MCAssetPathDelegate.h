/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"


@protocol MCAssetPathDelegate
-(id)absolutePathForAssetPath:(id)assetPath;
-(id)absolutePathForAssetPath:(id)assetPath andSize:(CGSize)size;
-(CGImageRef)retainedCGImageForAssetPath:(id)assetPath andSize:(CGSize)size orientation:(char*)orientation;
-(IOSurfaceRef)retainedIOSurfaceForAssetPath:(id)assetPath andSize:(CGSize)size orientation:(char*)orientation;
@end

