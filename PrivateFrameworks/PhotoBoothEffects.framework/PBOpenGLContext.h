/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import "PBOpenGLContext.h"
#import "PBContext.h"


@interface PBOpenGLContext : PBContext {
	void* _priv;
}
-(void)setSmallPool:(CVPixelBufferPoolRef)pool;
-(void)setLargePool:(CVPixelBufferPoolRef)pool;
-(CVPixelBufferPoolRef)smallPool;
-(CVPixelBufferPoolRef)largePool;
-(id)init;
-(void)dealloc;
-(CAImageQueueRef)outputImageQueue;
-(void)setOutputImageQueue:(CAImageQueueRef)queue;
-(CVBufferRef)createCVPixelBufferForFilter:(id)filter inputPixelBuffer:(CVBufferRef)buffer mirrored:(BOOL)mirrored;
-(void)preloadFilter:(id)filter;
-(void)renderFilter:(id)filter inputPixelBuffer:(CVBufferRef)buffer;
-(void)renderFilter:(id)filter inputPixelBuffer:(CVBufferRef)buffer mirrored:(BOOL)mirrored;
-(void)renderNineUp:(id)up inputPixelBuffer:(CVBufferRef)buffer;
-(void)renderNineUp:(id)up inputPixelBuffer:(CVBufferRef)buffer mirrored:(BOOL)mirrored;
-(CGImageRef)createCGImageForFilterViaGL:(id)filterViaGL inputPixelBuffer:(CVBufferRef)buffer;
@end

@interface PBOpenGLContext (PBContextDebug)
-(void)_debugDump;
@end

@interface PBOpenGLContext (PBOpenGLContextPrivate)
-(BOOL)_registerFilter:(id)filter;
-(id)_compileFilter:(id)filter;
-(void)_createPixelBuffer:(CVBufferRef*)buffer fromPool:(CVPixelBufferPoolRef)pool;
-(void)_createPixelBufferPools;
-(unsigned)_compileShader:(const char*)shader type:(unsigned)type;
-(unsigned)_textureForLookupTableName:(id)lookupTableName;
@end

