/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DACalendarObject.h"

@class DACalendarEvent, NSDate;

@interface DACalendarEventOccurrence : DACalendarObject {
}
@property(readonly, assign, nonatomic) BOOL canBeDetached;
@property(readonly, assign, nonatomic) NSDate* date;
@property(readonly, assign, nonatomic) DACalendarEvent* event;
-(void)removeAndFuture:(BOOL)future;
-(id)detachAndFuture:(BOOL)future;
@end
