/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EBState.h"

@class ECColumnWidthConvertor, OABReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderState : EBState {
@private
	XlBinaryReader* mXlReader;
	XlSheetInfoTable* mXlSheetInfoTable;
	ECColumnWidthConvertor* mColumnWidthConvertor;
	unsigned mTotalCellsWithContentCount;
	XlEshObjectFactory* mXlEshObjectFactory;
	OABReaderState* mOAState;
}
-(id)initWithXlReader:(XlBinaryReader*)xlReader cancelDelegate:(id)delegate tracing:(id)tracing;
-(void)dealloc;
-(void)pauseReading;
-(void)resumeReading;
-(XlBinaryReader*)xlReader;
-(void)readGlobalXlObjects;
-(XlSheetInfoTable*)xlSheetInfoTable;
-(id)columnWidthConvertor;
-(unsigned)cellsWithContentCount;
-(void)incrementCellsWithContentCount;
-(id)oaState;
-(void)reportWarning:(CPTaggedMessageStructure*)warning;
@end
