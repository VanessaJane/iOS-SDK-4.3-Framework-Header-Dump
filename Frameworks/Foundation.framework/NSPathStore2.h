/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"


__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString {
@private
	unsigned _lengthAndRefCount;
	unsigned short _characters[0];
}
+(id)pathStoreWithCharacters:(const unsigned short*)characters length:(unsigned)length;
+(id)pathWithComponents:(id)components;
-(unsigned)length;
-(unsigned short)characterAtIndex:(unsigned)index;
-(void)getCharacters:(unsigned short*)characters range:(NSRange)range;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)hash;
-(BOOL)isEqualToString:(id)string;
-(id)pathComponents;
-(BOOL)isAbsolutePath;
-(id)lastPathComponent;
-(id)stringByDeletingLastPathComponent;
-(id)stringByAppendingPathComponent:(id)component;
-(id)pathExtension;
-(id)stringByDeletingPathExtension;
-(id)stringByAppendingPathExtension:(id)extension;
-(id)stringByAbbreviatingWithTildeInPath;
-(id)stringByExpandingTildeInPath;
-(id)_stringByStandardizingPathUsingCache:(BOOL)cache;
-(id)stringByStandardizingPath;
-(id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;
-(id)stringByResolvingSymlinksInPath;
@end

