/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface CKMessagePartComposeResourcePool : XXUnknownSuperclass {
}
+(int)requestProviderID;
+(void)relinquishProviderID:(int)anId;
+(void)addComposeImage:(id)image withID:(int)anId forProvider:(int)provider;
+(void)removeComposeImageWithID:(int)anId forProvider:(int)provider;
+(void)removeAllPartsForProviderID:(int)providerID;
+(id)composeImageWithPartID:(int)partID providerID:(int)anId;
@end

