/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WebPDFDocumentView.h"
#import "WebPDFDocumentRepresentation.h"


@interface WebPDFView : XXUnknownSuperclass <WebPDFDocumentView, WebPDFDocumentRepresentation> {
@private
	BOOL dataSourceHasBeenSet;
	CGPDFDocumentRef _PDFDocument;
	CGRect* _pageRects;
}
+(id)supportedMIMETypes;
+(CGColorRef)shadowColor;
+(CGColorRef)backgroundColor;
-(void)dealloc;
-(void)drawPage:(CGPDFPageRef)page;
-(id)_pagesInRect:(CGRect)rect;
-(void)drawRect:(CGRect)rect;
-(void)setDataSource:(id)source;
-(void)dataSourceUpdated:(id)updated;
-(void)setNeedsLayout:(BOOL)layout;
-(void)layout;
-(void)viewWillMoveToHostWindow:(id)view;
-(void)viewDidMoveToHostWindow;
-(void)receivedData:(id)data withDataSource:(id)dataSource;
-(void)receivedError:(id)error withDataSource:(id)dataSource;
-(void)_computePageRects;
-(void)_checkPDFTitle;
-(void)finishedLoadingWithDataSource:(id)dataSource;
-(BOOL)canProvideDocumentSource;
-(id)documentSource;
-(id)title;
-(unsigned)pageNumberForRect:(CGRect)rect;
-(unsigned)totalPages;
-(CGPDFDocumentRef)doc;
-(CGRect)rectForPageNumber:(unsigned)pageNumber;
@end

