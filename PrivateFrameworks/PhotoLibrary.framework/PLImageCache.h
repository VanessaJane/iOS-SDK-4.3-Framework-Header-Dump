/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class PLImageLoadingThread, NSLock;

@interface PLImageCache : XXUnknownSuperclass {
	NSLock* _lock;
	CFDictionaryRef _images;
	PLImageLoadingThread* _loader;
}
-(id)init;
-(void)lock;
-(void)unlock;
-(void)dealloc;
-(void)release;
-(id)_imageLoader;
-(void)_uncacheImage:(id)image;
-(id)_cachedImageFromSource:(id)source forObject:(id)object;
-(id)cachedImageFromSource:(id)source forObject:(id)object loadIfNeeded:(BOOL)needed synchronously:(BOOL)synchronously priority:(int)priority forImageLoadingQueue:(id)imageLoadingQueue;
-(id)cachedImageFromSource:(id)source forObject:(id)object loadIfNeeded:(BOOL)needed synchronously:(BOOL)synchronously priority:(int)priority forImageLoadingQueue:(id)imageLoadingQueue completion:(id)completion;
-(void)invalidateCachedImageForSource:(id)source forObject:(id)object;
-(void)_addImageToCache:(id)cache;
-(id)newCachedImageWithImageContents:(void*)imageContents orientation:(int)orientation metadata:(id)metadata fromSource:(id)source object:(id)object;
-(id)newImageLoadingQueue;
-(void)removeImageLoadingQueue:(id)queue;
-(void)cancelLoadFromSource:(id)source forObject:(id)object forImageLoadingQueue:(id)imageLoadingQueue;
-(void)pauseLoading;
-(void)resumeLoading;
@end

