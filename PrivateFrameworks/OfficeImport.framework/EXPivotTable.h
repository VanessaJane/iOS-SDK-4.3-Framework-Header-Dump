/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "EXPivotTable.h"


__attribute__((visibility("hidden")))
@interface EXPivotTable : XXUnknownSuperclass {
}
+(id)edPivotTableFromXmlPivotTableElement:(xmlNode*)xmlPivotTableElement state:(id)state;
@end

@interface EXPivotTable (Private)
+(void)readStyleInfoFrom:(xmlNode*)from toPivotTable:(id)pivotTable;
+(void)readLocationFrom:(xmlNode*)from toPivotTable:(id)pivotTable;
+(void)readFieldsFrom:(xmlNode*)from toCollection:(id)collection;
+(void)readItemsFrom:(xmlNode*)from toCollection:(id)collection;
+(void)readPivotFieldsFrom:(xmlNode*)from toCollection:(id)collection;
+(void)readFieldItemsFrom:(xmlNode*)from toCollection:(id)collection;
+(void)readDataFieldsFrom:(xmlNode*)from toCollection:(id)collection;
+(void)readConditionalFormatsFrom:(xmlNode*)from toCollection:(id)collection;
+(void)readPivotAreasFrom:(xmlNode*)from toCollection:(id)collection;
+(void)readPivotAreaReferencesFrom:(xmlNode*)from toCollection:(id)collection;
+(void)readPageFieldsFrom:(xmlNode*)from toCollection:(id)collection;
+(int)edPivotItemTypeFrom:(id)from;
+(int)edPivotFieldAxisFrom:(id)from;
+(int)edPivotDatFieldFormatFrom:(id)from;
+(int)edPivotConditionalFormatTypeFrom:(id)from;
+(int)edPivotConditionalFormatScopeFrom:(id)from;
+(int)edPivotAreaTypeFrom:(id)from;
@end

