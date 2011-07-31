/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WebDocumentDOM.h"
#import "WebDocumentRepresentation.h"

@class WebHTMLRepresentationPrivate;

@interface WebHTMLRepresentation : XXUnknownSuperclass <WebDocumentRepresentation, WebDocumentDOM> {
@private
	WebHTMLRepresentationPrivate* _private;
}
+(id)supportedMIMETypes;
+(id)supportedNonImageMIMETypes;
+(id)supportedImageMIMETypes;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)_redirectDataToManualLoader:(id)manualLoader forPluginView:(id)pluginView;
-(void)setDataSource:(id)source;
-(BOOL)_isDisplayingWebArchive;
-(void)receivedData:(id)data withDataSource:(id)dataSource;
-(void)receivedError:(id)error withDataSource:(id)dataSource;
-(void)finishedLoadingWithDataSource:(id)dataSource;
-(BOOL)canProvideDocumentSource;
-(BOOL)canSaveAsWebArchive;
-(id)documentSource;
-(id)title;
-(id)DOMDocument;
-(id)elementWithName:(id)name inForm:(id)form;
-(BOOL)elementDoesAutoComplete:(id)complete;
-(BOOL)elementIsPassword:(id)password;
-(id)formForElement:(id)element;
-(id)currentForm;
-(id)controlsInForm:(id)form;
-(id)searchForLabels:(id)labels beforeElement:(id)element;
-(id)searchForLabels:(id)labels beforeElement:(id)element resultDistance:(unsigned*)distance resultIsInCellAbove:(BOOL*)cellAbove;
-(id)matchLabels:(id)labels againstElement:(id)element;
@end
