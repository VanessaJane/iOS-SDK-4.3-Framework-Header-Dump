/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class NSString, NSMutableArray;

@interface SUScriptMediaLibrary : SUScriptObject {
	NSMutableArray* _musicPlayers;
}
@property(readonly, assign) NSString* queryPresetVideoPodcasts;
@property(readonly, assign) NSString* queryPresetTVShows;
@property(readonly, assign) NSString* queryPresetSongs;
@property(readonly, assign) NSString* queryPresetPodcasts;
@property(readonly, assign) NSString* queryPresetPlaylists;
@property(readonly, assign) NSString* queryPresetMusicVideos;
@property(readonly, assign) NSString* queryPresetMovies;
@property(readonly, assign) NSString* queryPresetGenres;
@property(readonly, assign) NSString* queryPresetComposers;
@property(readonly, assign) NSString* queryPresetCompilations;
@property(readonly, assign) NSString* queryPresetAudiobooks;
@property(readonly, assign) NSString* queryPresetArtists;
@property(readonly, assign) NSString* queryPresetAlbums;
@property(readonly, assign) NSString* playerTypeIPod;
@property(readonly, assign) NSString* playerTypeApplication;
@property(readonly, assign) NSString* mediaTypeVideoPodcast;
@property(readonly, assign) NSString* mediaTypeTVShow;
@property(readonly, assign) NSString* mediaTypePodcast;
@property(readonly, assign) NSString* mediaTypeMusicVideo;
@property(readonly, assign) NSString* mediaTypeMusic;
@property(readonly, assign) NSString* mediaTypeMovie;
@property(readonly, assign) NSString* mediaTypeAudiobook;
@property(readonly, assign) NSString* mediaTypeAnyVideo;
@property(readonly, assign) NSString* mediaTypeAnyAudio;
@property(readonly, assign) NSString* mediaTypeAny;
@property(readonly, assign) NSString* itemPropertyTrackNumber;
@property(readonly, assign) NSString* itemPropertyTrackCount;
@property(readonly, assign) NSString* itemPropertyTitle;
@property(readonly, assign) NSString* itemPropertyStoreID;
@property(readonly, assign) NSString* itemPropertySkipCount;
@property(readonly, assign) NSString* itemPropertyRating;
@property(readonly, assign) NSString* itemPropertyPodcastTitle;
@property(readonly, assign) NSString* itemPropertyPlaybackDuration;
@property(readonly, assign) NSString* itemPropertyPlayCount;
@property(readonly, assign) NSString* itemPropertyPersistentID;
@property(readonly, assign) NSString* itemPropertyMediaType;
@property(readonly, assign) NSString* itemPropertyLyrics;
@property(readonly, assign) NSString* itemPropertyLastPlayedDate;
@property(readonly, assign) NSString* itemPropertyIsCompilation;
@property(readonly, assign) NSString* itemPropertyGenre;
@property(readonly, assign) NSString* itemPropertyDiscNumber;
@property(readonly, assign) NSString* itemPropertyDiscCount;
@property(readonly, assign) NSString* itemPropertyComposer;
@property(readonly, assign) NSString* itemPropertyArtist;
@property(readonly, assign) NSString* itemPropertyAlbumTitle;
@property(readonly, assign) NSString* itemPropertyAlbumArtist;
+(id)webScriptNameForKey:(const char*)key;
+(id)webScriptNameForSelector:(SEL)selector;
-(id)init;
-(void)dealloc;
-(id)containsAdamID:(id)anId;
-(id)containsAdamIDs:(id)ids;
-(id)makeCollectionWithItems:(id)items;
-(id)makePickerWithMediaTypes:(id)mediaTypes;
-(id)makeQueryWithPreset:(id)preset;
-(id)musicPlayerForType:(id)type;
-(id)_className;
-(id)_copyQueryWithPreset:(id)preset;
-(BOOL)_isRestricted;
-(void)_loadNativeObject;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
@end
