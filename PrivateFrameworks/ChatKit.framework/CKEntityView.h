/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ChatKit-Structs.h"

@class UILabel, CKEntity;

@interface CKEntityView : XXUnknownSuperclass {
	UILabel* _label;
	CKEntity* _entity;
}
+(float)defaultWidth;
+(CGSize)sizeForEntity:(id)entity withWidth:(float)width;
+(CGSize)sizeForEntity:(id)entity;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
-(void)updateFontSize;
-(void)setEntity:(id)entity;
-(void)sizeToFit;
@end

