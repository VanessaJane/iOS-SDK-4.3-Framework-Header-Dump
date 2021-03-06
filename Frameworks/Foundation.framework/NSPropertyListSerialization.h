/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSPropertyListSerialization : XXUnknownSuperclass {
	void* reserved[6];
}
+(BOOL)propertyList:(id)list isValidForFormat:(unsigned)format;
+(id)dataFromPropertyList:(id)propertyList format:(unsigned)format errorDescription:(id*)description;
+(id)propertyListFromData:(id)data mutabilityOption:(unsigned)option format:(unsigned*)format errorDescription:(id*)description;
+(id)allocWithZone:(NSZone*)zone;
+(id)dataWithPropertyList:(id)propertyList format:(unsigned)format options:(unsigned)options error:(id*)error;
+(id)propertyListWithData:(id)data options:(unsigned)options format:(unsigned*)format error:(id*)error;
+(int)writePropertyList:(id)list toStream:(id)stream format:(unsigned)format options:(unsigned)options error:(id*)error;
+(id)propertyListWithStream:(id)stream options:(unsigned)options format:(unsigned*)format error:(id*)error;
-(id)init;
@end

