/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PMTop.h"
#import "OIProgressiveReaderDelegate.h"

@class CMArchiveManager, PMPresentationMapper, PMState;

__attribute__((visibility("hidden")))
@interface PMTop : XXUnknownSuperclass <OIProgressiveReaderDelegate> {
@private
	CMArchiveManager* _archiver;
	PMState* _state;
	PMPresentationMapper* _mapper;
	BOOL _xml;
}
+(void)fillHTMLArchiveForPowerPointFile:(id)powerPointFile xmlFlag:(BOOL)flag archiver:(id)archiver;
+(void)fillHTMLArchiveForPowerPointData:(id)powerPointData fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;
-(void)readData:(id)data fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;
-(void)readFile:(id)file xmlFlag:(BOOL)flag archiver:(id)archiver;
@end

@interface PMTop (Private)
+(void)fillHTMLArchiveForPowerPointFrom:(id)from inMemory:(BOOL)memory xmlFlag:(BOOL)flag archiver:(id)archiver;
-(void)readFrom:(id)from inMemory:(BOOL)memory xmlFlag:(BOOL)flag archiver:(id)archiver;
-(void)dealloc;
-(void)readerDidStartDocument:(id)reader withElementCount:(int)elementCount;
-(void)readerDidReadElement:(id)reader atIndex:(unsigned)index inDocument:(id)document isLastElement:(BOOL)element;
-(void)readerDidEndDocument:(id)reader;
-(BOOL)isCancelled;
@end
