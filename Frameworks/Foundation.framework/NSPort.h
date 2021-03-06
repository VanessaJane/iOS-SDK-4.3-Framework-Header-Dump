/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"


@interface NSPort : XXUnknownSuperclass <NSCopying, NSCoding> {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)port;
+(id)portWithMachPort:(unsigned)machPort;
-(id)initWithMachPort:(unsigned)machPort;
-(void)invalidate;
-(BOOL)isValid;
-(unsigned)machPort;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(unsigned)reservedSpaceLength;
-(id)copyWithZone:(NSZone*)zone;
-(id)replacementObjectForCoder:(id)coder;
-(Class)classForPortCoder;
-(Class)classForCoder;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;
-(BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
@end

