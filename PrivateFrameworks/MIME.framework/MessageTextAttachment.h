/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, MessageFileWrapper;

@interface MessageTextAttachment : XXUnknownSuperclass {
	MessageFileWrapper* _fileWrapper;
@private
	NSMutableDictionary* _cache;
}
-(id)init;
-(id)initWithWrapper:(id)wrapper;
-(void)dealloc;
-(unsigned)approximateSize;
-(id)mimePart;
-(BOOL)hasBeenDownloaded;
-(BOOL)isPlaceholder;
-(BOOL)shouldDownloadAttachmentOnDisplay;
-(void)setFileWrapper:(id)wrapper;
-(id)fileWrapper;
-(id)fileWrapperForcingDownload:(BOOL)download;
-(void)inlineDisplayData:(id*)data mimeType:(id*)type;
-(BOOL)allowDownload;
-(id)description;
-(id)cachedValueForKey:(id)key;
-(void)setCachedValue:(id)value forKey:(id)key;
@end
