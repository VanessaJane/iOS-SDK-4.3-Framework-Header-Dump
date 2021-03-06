/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ISDialog.h"

@class SSAuthenticationContext, NSMutableDictionary, NSArray, NSString, NSLock;

@interface ISDialog : XXUnknownSuperclass {
	BOOL _allowDuplicates;
	SSAuthenticationContext* _authenticationContext;
	BOOL _authorizationIsForced;
	NSArray* _buttons;
	int _defaultButtonIndex;
	NSString* _displayCountKey;
	BOOL _dismissOnLock;
	BOOL _expectsResponse;
	BOOL _groupsTextFields;
	int _kind;
	NSLock* _lock;
	int _maxDisplayCount;
	NSString* _message;
	BOOL _oneButtonPerLine;
	BOOL _shouldDismissAfterUnlock;
	BOOL _shouldDisplayAsTopMost;
	BOOL _shouldHideButtonsInAwayView;
	NSArray* _textFields;
	NSString* _title;
	int _unlockActionButtonIndex;
	NSMutableDictionary* _userInfo;
}
@property(assign) BOOL allowDuplicates;
@property(copy) SSAuthenticationContext* authenticationContext;
@property(assign) BOOL authorizationIsForced;
@property(retain) NSArray* buttons;
@property(assign) int defaultButtonIndex;
@property(assign) BOOL dismissOnLock;
@property(assign) BOOL expectsResponse;
@property(assign) BOOL groupsTextFields;
@property(assign) int kind;
@property(retain) NSString* message;
@property(assign) BOOL oneButtonPerLine;
@property(assign) BOOL shouldDismissAfterUnlock;
@property(assign) BOOL shouldDisplayAsTopMost;
@property(assign) BOOL shouldHideButtonsInAwayView;
@property(retain) NSArray* textFields;
@property(retain) NSString* title;
@property(assign) int unlockActionButtonIndex;
@property(readonly, assign, getter=isDisplayable) BOOL displayable;
@property(assign) int maximumDisplayCount;
@property(copy) NSString* displayCountKey;
+(int)displayCountForKey:(id)key;
-(id)init;
-(id)initWithDialogDictionary:(id)dialogDictionary;
-(id)initWithError:(id)error;
-(id)initWithOfferDeviceError:(id)offerDeviceError;
-(id)initWithTitle:(id)title message:(id)message;
-(void)dealloc;
-(id)copyUserNotification;
-(void)incrementDisplayCount;
-(BOOL)isEqual:(id)equal;
-(void)setValue:(id)value forUserInfoKey:(id)userInfoKey;
-(id)valueForUserInfoKey:(id)userInfoKey;
-(int)_kindForString:(id)string;
@end

@interface ISDialog (Authentication)
-(id)initWithAuthenticationChallege:(id)authenticationChallege;
@end

