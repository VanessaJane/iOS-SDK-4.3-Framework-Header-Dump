/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "MKStreetViewGeometry.h"


__attribute__((visibility("hidden")))
@interface MKPanoramaSkyGeometry : MKStreetViewGeometry {
@private
	CGSize _imageSize;
	CGSize _tileSize;
	unsigned _numLevels;
	unsigned _numImageLevels;
	float _longitudeTiles;
	float _latitudeTiles;
}
-(id)initWithImageSize:(CGSize)imageSize tileSize:(CGSize)size;
-(void)drawWithTextures:(id)textures;
@end

