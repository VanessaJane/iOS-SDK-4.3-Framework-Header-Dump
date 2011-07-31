/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSPersistentStoreCache : XXUnknownSuperclass {
@private
	id _externalData;
	unsigned _capacity;
}
+(void)initialize;
-(id)init;
-(void)_growRegistrationCollectionTo:(unsigned)to;
-(void)dealloc;
-(void)forgetAllExternalData;
-(void)decrementRefCountForObjectID:(id)objectID;
-(void)incrementRefCountForObjectID:(id)objectID;
-(int)refCountForObjectID:(id)objectID;
-(void)forgetExternalDataForObjectID:(id)objectID;
-(void)registerExternalData:(id)data forObjectID:(id)objectID options:(unsigned)options;
-(id)externalDataForObjectID:(id)objectID timestamp:(double)timestamp;
-(unsigned)optionsForObjectID:(id)objectID;
-(BOOL)shouldRefreshObjectForObjectID:(id)objectID;
-(BOOL)shouldPersistObjectForObjectID:(id)objectID;
-(void)registerExternalData:(id)data forSourceObjectID:(id)sourceObjectID key:(id)key options:(unsigned)options andTimestamp:(double)timestamp;
-(id)externalDataForSourceObjectID:(id)sourceObjectID key:(id)key timestamp:(double)timestamp;
@end
