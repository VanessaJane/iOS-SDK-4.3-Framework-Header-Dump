/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : XXUnknownSuperclass {
	NSMutableArray* _mailboxes;
	unsigned _index;
	BOOL _includeHidden;
}
-(void)dealloc;
-(id)_initWithMailbox:(id)mailbox includeHiddenChildren:(BOOL)children;
-(id)nextObject;
@end
