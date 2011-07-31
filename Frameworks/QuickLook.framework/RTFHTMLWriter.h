/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, RTF_OIXMLElement, RTF_CMArchiveManager;

__attribute__((visibility("hidden")))
@interface RTFHTMLWriter : XXUnknownSuperclass {
@private
	RTF_CMArchiveManager* _archiver;
	int _state;
	NSMutableArray* _textBuffer;
	NSMutableArray* _tableStack;
	NSMutableArray* _rowStack;
	RTF_OIXMLElement* _currentTableParagraph;
	RTF_OIXMLElement* _currentTable;
	RTF_OIXMLElement* _currentRow;
	BOOL _inited;
}
-(id)initWithArchiver:(id)archiver;
-(void)dealloc;
-(id)_fontNameByAppendingSerif:(id)serif;
-(id)_textBumpFromState:(id)state;
-(id)_textStyleStringFromState:(id)state;
-(id)_paragraphStyleStringFromState:(id)state;
-(id)_tableStyleStringFromCell:(id)cell;
-(id)_cellStyleStringFromCell:(id)cell;
-(void)_flushParagraph:(id)paragraph;
-(void)startDocumentWithState:(id)state;
-(void)finishDocumentWithState:(id)state;
-(void)readerDidEndParagraph:(id)reader;
-(void)reader:(id)reader didParseString:(id)string;
-(void)readerDidStartTable:(id)reader;
-(void)readerDidEndTable:(id)reader;
-(void)readerDidStartTableRow:(id)reader;
-(void)readerDidEndTableRow:(id)reader;
-(void)reader:(id)reader didEndTableCell:(id)cell;
-(void)insertAttachmentNamed:(id)named withData:(id)data;
@end
