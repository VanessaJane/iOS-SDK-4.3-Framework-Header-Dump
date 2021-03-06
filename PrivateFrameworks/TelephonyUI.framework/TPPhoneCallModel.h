/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "TelephonyUI-Structs.h"

@class NSRecursiveLock;

@interface TPPhoneCallModel : XXUnknownSuperclass {
	CFDictionaryRef _callManagementState;
	NSRecursiveLock* _lock;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CFDictionaryRef)_callManagementDictionary;
-(BOOL)_booleanValueForKey:(CFStringRef)key;
-(int)_intValueForKey:(CFStringRef)key;
-(BOOL)isSwappable;
-(BOOL)isMergeable;
-(BOOL)isHoldAllowed;
-(BOOL)isAddCallAllowed;
-(int)ambiguityState;
-(BOOL)isAmbiguousMultiPartyCall;
-(BOOL)isAmbiguousCallList;
-(int)maxMultiPartyCallCount;
-(int)maxSupportedCallCount;
-(BOOL)isHardPauseAvailable;
-(int)cellTelephonyType;
-(void)_invalidateCachedState;
-(id)description;
@end

