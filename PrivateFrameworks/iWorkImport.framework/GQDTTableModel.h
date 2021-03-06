/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTTableModel.h"
#import "GQDNameMappable.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDTTableModel : XXUnknownSuperclass <GQDNameMappable> {
@private
	unsigned short mColumnCount;
	unsigned short mRowCount;
	CFStringRef mName;
	BOOL mNameVisible;
	CFArrayRef mColumnWidths;
	CFArrayRef mRowHeights;
	CFArrayRef mColumnVisibilities;
	CFArrayRef mRowVisibilities;
	unsigned short mHeaderRowCount;
	unsigned short mHeaderColumnCount;
	unsigned short mFooterRowCount;
	CFArrayRef mCells;
	CFArrayRef mColumnGroupDisplayTypes;
	int mNumGroupLevels;
}
+(const StateSpec*)stateForReading;
-(void)dealloc;
-(unsigned short)columnCount;
-(unsigned short)rowCount;
-(CFStringRef)name;
-(BOOL)isNameVisible;
-(float)widthForColumn:(unsigned short)column;
-(float)heightForRow:(unsigned short)row;
-(bool)visibilityForColumn:(unsigned short)column;
-(bool)visibilityForRow:(unsigned short)row;
-(id)cellAt:(unsigned short)at;
-(CFArrayRef)cells;
-(unsigned short)headerRowCount;
-(unsigned short)headerColumnCount;
-(unsigned short)footerRowCount;
-(int)typeOfVectorAlongGridline:(unsigned short)vectorAlongGridline offset:(unsigned short)offset length:(unsigned short)length vertical:(BOOL)vertical;
-(BOOL)hasGroupDisplayType:(unsigned short)type level:(int)level displayType:(int*)type3 isTypeVisible:(BOOL*)visible;
-(unsigned short)firstVisibleColumn;
-(int)numGroupLevels;
-(void)setNumGroupLevels:(int)levels;
@end

@interface GQDTTableModel (Private)
-(int)readAttributesForModel:(xmlTextReader*)model;
-(int)readAttributesForGrid:(xmlTextReader*)grid;
-(int)addColumnWidthFrom:(xmlTextReader*)from;
-(int)addRowHeightFrom:(xmlTextReader*)from;
-(int)addGroupLevelsFrom:(xmlTextReader*)from;
-(void)setCells:(CFArrayRef)cells;
@end

