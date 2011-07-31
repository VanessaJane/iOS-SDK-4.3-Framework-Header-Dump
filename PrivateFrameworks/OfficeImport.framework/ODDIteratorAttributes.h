/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ODDIteratorAttributes : XXUnknownSuperclass {
@private
	int mAxis;
	int mPointType;
	BOOL mHideLastTransition;
	int mStart;
	unsigned mCount;
	int mStep;
}
-(int)axis;
-(void)setAxis:(int)axis;
-(int)pointType;
-(void)setPointType:(int)type;
-(BOOL)hideLastTransition;
-(void)setHideLastTransition:(BOOL)transition;
-(int)start;
-(void)setStart:(int)start;
-(unsigned)count;
-(void)setCount:(unsigned)count;
-(int)step;
-(void)setStep:(int)step;
@end
