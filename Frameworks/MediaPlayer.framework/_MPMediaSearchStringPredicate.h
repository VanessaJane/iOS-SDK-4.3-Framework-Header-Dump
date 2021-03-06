/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "_MPMediaSearchStringPredicate.h"
#import "MPMediaPredicate.h"

@class NSSet, NSString;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate {
	NSString* _searchString;
	NSSet* _properties;
}
@property(copy, nonatomic) NSString* searchString;
@property(copy, nonatomic) NSSet* properties;
+(id)predicateWithSearchString:(id)searchString forProperties:(id)properties;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
@end

@interface _MPMediaSearchStringPredicate (ML3Additions)
-(id)_ML3PredicateForEntityClass:(Class)entityClass;
-(id)ML3PredicateForTrack;
-(id)ML3PredicateForContainer;
@end

