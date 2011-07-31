/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCAnimationPathSupport.h"
#import "MCFilterSupport.h"
#import "MCObject.h"
#import "MCPlug.h"

@class NSMutableSet, NSRecursiveLock, MCContainer, NSSet, MCLink, NSArray;

@interface MCPlug : MCObject {
	MCContainer* mContainer;
	NSMutableSet* mAnimationPaths;
	NSRecursiveLock* mAnimationPathsLock;
	NSMutableSet* mFilters;
	NSRecursiveLock* mFiltersLock;
	NSArray* mCachedOrderedFilters;
	double mPhaseInDuration;
	double mMainDuration;
	double mPhaseOutDuration;
	double mNumberOfLoops;
	MCLink* mLink;
}
@property(assign) double phaseInDuration;
@property(assign) double mainDuration;
@property(assign) double phaseOutDuration;
@property(assign) double numberOfLoops;
@property(retain) MCLink* link;
@property(readonly, assign) double fullDuration;
@property(retain) MCContainer* container;
+(id)keyPathsForValuesAffectingValueForKey:(id)key;
-(id)init;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(void)demolish;
-(id)imprint;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)snapshot;
-(void)_copySelfToSnapshot:(id)snapshot;
@end

@interface MCPlug (MCFilterSupport) <MCFilterSupport>
@property(readonly, assign) NSSet* filters;
@property(readonly, assign) NSArray* orderedFilters;
-(void)initFiltersWithImprints:(id)imprints;
-(void)demolishFilters;
-(id)imprintsForFilters;
-(unsigned)countOfFilters;
-(id)filterAtIndex:(unsigned)index;
-(id)addFilterWithFilterID:(id)filterID;
-(id)insertFilterWithFilterID:(id)filterID atIndex:(unsigned)index;
-(void)removeFiltersAtIndices:(id)indices;
-(void)removeAllFilters;
-(void)moveFiltersAtIndices:(id)indices toIndex:(unsigned)index;
-(void)observeFilter:(id)filter;
-(void)unobserveFilter:(id)filter;
@end

@interface MCPlug (MCAnimationPathSupport) <MCAnimationPathSupport>
@property(readonly, assign) NSSet* animationPaths;
@property(readonly, assign) unsigned countOfAnimationPaths;
-(void)initAnimationPathsWithImprints:(id)imprints;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(id)animationPathForKey:(id)key createIfNeeded:(BOOL)needed;
-(id)animationPathForKey:(id)key;
-(void)removeAnimationPathForKey:(id)key;
-(void)removeAllAnimationPaths;
@end
