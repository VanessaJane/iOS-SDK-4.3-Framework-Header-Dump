/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSEnumerator.h"

@protocol NSFastEnumeration;

@interface __NSFastEnumerationEnumerator : NSEnumerator {
@private
	id<NSFastEnumeration> _obj;
	id _origObj;
	struct {
		id state;
		id* itemsPtr;
		unsigned long* mutationsPtr;
		id extra[5];
	} _state;
	unsigned _count;
	unsigned _mut;
}
-(id)initWithObject:(id)object;
-(id)nextObject;
-(void)dealloc;
@end

