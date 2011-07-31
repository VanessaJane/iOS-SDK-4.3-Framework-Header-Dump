/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;
@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OABReaderState : XXUnknownSuperclass {
@private
	Class mClient;
	NSMutableDictionary* mShapeIdMap;
	NSMutableDictionary* mEshContentIdMap;
	id<OADColorPalette> mColorPalette;
	NSMutableDictionary* mBlipIdMap;
}
-(id)init;
-(id)initWithClient:(Class)client;
-(void)dealloc;
-(Class)client;
-(id)drawableForShapeId:(int)shapeId;
-(void)setDrawable:(id)drawable forShapeId:(int)shapeId;
-(EshContent*)eshContentForId:(int)anId;
-(void)setEshContent:(EshContent*)content forId:(int)anId;
-(id)colorPalette;
-(void)setColorPalette:(id)palette;
-(id)drawableForBlipId:(int)blipId;
-(void)setDrawable:(id)drawable forBlipId:(int)blipId;
@end
