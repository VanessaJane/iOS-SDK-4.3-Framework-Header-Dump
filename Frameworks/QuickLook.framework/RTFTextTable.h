/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "RTFTextBlock.h"


__attribute__((visibility("hidden")))
@interface RTFTextTable : RTFTextBlock {
@private
	unsigned _numCols;
	unsigned _tableFlags;
	id _lcache;
	void* _tablePrimary;
	void* _tableSecondary;
}
-(id)init;
-(void)dealloc;
-(void)_takeValuesFromTextBlock:(id)textBlock;
-(void)setNumberOfColumns:(unsigned)columns;
-(unsigned)numberOfColumns;
-(BOOL)collapsesBorders;
-(void)setCollapsesBorders:(BOOL)borders;
-(BOOL)hidesEmptyCells;
-(void)setHidesEmptyCells:(BOOL)cells;
-(unsigned)layoutAlgorithm;
-(void)setLayoutAlgorithm:(unsigned)algorithm;
-(unsigned)_tableFlags;
-(void)_setTableFlags:(unsigned)flags;
@end

