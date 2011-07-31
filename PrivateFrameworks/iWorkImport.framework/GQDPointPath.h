/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDPointPath.h"
#import "GQDPath.h"


__attribute__((visibility("hidden")))
@interface GQDPointPath : GQDPath {
@private
	int mType;
	CGPoint mPoint;
	CGSize mSize;
}
-(int)type;
-(CGPoint)point;
-(CGSize)size;
-(CGPathRef)createBezierPath;
@end

@interface GQDPointPath (Private)
-(int)readAttributesFromReader:(xmlTextReader*)reader processor:(id)processor;
-(int)mapStrType:(CFStringRef)type;
@end
