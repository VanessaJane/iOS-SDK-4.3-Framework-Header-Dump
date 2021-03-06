/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"
#import "MLPhotoBakedThumbnailsDelegate.h"

@class NSRecursiveLock, NSMutableArray;

@interface PLImageWriter : XXUnknownSuperclass <MLPhotoBakedThumbnailsDelegate> {
	NSMutableArray* _jobs;
	NSRecursiveLock* _jobsLock;
	BOOL _writerThreadRunning;
	BOOL _processingJob;
	BOOL _databaseIsCorrupt;
}
+(id)sharedWriter;
+(void)writeableDataForImage:(id)image previewImage:(id)image2 imageData:(id)data imageUTIType:(CFStringRef)type exifProperties:(id)properties imageRefOut:(CGImageRef*)anOut lowResImageRefOut:(CGImageRef*)anOut7 thumbnailDataOut:(id*)anOut8 imageUTITypeOut:(const CFStringRef*)anOut9 exifPropertiesOut:(id*)anOut10 isJPEGOut:(BOOL*)anOut11 imageDataOut:(id*)anOut12;
+(void)decorateThumbnail:(id)thumbnail inContext:(CGContextRef)context;
+(void)decorateThumbnailInRect:(CGRect)rect size:(CGSize)size duration:(id)duration inContext:(CGContextRef)context format:(int)format;
-(id)init;
-(void)dealloc;
-(BOOL)canEnqueueJob;
-(BOOL)enqueueJob:(id)job;
-(int)unfinishedJobsCount;
-(void)_savePreviewWellImage:(id)image;
-(void)_processImageJob:(id)job;
-(void)_processImportImageJob:(id)job;
-(void)_processDeletePhotoStreamDataJob:(id)job;
-(void)_processSavePhotoStreamImageToCameraRollJob:(id)cameraRollJob;
-(void)_decorateThumbnail:(id)thumbnail;
-(void)decorateThumbnail:(id)thumbnail inContext:(CGContextRef)context;
-(void)_processVideoJob:(id)job;
-(BOOL)_sufficientDiskSpaceToCopyVideoAtPath:(id)path;
-(void)_processVideoSaveJob:(id)job;
-(void)_processJob:(id)job;
-(void)_writerThread;
-(void)_notifyJobCompletion:(id)completion;
@end

