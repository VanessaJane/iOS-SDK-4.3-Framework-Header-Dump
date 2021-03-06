/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WDTableProperties.h"
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableProperties : XXUnknownSuperclass <NSCopying> {
@private
	WDDocument* mDocument;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	XXStruct_hOXagA mOriginalProperties;
	XXStruct_hOXagA mTrackedProperties;
}
-(id)init;
-(id)initWithDocument:(id)document;
-(void)dealloc;
-(id)document;
-(int)resolveMode;
-(void)setResolveMode:(int)mode;
-(id)baseStyle;
-(void)setBaseStyle:(id)style;
-(BOOL)isBaseStyleOverridden;
-(id)shading;
-(id)mutableShading;
-(BOOL)isShadingOverridden;
-(void)clearShading;
-(id)topBorder;
-(id)mutableTopBorder;
-(BOOL)isTopBorderOverridden;
-(void)clearTopBorder;
-(id)leftBorder;
-(id)mutableLeftBorder;
-(BOOL)isLeftBorderOverridden;
-(void)clearLeftBorder;
-(id)bottomBorder;
-(id)mutableBottomBorder;
-(BOOL)isBottomBorderOverridden;
-(void)clearBottomBorder;
-(id)rightBorder;
-(id)mutableRightBorder;
-(BOOL)isRightBorderOverridden;
-(void)clearRightBorder;
-(id)insideHorizontalBorder;
-(id)mutableInsideHorizontalBorder;
-(BOOL)isInsideHorizontalBorderOverridden;
-(void)clearInsideHorizontalBorder;
-(id)insideVerticalBorder;
-(id)mutableInsideVerticalBorder;
-(BOOL)isInsideVerticalBorderOverridden;
-(void)clearInsideVerticalBorder;
-(int)justification;
-(void)setJustification:(int)justification;
-(BOOL)isJustificationOverridden;
-(int)alignment;
-(void)setAlignment:(int)alignment;
-(BOOL)isAlignmentOverridden;
-(long)width;
-(void)setWidth:(long)width;
-(BOOL)isWidthOverridden;
-(int)widthType;
-(void)setWidthType:(int)type;
-(BOOL)isWidthTypeOverridden;
-(short)indent;
-(void)setIndent:(short)indent;
-(BOOL)isIndentOverridden;
-(int)indentType;
-(void)setIndentType:(int)type;
-(BOOL)isIndentTypeOverridden;
-(short)cellSpacing;
-(void)setCellSpacing:(short)spacing;
-(BOOL)isCellSpacingOverridden;
-(int)cellSpacingType;
-(void)setCellSpacingType:(int)type;
-(BOOL)isCellSpacingTypeOverridden;
-(int)verticalAnchor;
-(void)setVerticalAnchor:(int)anchor;
-(BOOL)isVerticalAnchorOverridden;
-(int)horizontalAnchor;
-(void)setHorizontalAnchor:(int)anchor;
-(BOOL)isHorizontalAnchorOverridden;
-(long)verticalPosition;
-(void)setVerticalPosition:(long)position;
-(BOOL)isVerticalPositionOverridden;
-(long)horizontalPosition;
-(void)setHorizontalPosition:(long)position;
-(BOOL)isHorizontalPositionOverridden;
-(long)leftDistanceFromText;
-(void)setLeftDistanceFromText:(long)text;
-(BOOL)isLeftDistanceFromTextOverridden;
-(long)topDistanceFromText;
-(void)setTopDistanceFromText:(long)text;
-(BOOL)isTopDistanceFromTextOverridden;
-(long)rightDistanceFromText;
-(void)setRightDistanceFromText:(long)text;
-(BOOL)isRightDistanceFromTextOverridden;
-(long)bottomDistanceFromText;
-(void)setBottomDistanceFromText:(long)text;
-(BOOL)isBottomDistanceFromTextOverridden;
-(int)deleted;
-(void)setDeleted:(int)deleted;
-(BOOL)isDeletedOverridden;
-(int)edited;
-(void)setEdited:(int)edited;
-(BOOL)isEditedOverridden;
-(int)formattingChanged;
-(void)setFormattingChanged:(int)changed;
-(BOOL)isFormattingChangedOverridden;
-(unsigned short)indexToAuthorIDOfDeletion;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;
-(BOOL)isIndexToAuthorIDOfDeletionOverridden;
-(unsigned short)indexToAuthorIDOfEdit;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)edit;
-(BOOL)isIndexToAuthorIDOfEditOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(id)deletionDate;
-(void)setDeletionDate:(id)date;
-(BOOL)isDeletionDateOverridden;
-(id)editDate;
-(void)setEditDate:(id)date;
-(BOOL)isEditDateOverridden;
-(id)formattingChangeDate;
-(void)setFormattingChangeDate:(id)date;
-(BOOL)isFormattingChangeDateOverridden;
-(BOOL)isTableFloating;
-(id)copyWithZone:(NSZone*)zone;
@end

@interface WDTableProperties (ChangeTrackingHelp)
-(void)moveOrignalToTracked;
@end

