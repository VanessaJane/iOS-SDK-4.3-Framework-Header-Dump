/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPaginationInfo : XXUnknownSuperclass {
@private
	float _scaleFactor;
	CGSize _layoutSize;
	NSArray* _pageRects;
	UIWebDocumentView* _webDocumentView;
}
@property(retain, nonatomic) UIWebDocumentView* webDocumentView;
@property(readonly, assign, nonatomic) float lastPageHeight;
@property(readonly, assign, nonatomic) unsigned pageCount;
-(id)initWithScaleFactor:(float)scaleFactor layoutSize:(CGSize)size pageRects:(id)rects;
-(void)dealloc;
-(CGSize)sizeForPageAtIndex:(int)index;
-(float)scaleFactor;
-(CGSize)layoutSize;
-(id)pageRects;
@end

