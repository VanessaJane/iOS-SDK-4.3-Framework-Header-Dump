/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GQHTextSpan.h"


__attribute__((visibility("hidden")))
@interface GQHTextSpan : XXUnknownSuperclass {
}
+(int)handleSpan:(id)span checkForTrailingBlanks:(BOOL)trailingBlanks state:(id)state;
+(int)handleTextList:(id)list checkForTrailingBlanks:(BOOL)trailingBlanks state:(id)state;
+(int)handleTextListChild:(id)child outputBlanks:(BOOL)blanks state:(id)state;
+(int)handleTextBackgroundForStyle:(id)style destStyle:(id)style2 state:(id)state;
+(int)nonWhitespaceCount:(CFArrayRef)count;
@end

@interface GQHTextSpan (Private)
+(int)handleTextMarker:(id)marker outputBlanks:(BOOL)blanks state:(id)state;
+(int)handleAutoNumber:(id)number state:(id)state;
+(int)handlePageStart:(id)start state:(id)state;
+(int)handleAttachment:(id)attachment state:(id)state;
+(int)handleContainerHint:(id)hint state:(id)state;
@end

