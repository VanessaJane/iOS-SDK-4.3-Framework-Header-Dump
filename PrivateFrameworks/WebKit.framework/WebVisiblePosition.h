/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WebVisiblePosition.h"


__attribute__((visibility("hidden")))
@interface WebVisiblePosition : XXUnknownSuperclass {
@private
	WebObjectInternal* _internal;
}
@property(assign, nonatomic) int affinity;
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
-(int)compare:(id)compare;
-(int)distanceFromPosition:(id)position;
-(id)description;
-(int)textDirection;
-(BOOL)directionIsDownstream:(int)downstream;
-(BOOL)withinTextUnitOfGranularity:(int)granularity;
-(id)enclosingTextUnitOfGranularity:(int)granularity;
-(id)positionWithinAdjacentTextUnitOfGranularity:(int)granularity inDirection:(int)direction;
-(id)boundaryOfEnclosingTextUnitOfGranularity:(int)granularity inDirection:(int)direction;
-(id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount withAffinityDownstream:(BOOL)affinityDownstream;
-(id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount;
-(BOOL)atBoundaryOfGranularity:(int)granularity inDirection:(int)direction;
-(id)nextCharacterBoundaryInDirection:(int)direction;
-(id)nextWordBoundaryInDirection:(int)direction;
-(id)nextSentenceBoundaryInDirection:(int)direction;
-(id)nextLineBoundaryInDirection:(int)direction;
-(id)nextParagraphBoundaryInDirection:(int)direction;
-(id)nextDocumentBoundaryInDirection:(int)direction;
-(id)positionOfNextBoundaryOfGranularity:(int)granularity inDirection:(int)direction;
-(BOOL)withinTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;
-(id)enclosingTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;
-(id)positionAtStartOrEndOfWord;
-(BOOL)isEditable;
-(BOOL)requiresContextForWordBoundary;
-(BOOL)atAlphaNumericBoundaryInDirection:(int)direction;
@end

@interface WebVisiblePosition (Internal)
+(id)_wrapVisiblePosition:(VisiblePosition)position;
+(id)_wrapVisiblePositionIfValid:(VisiblePosition)valid;
-(VisiblePosition)_visiblePosition;
@end
