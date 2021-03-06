/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFLockObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MFLock : XXUnknownSuperclass <MFLockObject> {
	NSString* _name;
	id _delegate;
}
+(void)initialize;
-(id)init;
-(id)initWithName:(id)name andDelegate:(id)delegate;
-(BOOL)isLockedByMe;
-(void)lock;
-(BOOL)tryLock;
-(BOOL)lockBeforeDate:(id)date;
-(void)unlock;
-(id)description;
-(void)dealloc;
@end

