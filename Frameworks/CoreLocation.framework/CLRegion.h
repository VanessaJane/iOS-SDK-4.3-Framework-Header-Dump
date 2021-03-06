/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import <Foundation/NSObject.h>
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSCoding> {
@private
	id _internal;
}
@property(readonly, assign, nonatomic) XXStruct_PcbLhD clientRegion;
@property(readonly, assign, nonatomic) NSString* identifier;
@property(readonly, assign, nonatomic) double radius;
@property(readonly, assign, nonatomic) XXStruct_zYrK5D center;
-(id)initWithClientRegion:(XXStruct_PcbLhD)clientRegion;
-(id)initCircularRegionWithCenter:(XXStruct_zYrK5D)center radius:(double)radius identifier:(id)identifier;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(BOOL)containsCoordinate:(XXStruct_zYrK5D)coordinate;
@end

