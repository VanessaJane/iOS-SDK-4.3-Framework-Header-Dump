/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import "GenericProduction.h"

@class SimpleSlotSequence, NSArray;

@interface NewProduction : GenericProduction {
	NSArray* _indices;
	SimpleSlotSequence* _overlays;
}
@property(retain) NSArray* indices;
@property(retain) SimpleSlotSequence* overlays;
+(id)instanceFromPlist:(id)plist;
+(id)productionWithSimpleSlotSequence:(id)simpleSlotSequence;
-(id)initFromPlist:(id)plist;
-(id)initWithSimpleSlotSequence:(id)simpleSlotSequence;
-(id)initWithOverlays:(id)overlays indices:(id)indices;
-(void)dealloc;
-(id)description;
@end
