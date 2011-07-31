/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import "AccountSettingsUIAccount.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (Internal)
-(BOOL)_setTetheredDataSourceEnabled:(BOOL)enabled forDataclass:(id)dataclass;
-(BOOL)_deleteDataSourceForDataclass:(id)dataclass;
-(void)_saveChangesToOnMyDeviceAccount;
@end

@interface XXUnknownSuperclass (AccountSettingsUI) <AccountSettingsUIAccount>
+(id)displayedShortAccountTypeString;
+(id)displayedAccountTypeString;
+(void*)createSyncDataSourceForDataclass:(id)dataclass;
-(BOOL)supportsPush;
-(id)uniqueId;
-(void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;
-(void)setTetheredEnabled:(BOOL)enabled forDataclass:(id)dataclass;
-(void)deleteLocalDataSourceForDataclass:(id)dataclass;
-(BOOL)otherAccountEnabledForDataclass:(id)dataclass;
-(void)showLocalStoreIfAppropriateForDataclass:(id)dataclass;
-(void)hideLocalStoreForDataclass:(id)dataclass;
@end

@interface XXUnknownSuperclass (AccountSettingsUI)
-(id)setOfKeysForAlteredValuesComparedTo:(id)to;
@end
