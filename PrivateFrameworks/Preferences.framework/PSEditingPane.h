/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Preferences-Structs.h"

@class UIView, PSSpecifier;

@interface PSEditingPane : XXUnknownSuperclass {
	PSSpecifier* _specifier;
	id _delegate;
	unsigned _requiresKeyboard : 1;
	CGRect _pinstripeRect;
	UIView* _pinstripeView;
}
@property(assign, nonatomic) CGRect pinstripeRect;
+(id)defaultBackgroundColor;
+(float)preferredHeight;
-(id)initWithFrame:(CGRect)frame;
-(CGRect)contentRect;
-(void)dealloc;
-(void)setDelegate:(id)delegate;
-(void)setPreferenceSpecifier:(id)specifier;
-(id)preferenceSpecifier;
-(void)setPreferenceValue:(id)value;
-(id)preferenceValue;
-(BOOL)requiresKeyboard;
-(id)specifierLabel;
-(BOOL)wantsNewButton;
-(void)viewDidBecomeVisible;
-(void)addNewValue;
-(void)editMode;
-(void)doneEditing;
-(BOOL)handlesDoneButton;
-(BOOL)changed;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
@end

