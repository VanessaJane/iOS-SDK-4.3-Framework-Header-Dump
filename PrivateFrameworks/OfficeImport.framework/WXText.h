/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WXText.h"


__attribute__((visibility("hidden")))
@interface WXText : XXUnknownSuperclass {
}
+(void)readFrom:(xmlNode*)from state:(id)state;
+(void)readFrom:(xmlNode*)from baseStyle:(id)style to:(id)to state:(id)state;
+(void)readFromString:(id)string to:(id)to;
@end

@interface WXText (Private)
+(void)createChildren:(xmlNode*)children baseStyle:(id)style to:(id)to state:(id)state;
@end

