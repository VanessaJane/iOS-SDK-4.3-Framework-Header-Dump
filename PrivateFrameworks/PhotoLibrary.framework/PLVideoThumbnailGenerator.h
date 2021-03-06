/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSRecursiveLock, NSString, AVController, NSMutableArray;

@interface PLVideoThumbnailGenerator : XXUnknownSuperclass {
	AVController* _avController;
	NSString* _filePath;
	double _duration;
	CGSize _naturalSize;
	NSMutableArray* _outstandingIdentifiers;
	NSMutableArray* _gatheredIdentifiers;
	NSMutableArray* _gatheredImages;
	NSMutableArray* _gatheredTimes;
	NSRecursiveLock* _lock;
	XXStruct_6rcd1D* _progressStack;
}
@property(retain) NSString* filePath;
@property(readonly, assign) AVController* avController;
@property(readonly, assign) double duration;
@property(readonly, assign) CGSize naturalSize;
@property(assign) XXStruct_6rcd1D* progressStack;
-(void)_thumbnailImageWasGenerated:(id)generated;
-(void)_thumbnailImageGenerationFailed:(id)failed;
-(void)_requestAsyncCGImagesAtTimesParams:(id)timesParams;
-(void)_mainThreadSetup;
-(void)_mainThreadTeardown;
-(void)dealloc;
-(void)setup;
-(void)teardown;
-(CGImageRef)getCGImageAtTime:(double)time size:(CGSize)size;
-(void)requestAsyncCGImagesAtTimes:(id)times requestIDs:(id)ids withImageOptions:(id)imageOptions outTimes:(id*)times4 outImages:(id*)images outRequestIDs:(id*)ids6;
@end

