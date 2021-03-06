/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WDTable, WDTableRowProperties, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDTableRow : XXUnknownSuperclass {
@private
	int mIndex;
	WDTable* mTable;
	WDTableRowProperties* mProperties;
	NSMutableArray* mCells;
}
-(id)initWithTable:(id)table at:(int)at;
-(void)dealloc;
-(int)index;
-(id)table;
-(id)properties;
-(int)cellCount;
-(id)cellAt:(int)at;
-(id)addCell;
-(id)addCellWithIndex:(int)index;
-(id)cellIterator;
-(id)newCellIterator;
@end

