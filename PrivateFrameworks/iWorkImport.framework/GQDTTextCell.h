/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDTCell.h"
#import "iWorkImport-Structs.h"
#import "GQDTTextCell.h"

@class GQDWPLayoutStorage;

__attribute__((visibility("hidden")))
@interface GQDTTextCell : GQDTCell {
@private
	CFStringRef mStringValue;
	GQDWPLayoutStorage* mLayoutStorage;
}
-(void)dealloc;
-(CFStringRef)stringValue;
-(id)layoutStorage;
@end

@interface GQDTTextCell (Private)
-(int)readContentForTextCell:(xmlTextReader*)textCell;
-(int)readContentForTCell:(xmlTextReader*)tcell;
@end

