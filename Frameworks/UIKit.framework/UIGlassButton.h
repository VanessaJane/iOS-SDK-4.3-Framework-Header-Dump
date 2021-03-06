/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIGlassButton : UIButton {
@private
	UIColor* _tintColor;
}
@property(retain, nonatomic) UIColor* tintColor;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)fits;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
-(void)setTitleColor:(id)color forStates:(unsigned)states;
-(id)titleColorForState:(unsigned)state;
-(void)setTitleShadowColor:(id)color forStates:(unsigned)states;
-(id)titleShadowColorForState:(unsigned)state;
-(void)setBackgroundImage:(id)image forStates:(unsigned)states;
-(id)backgroundImageForState:(unsigned)state;
@end

