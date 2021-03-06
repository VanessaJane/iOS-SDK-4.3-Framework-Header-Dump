/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface VMUHeader : XXUnknownSuperclass {
}
+(id)extractMachOHeadersFromHeader:(id)header matchingArchitecture:(id)architecture considerArchives:(BOOL)archives;
+(id)headerWithMemory:(id)memory address:(unsigned long long)address name:(id)name path:(id)path timestamp:(id)timestamp;
+(id)headerWithUniverse:(id)universe memory:(id)memory name:(id)name path:(id)path timestamp:(id)timestamp;
-(BOOL)isFat;
-(BOOL)isMachO;
-(BOOL)isMachO32;
-(BOOL)isMachO64;
-(BOOL)isArchive;
-(id)signature;
@end

