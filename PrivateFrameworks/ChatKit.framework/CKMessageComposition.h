/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface CKMessageComposition : XXUnknownSuperclass {
}
@property(readonly, assign, nonatomic) BOOL hasContent;
@property(retain, nonatomic) NSArray* resources;
@property(copy, nonatomic) NSString* textString;
@property(copy, nonatomic) NSString* markupString;
@property(copy, nonatomic) NSString* subject;
@property(assign, nonatomic) BOOL isTextOnly;
+(id)newCompositionForText:(id)text;
+(id)newCompositionForMessage:(id)message;
+(id)newComposition;
+(void)deleteFileWithPrefix:(id)prefix path:(id)path;
+(id)messageCompositionFromFileWithPrefix:(id)prefix path:(id)path;
-(void)writeToFileWithPrefix:(id)prefix path:(id)path;
@end
