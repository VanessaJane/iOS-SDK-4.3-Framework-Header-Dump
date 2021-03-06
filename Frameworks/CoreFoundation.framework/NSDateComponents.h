/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"


@interface NSDateComponents : NSObject <NSCopying, NSCoding> {
}
+(id)allocWithZone:(NSZone*)zone;
-(id)init;
-(void)dealloc;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)calendar;
-(id)timeZone;
-(int)era;
-(int)year;
-(int)month;
-(int)day;
-(int)hour;
-(int)minute;
-(int)second;
-(int)week;
-(int)weekday;
-(int)weekdayOrdinal;
-(int)quarter;
-(int)nanosecond;
-(void)setCalendar:(id)calendar;
-(void)setTimeZone:(id)zone;
-(void)setEra:(int)era;
-(void)setYear:(int)year;
-(void)setMonth:(int)month;
-(void)setDay:(int)day;
-(void)setHour:(int)hour;
-(void)setMinute:(int)minute;
-(void)setSecond:(int)second;
-(void)setWeek:(int)week;
-(void)setWeekday:(int)weekday;
-(void)setWeekdayOrdinal:(int)ordinal;
-(void)setQuarter:(int)quarter;
-(void)setNanosecond:(int)nanosecond;
-(id)date;
@end

