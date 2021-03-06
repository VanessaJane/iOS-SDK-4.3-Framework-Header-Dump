/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIKit/UIFont.h>


__attribute__((visibility("hidden")))
@interface QLPreviewURLProtocol : UIFont {
}
+(void)initialize;
+(id)newUniqueURLWithName:(id)name;
+(id)newURLWithContentID:(id)contentID baseURL:(id)url;
+(void)registerPreview:(id)preview;
+(void)registerURL:(id)url mimeType:(id)type textEncoding:(id)encoding;
+(id)_errorForAbort;
+(id)_errorForCancel;
+(id)_errorForNoPreview;
+(void)_unregisterURL:(id)url;
+(void)unregisterURLs:(id)urls andPreview:(id)preview;
+(void)appendData:(id)data forURL:(id)url lastChunk:(BOOL)chunk;
+(void)setError:(id)error forURL:(id)url;
+(id)errorForURL:(id)url;
+(void)startLoadingProtocol:(id)protocol;
+(void)stopLoadingProtocol:(id)protocol;
+(BOOL)canInitWithRequest:(id)request;
+(id)canonicalRequestForRequest:(id)request;
-(void)startLoading;
-(void)stopLoading;
@end

