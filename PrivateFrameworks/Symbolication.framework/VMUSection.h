/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface VMUSection : XXUnknownSuperclass {
	NSString* _sectionName;
	NSString* _segmentName;
	unsigned long long _addr;
	unsigned long long _size;
	unsigned _offset;
	unsigned _align;
	unsigned _reloff;
	unsigned _nreloc;
	unsigned _flags;
	unsigned _reserved1;
	unsigned _reserved2;
}
-(BOOL)isSection32;
-(BOOL)isSection64;
-(id)sectionName;
-(id)segmentName;
-(unsigned long long)addr;
-(unsigned long long)size;
-(unsigned)offset;
-(unsigned)align;
-(unsigned)reloff;
-(unsigned)nreloc;
-(unsigned)flags;
-(unsigned)reserved1;
-(unsigned)reserved2;
-(id)description;
-(void)dealloc;
@end

