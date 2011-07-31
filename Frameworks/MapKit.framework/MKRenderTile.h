/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MKRenderTile : XXUnknownSuperclass {
@private
	int _imageCopyrightYear;
	int _dataCopyrightYear;
	NSMutableArray* _dataCopyrights;
	NSMutableArray* _imageCopyrights;
	id _renderObject;
}
@property(assign) int imageCopyrightYear;
@property(assign) int dataCopyrightYear;
@property(retain, nonatomic) id renderObject;
@property(readonly, assign) NSArray* dataCopyrights;
@property(readonly, assign) NSArray* imageCopyrights;
+(void)initialize;
-(id)initWithRenderObject:(id)renderObject mapTileInfo:(id)info;
-(void)dealloc;
@end
