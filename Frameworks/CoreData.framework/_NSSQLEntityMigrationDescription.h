/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreData-Structs.h"

@class NSEntityMapping, NSMutableArray, NSSQLEntity, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSSQLEntityMigrationDescription : XXUnknownSuperclass {
@private
	NSEntityMapping* _entityMapping;
	NSMutableDictionary* _sqlValuesByColumnName;
	NSMutableDictionary* _sourceEntitiesByToOneWithNewEntityKey;
	NSMutableDictionary* _mappingsByName;
	NSSQLEntity* _dstEntity;
	NSSQLEntity* _srcEntity;
	int _migrationType;
	NSMutableArray* _addedManyToManys;
	NSMutableArray* _removedManyToManys;
	NSMutableArray* _transformedManyToManys;
	NSMutableArray* _processedTransforms;
	NSMutableArray* _pendingTransforms;
}
@property(readonly, assign) NSSQLEntity* sourceEntity;
@property(readonly, assign) NSSQLEntity* destinationEntity;
@property(readonly, assign) NSEntityMapping* entityMapping;
@property(readonly, assign) int migrationType;
-(id)initWithEntityMapping:(id)entityMapping sourceEntity:(id)entity destinationEntity:(id)entity3;
-(void)dealloc;
-(id)mappingsByName;
-(void)_generateSQLValueMappingsWithMigrationContext:(NSSQLMigrationContext)migrationContext;
-(id)sourceEntitiesByToOneWithNewEntityKey;
-(void)_populateSQLValuesForDestinationToOne:(id)one fromSourceToOne:(id)one2;
-(id)_unmappedRelationshipForFormerlyVirtualToOne:(id)one migrationContext:(NSSQLMigrationContext)context;
-(void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(NSSQLMigrationContext)migrationContext;
-(void)_populateSQLValuesByPropertyFromTransforms:(id)transforms migrationContext:(NSSQLMigrationContext)context;
-(id)sqlValueForColumnName:(id)columnName migrationContext:(NSSQLMigrationContext)context;
-(id)addedManyToManys;
-(id)removedManyToManys;
-(id)transformedManyToManys;
-(id)nextPropertyTransform;
@end
