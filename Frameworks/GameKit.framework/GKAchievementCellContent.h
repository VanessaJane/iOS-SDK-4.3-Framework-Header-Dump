/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKMultilineCellContentView.h"
#import "GameKit-Structs.h"

@class NSNumber, GKUITheme;

@interface GKAchievementCellContent : GKMultilineCellContentView {
	NSNumber* _cellRow;
	GKUITheme* _theme;
	BOOL _highlighted;
	BOOL _offsetImage;
}
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
@property(retain, nonatomic) GKUITheme* theme;
@property(retain, nonatomic) NSNumber* cellRow;
@property(assign, nonatomic) BOOL offsetImage;
+(id)placeholderImage;
-(id)init;
-(void)dealloc;
-(void)drawLineIndex:(unsigned)index inRect:(CGRect*)rect highlighted:(BOOL)highlighted;
@end
