/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UITextInputTraits.h"
#import "UIControl.h"
#import "UITextField.h"

@class UITextFieldBackgroundView, UIImageView, UITextInteractionAssistant, UILabel, UITextSelectionView, UIFont, UIColor, NSString, UIButton, UITextFieldAtomBackgroundView, UITextFieldBorderView, UITextInputTraits, UITextFieldLabel, UIImage;
@protocol UITextFieldDelegate;

@interface UITextField : UIControl <UITextInputTraits, NSCoding> {
@private
	NSString* _text;
	UIColor* _textColor;
	int _borderStyle;
	float _minimumFontSize;
	id _delegate;
	UIImage* _background;
	UIImage* _disabledBackground;
	int _clearButtonMode;
	UIView* _leftView;
	int _leftViewMode;
	UIView* _rightView;
	int _rightViewMode;
	UITextInputTraits* _traits;
	UITextInputTraits* _nonAtomTraits;
	float _fullFontSize;
	float _paddingLeft;
	float _paddingTop;
	float _paddingRight;
	float _paddingBottom;
	NSString* _textFont;
	UIColor* _caretColor;
	NSRange _selectionRange;
	int _scrollXOffset;
	int _scrollYOffset;
	float _progress;
	NSString* _style;
	double _mouseDownTime;
	UIButton* _clearButton;
	CGSize _clearButtonOffset;
	CGSize _leftViewOffset;
	CGSize _rightViewOffset;
	UITextFieldBorderView* _backgroundView;
	UITextFieldBorderView* _disabledBackgroundView;
	UITextFieldBackgroundView* _systemBackgroundView;
	UITextFieldLabel* _textLabel;
	UITextFieldLabel* _placeholderLabel;
	UIImageView* _iconView;
	UILabel* _label;
	float _labelOffset;
	UITextInteractionAssistant* _interactionAssistant;
	UITextSelectionView* _selectionView;
	UIView* _inputView;
	UIView* _inputAccessoryView;
	UITextFieldAtomBackgroundView* _atomBackgroundView;
	struct {
		unsigned secureTextChanged : 1;
		unsigned guard : 1;
		unsigned delegateRespondsToHandleKeyDown : 1;
		unsigned verticallyCenterText : 1;
		unsigned isAnimating : 4;
		unsigned inactiveHasDimAppearance : 1;
		unsigned becomesFirstResponderOnClearButtonTap : 1;
		unsigned clearsOnBeginEditing : 1;
		unsigned adjustsFontSizeToFitWidth : 1;
		unsigned fieldEditorAttached : 1;
		unsigned canBecomeFirstResponder : 1;
		unsigned shouldSuppressShouldBeginEditing : 1;
		unsigned inResignFirstResponder : 1;
		unsigned undoDisabled : 1;
		unsigned contentsRTL : 1;
		unsigned explicitAlignment : 1;
	} _textFieldFlags;
}
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) int borderStyle;
@property(assign, nonatomic) float minimumFontSize;
@property(assign, nonatomic) id<UITextFieldDelegate> delegate;
@property(retain, nonatomic) UIImage* background;
@property(retain, nonatomic) UIImage* disabledBackground;
@property(assign, nonatomic) int clearButtonMode;
@property(retain, nonatomic) UIView* leftView;
@property(assign, nonatomic) int leftViewMode;
@property(retain, nonatomic) UIView* rightView;
@property(assign, nonatomic) int rightViewMode;
@property(retain) UIView* inputView;
@property(retain) UIView* inputAccessoryView;
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;
@property(assign, nonatomic) BOOL adjustsFontSizeToFitWidth;
@property(assign, nonatomic) BOOL clearsOnBeginEditing;
@property(copy, nonatomic) NSString* placeholder;
@property(assign, nonatomic) int textAlignment;
@property(retain, nonatomic) UIFont* font;
@property(retain, nonatomic) UIColor* textColor;
@property(copy, nonatomic) NSString* text;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)_clearStyle;
-(void)_setNeedsStyleRecalc;
-(void)_sizeChanged:(BOOL)changed;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
-(void)setAnimating:(BOOL)animating;
-(CGSize)_textSize;
-(CGSize)sizeThatFits:(CGSize)fits;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)_keyboardResponder;
-(BOOL)_requiresKeyboardResetOnReload;
-(void)_becomeFirstResponderAndMakeVisible;
-(void)_becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)_windowBecameKey;
-(void)_resignFirstResponder;
-(BOOL)_sendInitialMouseEvents;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)setFont:(id)font fullFontSize:(float)size;
-(id)_copyFont:(id)font newSize:(float)size maxSize:(float)size3;
-(CGSize)_fontMetrics:(id)metrics;
-(float)_marginTopForText:(id)text;
-(id)_createCSSStyleDeclarationForWebView:(id)webView;
-(id)_style;
-(void)_endedEditing;
-(id)clearButton;
-(id)_clearButton;
-(void)_updateButtons;
-(void)_updateAutosizeStyleIfNeeded;
-(CGRect)_atomBackgroundViewFrame;
-(BOOL)_showsAtomBackground;
-(void)_updateAtomBackground;
-(BOOL)_showsClearButtonWhenNonEmpty:(BOOL)empty;
-(BOOL)_showsClearButton:(BOOL)button;
-(BOOL)_showsClearButtonWhenEmpty;
-(BOOL)_showsLeftView;
-(BOOL)_showsRightView;
-(CGRect)_textRectForBounds:(CGRect)bounds forEditing:(BOOL)editing;
-(CGRect)_textRectExcludingButtonsForBounds:(CGRect)bounds;
-(void)_updateLabel;
-(CGRect)_frameForLabel:(id)label inTextRect:(CGRect)textRect;
-(void)layoutSubviews;
-(BOOL)_shouldEndEditing;
-(void)_updateBackgroundViews;
-(void)_clearBackgroundViews;
-(void)_setImplicitAlignment;
-(CGRect)adjustedCaretRectForCaretRect:(CGRect)caretRect;
-(float)actualMinimumFontSize;
-(id)actualFont;
-(CGPoint)_scrollOffset;
-(CGSize)_leftViewOffset;
-(void)_setLeftViewOffset:(CGSize)offset;
-(CGSize)_rightViewOffset;
-(void)_setRightViewOffset:(CGSize)offset;
-(Class)_systemBackgroundViewClass;
-(BOOL)_fieldEditorAttached;
-(void)_setSystemBackgroundViewActive:(BOOL)active;
-(id)_placeholderColor;
-(id)_placeholderView;
-(id)_placeholderLabel;
-(id)_textLabelView;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(id)textInputTraits;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(BOOL)respondsToSelector:(SEL)selector;
-(void)_updateTextLabel;
-(id)_text;
-(id)searchText;
-(void)_updateTextColor;
-(void)setContentVerticalAlignment:(int)alignment;
-(id)createPlaceholderLabelWithFont:(id)font andTextAlignment:(int)alignment;
-(id)createTextLabelWithTextColor:(id)textColor;
-(CGRect)borderRectForBounds:(CGRect)bounds;
-(CGRect)textRectForBounds:(CGRect)bounds;
-(CGRect)placeholderRectForBounds:(CGRect)bounds;
-(CGRect)editingRectForBounds:(CGRect)bounds;
-(CGRect)clearButtonRectForBounds:(CGRect)bounds;
-(CGRect)leftViewRectForBounds:(CGRect)bounds;
-(CGRect)rightViewRectForBounds:(CGRect)bounds;
-(void)drawTextInRect:(CGRect)rect;
-(void)drawPlaceholderInRect:(CGRect)rect;
-(void)_drawTextInRect:(CGRect)rect forLabel:(id)label;
-(void)willAttachFieldEditor:(id)editor;
-(void)attachFieldEditor:(id)editor;
-(void)willDetachFieldEditor:(id)editor;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(BOOL)keyboardInputShouldDelete:(id)keyboardInput;
-(BOOL)keyboardInputChanged:(id)changed;
-(void)keyboardInputChangedSelection:(id)selection;
-(id)customOverlayContainer;
-(void)fieldEditorDidChange:(id)fieldEditor;
-(void)selectAllFromFieldEditor:(id)fieldEditor;
-(NSRange)fieldEditor:(id)editor willChangeSelectionFromCharacterRange:(NSRange)characterRange toCharacterRange:(NSRange)characterRange3;
-(void)fieldEditorDidChangeSelection:(id)fieldEditor;
-(BOOL)fieldEditor:(id)editor shouldInsertText:(id)text replacingRange:(NSRange)range;
-(BOOL)fieldEditor:(id)editor shouldReplaceWithText:(id)text;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index;
-(void)setAutoresizesTextToFit:(BOOL)fit;
-(void)setTextAutorresizesToFit:(BOOL)fit;
-(void)setClearButtonStyle:(int)style;
-(CGRect)clearButtonRect;
-(CGRect)textRect;
-(CGRect)editRect;
-(void)drawRect:(CGRect)rect;
-(void)drawBorder:(CGRect)border;
-(void)setPaddingTop:(float)top paddingLeft:(float)left;
-(void)setPaddingLeft:(float)left;
-(float)paddingLeft;
-(void)setPaddingTop:(float)top;
-(float)paddingTop;
-(void)setPaddingBottom:(float)bottom;
-(float)paddingBottom;
-(void)setPaddingRight:(float)right;
-(float)paddingRight;
-(void)setTextFont:(id)font;
-(void)setInactiveHasDimAppearance:(BOOL)appearance;
-(void)setEnabled:(BOOL)enabled;
-(void)selectAll;
-(void)_clearSelectionUI;
-(void)_resetSelectionUI;
-(void)layoutTilesNow;
-(void)clearText;
-(NSRange)selectionRange;
-(void)setSelectionRange:(NSRange)range;
-(unsigned)characterOffsetAtPoint:(CGPoint)point;
-(void)setIcon:(id)icon;
-(CGSize)clearButtonOffset;
-(void)setBecomesFirstResponderOnClearButtonTap:(BOOL)tap;
-(CGRect)iconRect;
-(void)setProgress:(float)progress;
-(BOOL)hasMarkedText;
-(void)setLabelOffset:(float)offset;
-(id)textLabel;
-(void)setLabel:(id)label;
-(void)setTextCentersHorizontally:(BOOL)horizontally;
-(void)setTextCentersVertically:(BOOL)vertically;
-(void)setUndoEnabled:(BOOL)enabled;
-(BOOL)isUndoEnabled;
-(void)_clearButtonClicked:(id)clicked;
-(void)setClearButtonOffset:(CGSize)offset;
-(void)setDrawsAsAtom:(BOOL)atom;
-(BOOL)drawsAsAtom;
-(void)setAtomStyle:(int)style;
-(int)atomStyle;
-(id)undoManager;
-(id)content;
-(BOOL)isEditable;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)selectionChanged;
-(id)_fieldEditor;
-(BOOL)hasSelection;
-(void)startAutoscroll:(CGPoint)autoscroll;
-(void)cancelAutoscroll;
-(void)setSelectionVisible:(BOOL)visible;
-(BOOL)selectionVisible;
-(void)setCaretBlinks:(BOOL)blinks;
-(BOOL)caretBlinks;
-(id)selectionView;
-(id)interactionAssistant;
-(CGRect)selectionClipRect;
-(id)selectionRectsForRange:(id)range;
-(id)selectedText;
-(void)insertText:(id)text;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;
-(unsigned)offsetInMarkedTextForSelection:(id)selection;
-(CGPoint)constrainedPoint:(CGPoint)point;
-(id)webView;
-(void)cut:(id)cut;
-(void)copy:(id)copy;
-(id)supportedPasteboardTypes;
-(void)paste:(id)paste;
-(void)select:(id)select;
-(void)selectAll:(id)all;
-(void)_setRtoLTextDirection:(id)direction;
-(void)_setLtoRTextDirection:(id)direction;
-(void)replace:(id)replace;
-(void)promptForReplace:(id)replace;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
@end

@interface UITextField (SyntheticEvents)
-(id)_scriptingInfo;
@end

@interface UITextField (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end
