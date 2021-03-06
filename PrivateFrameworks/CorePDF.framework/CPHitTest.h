/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CPHitTest.h"
#import "CorePDF-Structs.h"

@class NSMutableArray, CPPage;

@interface CPHitTest : XXUnknownSuperclass {
	CPPage* page;
	NSMutableArray* objectsOnPage;
	float mapTemp;
}
-(id)initWithPage:(id)page;
-(void)dealloc;
-(id)page;
-(id)paragraph:(CGPoint)paragraph;
-(id)paragraphNear:(CGPoint)near;
-(id)layoutArea:(CGPoint)area;
-(unsigned)columnsAt:(CGPoint)at;
-(id)column:(CGPoint)column;
-(id)textLine:(CGPoint)line;
-(id)objectAtPoint:(CGPoint)point;
-(int)compareByReadingOrder:(CGPoint)order to:(CGPoint)to;
@end

@interface CPHitTest (Private)
-(void)findClickableObjects:(BOOL)objects;
-(BOOL)hitTestGraphicObject:(id)object point:(CGPoint)point;
-(BOOL)hitTestParagraph:(id)paragraph point:(CGPoint)point;
-(id)findBestMatch:(id)match atPoint:(CGPoint)point;
-(id)findObjectIn:(id)anIn at:(CGPoint)at count:(int*)count;
@end

