/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "UITextFieldDelegate.h"


@protocol PINEntryView <UITextFieldDelegate>
-(void)showError:(id)error animate:(BOOL)animate;
-(void)setPINPolicyString:(id)string visible:(BOOL)visible;
-(void)hideError;
-(void)setTitle:(id)title font:(id)font;
-(id)stringValue;
-(void)setStringValue:(id)value;
-(void)deleteLastCharacter;
-(void)appendString:(id)string;
-(void)hidePasscodeField:(BOOL)field;
-(BOOL)becomeFirstResponder;
-(void)setDelegate:(id)delegate;
-(void)showFailedAttempts:(int)attempts;
-(void)hideFailedAttempts;
-(void)setBlocked:(BOOL)blocked;
@end
