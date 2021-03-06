/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFComposeHeaderView.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MessageUI-Structs.h"

@class NSString, MFHeaderLabelView, UIView;

@interface MFComposeHeaderView : XXUnknownSuperclass {
	NSString* _label;
	NSString* _navTitle;
	MFHeaderLabelView* _labelView;
	id _delegate;
	UIView* _separator;
}
+(float)defaultHeight;
-(CGColorRef)labelColor;
-(id)initWithFrame:(CGRect)frame;
-(void)setNavTitle:(id)title;
-(id)navTitle;
-(void)setLabel:(id)label;
-(void)setLabelHighlighted:(BOOL)highlighted;
-(float)maxLabelX;
-(BOOL)_canBecomeFirstResponder;
-(void)handleTouchesEnded;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)mouseUp:(GSEventRef)up;
-(void)setDelegate:(id)delegate;
-(void)setFrame:(CGRect)frame;
-(void)layoutSubviews;
-(void)dealloc;
@end

@interface MFComposeHeaderView (SyntheticEvents)
-(id)_automationID;
@end

