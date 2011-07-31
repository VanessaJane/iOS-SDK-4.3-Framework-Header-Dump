/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UILabel.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, UIFont, NSString;

@interface UILabel : UIView <NSCoding> {
@private
	CGSize _size;
	NSString* _text;
	UIColor* _color;
	UIColor* _highlightedColor;
	UIColor* _shadowColor;
	UIFont* _font;
	CGSize _shadowOffset;
	float _minFontSize;
	float _actualFontSize;
	int _numberOfLines;
	float _lastLineBaseline;
	int _lineSpacing;
	struct {
		unsigned lineBreakMode : 3;
		unsigned highlighted : 1;
		unsigned autosizeTextToFit : 1;
		unsigned autotrackTextToFit : 1;
		unsigned baselineAdjustment : 2;
		unsigned alignment : 2;
		unsigned enabled : 1;
		unsigned wordRoundingEnabled : 1;
		unsigned explicitAlignment : 1;
	} _textLabelFlags;
}
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(assign, nonatomic) BOOL autotrackTextToFit;
@property(assign, nonatomic) int lineSpacing;
@property(readonly, assign, nonatomic) float _lastLineBaseline;
@property(assign, nonatomic) int baselineAdjustment;
@property(assign, nonatomic) float minimumFontSize;
@property(assign, nonatomic) BOOL adjustsFontSizeToFitWidth;
@property(assign, nonatomic) int numberOfLines;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
@property(retain, nonatomic) UIColor* highlightedTextColor;
@property(assign, nonatomic) int lineBreakMode;
@property(assign, nonatomic) int textAlignment;
@property(assign, nonatomic) CGSize shadowOffset;
@property(retain, nonatomic) UIColor* shadowColor;
@property(retain, nonatomic) UIColor* textColor;
@property(retain, nonatomic) UIFont* font;
@property(copy, nonatomic) NSString* text;
+(id)defaultFont;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)frame;
-(void)setFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(CGSize)textSize;
-(CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines;
-(void)_invalidateTextSize;
-(void)setActualFontSize:(float)size;
-(float)actualFontSize;
-(id)_disabledFontColor;
-(id)currentTextColor;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)drawTextInRect:(CGRect)rect;
-(id)_attributes;
-(void)_drawTextInRect:(CGRect)rect baselineCalculationOnly:(BOOL)only;
-(void)drawRect:(CGRect)rect;
-(void)_setWordRoundingEnabled:(BOOL)enabled;
-(BOOL)_allowAscentRounding;
@end

@interface UILabel (UITextFieldCenteredLabelSupport)
-(BOOL)isTextFieldCenteredLabel;
@end

@interface UILabel (UILabelDeprecatedMethods)
-(void)setColor:(id)color;
-(id)color;
-(void)setCentersHorizontally:(BOOL)horizontally;
-(BOOL)centersHorizontally;
-(CGSize)textSizeForWidth:(float)width;
-(CGRect)textRectForBounds:(CGRect)bounds;
-(void)drawContentsInRect:(CGRect)rect;
-(void)setRawSize:(CGSize)size;
-(CGSize)rawSize;
@end

@interface UILabel (SyntheticEvents)
-(id)_scriptingInfo;
@end

@interface UILabel (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(unsigned long long)defaultAccessibilityTraits;
@end
