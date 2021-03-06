/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLProperty.h"

@class NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLRelationship : NSSQLProperty {
@private
	NSSQLEntity* _destinationEntity;
	NSSQLRelationship* _inverse;
}
-(id)initWithEntity:(id)entity propertyDescription:(id)description;
-(id)initForReadOnlyFetchWithEntity:(id)entity propertyDescription:(id)description;
-(void)dealloc;
-(id)relationshipDescription;
-(id)foreignKey;
-(id)sourceEntity;
-(id)destinationEntity;
-(id)correlationTableName;
-(id)inverseRelationship;
-(void)_setInverseRelationship:(id)relationship;
-(void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;
@end

