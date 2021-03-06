/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import "SCROBrailleKey.h"

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey {
	NSString* _keyString;
	unsigned _modifiers;
}
-(void)dealloc;
-(id)keyString;
-(void)setKeyString:(id)string;
-(unsigned)modifiers;
-(void)setModifiers:(unsigned)modifiers;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end

