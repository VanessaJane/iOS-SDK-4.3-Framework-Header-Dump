/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSBinaryObjectStoreFile : XXUnknownSuperclass {
@private
	int _databaseVersion;
	NSDictionary* _fullMetadata;
	unsigned long long _primaryKeyGeneration;
	NSMutableDictionary* _mapData;
}
-(void)dealloc;
-(int)databaseVersion;
-(void)setDatabaseVersion:(int)version;
-(id)fullMetadata;
-(void)setFullMetadata:(id)metadata;
-(unsigned long long)primaryKeyGeneration;
-(void)setPrimaryKeyGeneration:(unsigned long long)generation;
-(id)mapData;
-(void)setMapData:(id)data;
-(void)clearCurrentValues;
-(BOOL)readBinaryStoreFromData:(id)data originalPath:(id)path error:(id*)error;
-(BOOL)readFromFile:(id)file error:(id*)error;
-(BOOL)writeMetadataToFile:(id)file error:(id*)error;
-(BOOL)readMetadataFromFile:(id)file error:(id*)error;
-(BOOL)_writeMetadataData:(id)data andMapDataData:(id)data2 toFile:(id)file error:(id*)error;
-(BOOL)writeToFile:(id)file error:(id*)error;
@end
