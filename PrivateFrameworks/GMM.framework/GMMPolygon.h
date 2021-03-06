/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSData;

__attribute__((visibility("hidden")))
@interface GMMPolygon : XXUnknownSuperclass {
@private
	int _lineWidth;
	BOOL _hasLineWidth;
	int _lineColor;
	BOOL _hasLineColor;
	NSData* _line;
	int _fillColor;
	BOOL _hasFillColor;
	NSMutableArray* _innerBoundarys;
}
@property(assign, nonatomic) int lineWidth;
@property(readonly, assign, nonatomic) BOOL hasLineWidth;
@property(assign, nonatomic) int lineColor;
@property(readonly, assign, nonatomic) BOOL hasLineColor;
@property(retain, nonatomic) NSData* line;
@property(assign, nonatomic) int fillColor;
@property(readonly, assign, nonatomic) BOOL hasFillColor;
@property(retain, nonatomic) NSMutableArray* innerBoundarys;
@property(readonly, assign, nonatomic) int innerBoundarysCount;
@property(readonly, assign, nonatomic) BOOL hasLine;
-(id)init;
-(void)dealloc;
-(void)setInnerBoundary:(id)boundary atIndex:(unsigned)index;
-(id)innerBoundaryAtIndex:(unsigned)index;
-(void)addInnerBoundary:(id)boundary;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

