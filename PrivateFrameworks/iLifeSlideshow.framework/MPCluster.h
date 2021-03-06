/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString, NSMutableArray, NSMutableSet;

@interface MPCluster : XXUnknownSuperclass {
	NSMutableArray* mSlides;
	NSMutableSet* mPathsInCluster;
	NSString* mName;
	float mRating;
	NSMutableDictionary* mUsageCounterPerLayer;
}
@property(retain) NSMutableArray* items;
@property(copy) NSString* name;
@property(assign) float rating;
@property(retain) NSMutableDictionary* usageCounterPerLayer;
-(id)init;
-(void)dealloc;
-(void)addSlide:(id)slide;
-(void)removeAllSlides;
-(int)slideCount;
-(id)allSlides;
-(BOOL)clusterContainsSlideAtPath:(id)path;
-(id)allSlidesSortedChronologically;
-(void)setUsageCountForLayer:(id)layer to:(float)to;
-(float)usageCountForLayer:(id)layer;
-(void)resetAllUsageCounters;
-(id)usageCountDescription;
-(void)detailedDescription;
-(id)description;
@end

