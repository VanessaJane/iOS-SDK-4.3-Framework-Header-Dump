/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DataDetectorsCore-Structs.h"

@class NSString;

@interface DDURLMatch : XXUnknownSuperclass {
	NSRange _range;
	NSString* _url;
}
-(id)initWithRange:(NSRange)range url:(id)url;
-(void)dealloc;
-(NSRange)range;
-(id)url;
-(int)compare:(id)compare;
-(id)description;
@end
