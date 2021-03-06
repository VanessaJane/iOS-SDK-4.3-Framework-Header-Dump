/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3MusicLibrary.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, ML3CacheGenerator, ML3MusicLibrary_SQLiteDatabaseContext, ML3Container, NSArray;

@interface ML3MusicLibrary : XXUnknownSuperclass {
@private
	ML3MusicLibrary_SQLiteDatabaseContext* _mainDatabaseContext;
	ML3MusicLibrary_SQLiteDatabaseContext* _backgroundDatabaseContext;
	dispatch_queue_s* _backgroundQueue;
	NSString* _path;
	NSString* _notifyName;
	NSString* _nonContentsNotifyName;
	int _notifyToken;
	int _nonContentsNotifyToken;
	int _downloadFinishedNotifyToken;
	BOOL _enableWrites;
	BOOL _hasEverConnectedToDatabase;
	id _revertToBackupObserver;
	id _mcSettingsObserver;
}
@property(readonly, copy) NSString* path;
@property(readonly, assign, nonatomic) BOOL hasEverConnectedToDatabase;
@property(readonly, assign, nonatomic) unsigned long long syncGenerationID;
@property(readonly, assign) BOOL requiresPostProcessing;
@property(readonly, assign) BOOL requiresiTunesCommandsProcessing;
@property(readonly, assign) BOOL mediaRestrictionEnabled;
@property(readonly, assign) ML3CacheGenerator* cacheGenerator;
@property(readonly, assign) NSArray* preferredSubtitleTracks;
@property(readonly, assign) NSArray* preferredAudioTracks;
@property(readonly, assign) ML3Container* purchasedTracksPlaylist;
@property(readonly, copy) NSArray* localizedSectionIndexTitles;
+(void)initialize;
+(BOOL)importationEnabled;
+(void)setImportationEnabled:(BOOL)enabled;
+(void)mediaFolderPathDidChangeNotification:(id)mediaFolderPath;
+(id)sharedLibrary;
+(id)mainLibraryPath;
+(void)attachAuxiliaryDatabases:(sqlite3*)databases;
+(void)limitCacheSize:(sqlite3*)size;
+(void)closeDatabaseHandle:(sqlite3*)handle;
+(void)ensureIndexExists:(id)exists onHandle:(sqlite3*)handle entityClass:(Class)aClass indexableSQL:(id)sql;
+(void)ensureIndexExists:(id)exists onHandle:(sqlite3*)handle entityClass:(Class)aClass properties:(id)properties;
+(void)ensureSectionAndListIndicesExist:(id)exist onHandle:(sqlite3*)handle entityClass:(Class)aClass filteredProperties:(id)properties sectionProperties:(id)properties5 orderingProperties:(id)properties6 representativeItemProperty:(id)property;
+(void)enumerateSortMapTablesUsingBlock:(id)block;
+(BOOL)updateSortMapOnHandle:(sqlite3*)handle;
+(void)ensureIndicesExistOnHandle:(sqlite3*)handle;
+(CFDictionaryRef)threadLocalCFMutableDictionaryForKey:(id)key withValueCallbacks:(const XXStruct_MSEYlC*)valueCallbacks;
+(BOOL)statementHasRowAfterStepping:(sqlite3_stmt*)stepping;
+(BOOL)statementDidFinishAfterStepping:(sqlite3_stmt*)statement;
+(void)stepStatement:(sqlite3_stmt*)statement hasRow:(BOOL*)row didFinish:(BOOL*)finish;
+(void)prepareStatementForSQL:(id)sql usingHandle:(sqlite3*)handle block:(id)block;
+(BOOL)executeSQL:(id)sql usingHandle:(sqlite3*)handle;
+(void)registerFunctionsOnHandle:(sqlite3*)handle;
+(void)registerCustomCallbacksOnHandle:(sqlite3*)handle;
-(id)initWithPath:(id)path enableWrites:(BOOL)writes;
-(void)dealloc;
-(id)entityForClass:(Class)aClass persistentID:(long long)anId;
-(void)_debugLoggingOptionsDidChangeNotification:(id)_debugLoggingOptions;
-(BOOL)canWriteToDatabase;
-(int)openDatabaseHandle:(sqlite3**)handle;
-(BOOL)executeSQL:(id)sql;
-(long long)addStringToSortMap:(id)sortMap;
-(long long)insertStringIntoSortMapNoTransaction:(id)transaction;
-(BOOL)updateSortMap;
-(void)ensureIndicesExist;
-(void)populateStaticItemsOfDynamicContainers;
-(id)newDatabaseContext;
-(id)backgroundQueue_backgroundDatabaseContext;
-(void)reconnectToDatabase;
-(void)accessDatabaseContextUsingBlock:(id)block;
-(void)accessSortKeyBuilder:(id)builder;
-(void)prepareStatementForSQL:(id)sql usingBlock:(id)block;
-(void)performOperationInBackground:(id)background;
-(void)performTransactionWithBlock:(id)block;
-(id)localizedSectionHeaderForSectionIndex:(unsigned)sectionIndex;
-(unsigned)sectionIndexTitleIndexForSectionIndex:(unsigned)sectionIndex;
-(void)notifyContentsDidChange;
-(void)notifyNonContentsPropertyDidChange;
-(void)saveTrackMetadata;
-(void)savePlaylists;
-(void)createTriggers;
-(void)dropOldTriggers;
-(void)postChangeNotificationAndScheduleFlush;
-(void)postNonContentsChangeNotificationAndScheduleFlush;
-(int)_executediTunesCommandsVersion;
-(BOOL)_mustProcessLanguageChange;
@end

@interface ML3MusicLibrary (HomeSharingAdditions)
+(void)buildDatabaseTablesUsingHandle:(sqlite3*)handle;
+(void)buildDatabaseFromHomeSharingConnection:(id)homeSharingConnection atPath:(id)path completionHandler:(id)handler;
+(void)buildDatabaseFromHomeSharingConnection:(id)homeSharingConnection atPath:(id)path completionHandler:(id)handler progressHandler:(id)handler4;
-(void)fillContainerForHomeSharingConnection:(id)homeSharingConnection containerID:(long long)anId completionHandler:(id)handler;
-(void)checkForChangesOnConnection:(id)changesOnConnection completionHandler:(id)handler;
@end

@interface ML3MusicLibrary (ProcessingAdditions)
+(id)selectStatementValueForSQL:(id)sql defaultValue:(id)value usingHandle:(sqlite3*)handle;
+(BOOL)executeUsingHandle:(sqlite3*)handle eachSQL:(id)sql;
+(BOOL)dropOldItemTriggersUsingHandle:(sqlite3*)handle;
+(BOOL)createItemTriggersUsingHandle:(sqlite3*)handle;
+(BOOL)dropOldContainerTriggersUsingHandle:(sqlite3*)handle;
+(void)dropOldTriggersUsingHandle:(sqlite3*)handle;
+(BOOL)createContainerTriggersUsingHandle:(sqlite3*)handle;
+(void)createTriggersUsingHandle:(sqlite3*)handle;
-(BOOL)_schemaHasDefinedTable:(id)table;
-(id)selectStatementValueForSQL:(id)sql defaultValue:(id)value;
-(BOOL)executeITunesCommands;
-(void)updateActivePlaylistNamesForCurrentLanguage;
-(void)updateOrderingLanguagesForCurrentLangauge;
-(void)executeITDBPostProcessing;
@end

