/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface TileLayer : XXUnknownSuperclass {
@private
	TileCache* _tileCache;
}
-(id)initWithTileCache:(TileCache*)tileCache;
-(void)removeFromSuperlayer;
-(void)setNeedsDisplayInRect:(CGRect)rect;
-(void)display;
-(void)drawInContext:(CGContextRef)context;
-(id)actionForKey:(id)key;
@end

