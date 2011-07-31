/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ICSDate, NSDictionary, NSArray;

@interface CalEventMetadata : XXUnknownSuperclass <NSCoding> {
	NSArray* _attach;
	ICSDate* _created;
	NSDictionary* _x_props;
	NSArray* _categories;
	int _classification;
	NSArray* _priority;
}
@property(retain) NSArray* attach;
@property(retain) ICSDate* created;
@property(retain) NSDictionary* x_props;
@property(retain) NSArray* categories;
@property(assign) int classification;
@property(retain) NSArray* priority;
+(id)metadataWithICSEvent:(id)icsevent;
+(id)metadataWithData:(id)data;
-(id)initWithICSEvent:(id)icsevent;
-(id)init;
-(void)applyToEvent:(id)event;
-(id)dataRepresentationWithExistingMetaData:(id)existingMetaData;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end
