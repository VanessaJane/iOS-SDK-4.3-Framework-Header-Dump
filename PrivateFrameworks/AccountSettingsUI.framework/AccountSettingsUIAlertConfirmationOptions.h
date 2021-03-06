/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AccountSettingsUIAlertConfirmationOptions : XXUnknownSuperclass {
	int _selectedButtonIndex;
	int _keepDataButtonIndex;
	int _mergeDataButtonIndex;
	int _deleteDataButtonIndex;
	int _cancelButtonIndex;
	NSString* _dataclass;
	BOOL _enableAction;
	NSString* _tag;
}
+(BOOL)isEnableAction:(id)action;
+(BOOL)isNonDestructiveAction:(id)action;
-(id)init;
-(void)dealloc;
-(void)setDataclass:(id)dataclass;
-(void)setIsEnableAction:(BOOL)action;
-(BOOL)userCancelled;
-(BOOL)userChoiceWillDeleteData;
-(id)userAction;
-(void)setupButtonIndexesForActions:(id)actions;
-(id)tag;
-(void)setTag:(id)tag;
@end

