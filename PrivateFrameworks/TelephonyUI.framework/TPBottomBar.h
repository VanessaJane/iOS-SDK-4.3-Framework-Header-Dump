/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface TPBottomBar : XXUnknownSuperclass {
	int _orientation;
	int _style;
}
+(id)_backgroundImage;
+(void)preloadImages;
+(float)defaultHeightForStyle:(int)style orientation:(int)orientation;
+(float)defaultHeightForStyle:(int)style;
+(float)defaultHeightForOrientation:(int)orientation;
+(float)defaultHeight;
+(int)fullscreenStyle;
+(int)overlayStyle;
-(id)initWithDefaultSize;
-(id)initWithDefaultSizeForOrientation:(int)orientation;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(id)init;
-(void)setOrientation:(int)orientation updateFrame:(BOOL)frame;
-(void)setOrientation:(int)orientation;
-(int)orientation;
-(void)drawRect:(CGRect)rect;
@end

