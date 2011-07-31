/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicate.h"

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
@private
	void* _reserved2;
	unsigned _type;
	NSArray* _subpredicates;
}
+(id)andPredicateWithSubpredicates:(id)subpredicates;
+(id)orPredicateWithSubpredicates:(id)subpredicates;
+(id)notPredicateWithSubpredicate:(id)subpredicate;
+(id)_operatorForType:(unsigned)type;
-(id)initWithType:(unsigned)type subpredicates:(id)subpredicates;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(unsigned)compoundPredicateType;
-(id)_predicateOperator;
-(id)subpredicates;
-(id)_subpredicateDescription:(id)description;
-(id)predicateFormat;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;
-(void)_acceptSubpredicates:(id)subpredicates flags:(unsigned)flags;
-(void)acceptVisitor:(id)visitor flags:(unsigned)flags;
-(id)predicateWithSubstitutionVariables:(id)substitutionVariables;
-(id)predicateOperator;
@end
