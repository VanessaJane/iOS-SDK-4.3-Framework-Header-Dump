/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarItem : XXUnknownSuperclass {
@private
	int _type;
}
@property(readonly, assign, nonatomic) int type;
@property(readonly, assign, nonatomic) Class viewClass;
@property(readonly, assign, nonatomic) int priority;
@property(readonly, assign, nonatomic) int leftOrder;
@property(readonly, assign, nonatomic) int rightOrder;
@property(readonly, assign, nonatomic) NSString* indicatorName;
+(id)itemWithType:(int)type;
+(BOOL)typeIsValid:(int)valid;
+(BOOL)itemType:(int)type canBeEnabledForData:(XXStruct_LyCp7D*)data;
-(id)initWithType:(int)type;
-(BOOL)appearsOnLeft;
-(BOOL)appearsOnRight;
-(BOOL)appearsInRegion:(int)region;
-(int)comparePriority:(id)priority;
-(int)compareLeftOrder:(id)order;
-(int)compareRightOrder:(id)order;
-(id)description;
@end

