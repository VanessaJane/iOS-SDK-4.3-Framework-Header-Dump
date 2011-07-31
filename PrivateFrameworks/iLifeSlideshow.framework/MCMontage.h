/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSDictionary, MCPlug, NSString, NSRecursiveLock;
@protocol MCAssetPathDelegate;

@interface MCMontage : XXUnknownSuperclass {
@private
	MCPlug* mRootPlug;
	double mAudioFadeOutDuration;
	NSString* mBasePath;
	id<MCAssetPathDelegate> mAssetPathDelegate;
	NSDictionary* mImprintWhileLoading;
	NSMutableDictionary* mVideoAssetsForFilePaths;
	NSMutableDictionary* mVideoAssetsForObjectIDs;
	NSMutableDictionary* mAudioAssetsForFilePaths;
	NSMutableDictionary* mAudioAssetsForObjectIDs;
	NSMutableDictionary* mContainersForObjectIDs;
	NSRecursiveLock* mLock;
}
@property(readonly, assign) MCPlug* rootPlug;
@property(assign) double audioFadeOutDuration;
@property(copy) NSString* basePath;
@property(assign) id<MCAssetPathDelegate> assetPathDelegate;
-(id)init;
-(id)initFromScratch;
-(id)initWithData:(id)data error:(id*)error;
-(void)dealloc;
-(void)demolish;
-(id)data;
-(void)lock;
-(void)unlock;
-(id)createSerializerContainer;
-(id)createParallelizerContainer;
-(id)createEffectContainer;
-(id)videoAssetForFileAtPath:(id)path;
-(id)audioAssetForFileAtPath:(id)path;
-(id)assetForObjectID:(id)objectID;
-(id)videoAssetForObjectID:(id)objectID;
-(id)audioAssetForObjectID:(id)objectID;
-(id)assets;
-(id)videoAssets;
-(id)audioAssets;
-(id)containerForObjectID:(id)objectID;
-(void)forgetAboutContainer:(id)container;
@end
