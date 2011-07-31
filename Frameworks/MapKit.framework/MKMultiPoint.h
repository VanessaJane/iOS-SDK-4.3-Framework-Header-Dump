/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "MKShape.h"


@interface MKMultiPoint : MKShape {
@private
	CADoublePoint* _points;
	unsigned _pointCount;
	XXStruct_Yvvv9D _boundingRect;
}
@property(readonly, assign, nonatomic) CADoublePoint* points;
@property(readonly, assign, nonatomic) unsigned pointCount;
-(void)dealloc;
-(XXStruct_Yvvv9D)boundingMapRect;
-(void)_calculateBounds;
-(void)_setCoordinates:(CADoublePoint*)coordinates count:(unsigned)count;
-(void)_setPoints:(CADoublePoint*)points count:(unsigned)count;
-(void)getCoordinates:(CADoublePoint*)coordinates range:(NSRange)range;
-(CADoublePoint)coordinate;
-(BOOL)intersectsMapRect:(XXStruct_Yvvv9D)rect;
@end
