/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDFillColorList.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface ODDFillColorList : XXUnknownSuperclass {
@private
	NSArray* mColors;
	int mHueDirection;
	int mMethod;
}
-(void)dealloc;
-(id)colorAtIndex:(unsigned)index count:(unsigned)count state:(id)state;
-(void)setColors:(id)colors;
-(void)setHueDirection:(int)direction;
-(void)setMethod:(int)method;
@end

@interface ODDFillColorList (Private)
-(id)cycleColorAtIndex:(unsigned)index;
-(id)repeatColorAtIndex:(unsigned)index;
-(id)spanColorAtIndex:(unsigned)index count:(unsigned)count state:(id)state;
-(void)getComponentsForIndex:(unsigned)index hue:(float*)hue saturation:(float*)saturation brightness:(float*)brightness state:(id)state;
@end
