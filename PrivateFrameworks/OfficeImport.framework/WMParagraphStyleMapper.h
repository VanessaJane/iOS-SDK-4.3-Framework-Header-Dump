/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "WMParagraphStyleMapper.h"

@class WDParagraph, WDParagraphProperties, WMParagraphStyle;

__attribute__((visibility("hidden")))
@interface WMParagraphStyleMapper : CMMapper {
@private
	WDParagraphProperties* wdParaProperties;
	WDParagraph* wdParagraph;
	WMParagraphStyle* mStyle;
}
-(id)initWithWDParagraph:(id)wdparagraph parent:(id)parent isInTextFrame:(BOOL)textFrame;
-(void)dealloc;
-(BOOL)isListItem;
-(void)destyleEmptyParagraph;
-(void)mapListStyleAt:(id)at state:(id)state;
-(void)mapAt:(id)at withState:(id)state;
@end

@interface WMParagraphStyleMapper (Private)
-(bool)checkListId:(int)anId level:(int)level;
-(id)labelStringWithGap:(id)gap;
-(id)bulletLabelAtLevel:(id)level forIndex:(int)index bulletFormat:(int)format listState:(id)state;
-(void)mapBulletAt:(id)at forLevel:(id)level forIndex:(int)index listState:(id)state isOutline:(BOOL)outline;
@end

