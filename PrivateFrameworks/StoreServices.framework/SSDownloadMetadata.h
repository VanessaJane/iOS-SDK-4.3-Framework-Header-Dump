/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSArray, NSData, NSMutableDictionary, SSItemContentRating, NSString, NSURL, SSItemImageCollection, NSDate, NSNumber, NSDictionary, NSLock;

@interface SSDownloadMetadata : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSMutableDictionary* _dictionary;
	NSLock* _lock;
}
@property(retain) NSArray* sinfs;
@property(retain) NSString* sortTitle;
@property(retain) NSString* sortCollectionName;
@property(retain) NSString* sortArtistName;
@property(assign) BOOL shouldDownloadAutomatically;
@property(readonly, assign, getter=isContentRestricted) BOOL contentRestricted;
@property(copy) id requiredDeviceCapabilities;
@property(retain) NSString* releaseDateString;
@property(assign, getter=isRedownloadDownload) BOOL redownloadDownload;
@property(assign) unsigned long long preOrderIdentifier;
@property(retain) NSString* fileExtension;
@property(retain) NSData* epubRightsData;
@property(retain) NSString* downloadKey;
@property(retain) NSDictionary* dictionary;
@property(retain) NSString* copyright;
@property(retain) NSURL* cancelDownloadURL;
@property(assign, getter=isAutomaticDownload) BOOL automaticDownload;
@property(retain) NSURL* viewStoreItemURL;
@property(assign, getter=isExplicitContent) BOOL explicitContent;
@property(copy) SSItemContentRating* contentRating;
@property(retain) NSDate* purchaseDate;
@property(assign, getter=isSample) BOOL sample;
@property(retain) NSString* bundleIdentifier;
@property(assign) BOOL artworkIsPrerendered;
@property(readonly, assign) NSString* applicationIdentifier;
@property(copy) NSDictionary* videoDetailsDictionary;
@property(copy) NSString* seriesName;
@property(retain) NSNumber* seasonNumber;
@property(assign, getter=isRental) BOOL rental;
@property(copy) NSString* podcastType;
@property(retain) NSURL* podcastFeedURL;
@property(copy) NSString* podcastEpisodeGUID;
@property(retain) NSNumber* numberOfItemsInCollection;
@property(retain) NSNumber* numberOfCollectionsInCollectionGroup;
@property(copy) NSString* networkName;
@property(retain) NSNumber* indexInCollection;
@property(retain) NSNumber* episodeSortIdentifier;
@property(copy) NSString* episodeIdentifier;
@property(retain) NSNumber* durationInMilliseconds;
@property(assign) unsigned long long composerIdentifier;
@property(copy) NSString* composerName;
@property(assign, getter=isCompilation) BOOL compilation;
@property(retain) NSString* collectionName;
@property(retain) NSNumber* collectionIndexInCollectionGroup;
@property(assign) unsigned long long collectionIdentifier;
@property(copy) NSString* collectionArtistName;
@property(copy) NSString* documentTargetIdentifier;
@property(retain) NSURL* thumbnailImageURL;
@property(readonly, assign) SSItemImageCollection* thumbnailImageCollection;
@property(retain) NSString* transactionIdentifier;
@property(retain) NSString* title;
@property(retain) NSString* subtitle;
@property(copy) NSString* shortDescription;
@property(retain) NSNumber* releaseYear;
@property(retain) NSDate* releaseDate;
@property(copy) NSString* longDescription;
@property(retain) NSString* kind;
@property(assign) unsigned long long itemIdentifier;
@property(assign) unsigned long long genreIdentifier;
@property(retain) NSString* genre;
@property(retain) NSURL* fullSizeImageURL;
@property(copy) NSString* artistName;
@property(assign) unsigned long long artistIdentifier;
-(id)init;
-(id)initWithDictionary:(id)dictionary;
-(id)initWithItem:(id)item;
-(id)initWithItem:(id)item offer:(id)offer;
-(id)initWithKind:(id)kind;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)copyPropertyListEncoding;
-(id)initWithPropertyListEncoding:(id)propertyListEncoding;
-(id)copyWritableMetadata;
-(void)setValue:(id)value forMetadataKey:(id)metadataKey;
-(id)valueForMetadataKey:(id)metadataKey;
-(id)_dateValueForValue:(id)value;
-(id)_newImageCollectionWithURLString:(id)urlstring;
-(id)_newDateFormatter;
-(id)_releaseDateValue;
-(void)_setValueCopy:(id)copy forMetadataKey:(id)metadataKey;
-(id)_stringValueForValue:(id)value;
-(id)_urlValueForValue:(id)value;
-(id)_valueForFirstAvailableKey:(id)firstAvailableKey;
@end
