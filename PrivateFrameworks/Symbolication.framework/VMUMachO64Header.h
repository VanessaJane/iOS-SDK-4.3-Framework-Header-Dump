/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMachOHeader.h"


@interface VMUMachO64Header : VMUMachOHeader {
	unsigned _reserved;
}
+(id)machO64HeaderWithUniverse:(id)universe memory:(id)memory name:(id)name path:(id)path timestamp:(id)timestamp;
-(id)initWithUniverse:(id)universe memory:(id)memory name:(id)name path:(id)path timestamp:(id)timestamp;
-(BOOL)isMachO64;
@end
