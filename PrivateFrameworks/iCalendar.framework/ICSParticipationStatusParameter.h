/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSPredefinedValue.h"
#import "ICSParticipationStatusParameter.h"


@interface ICSParticipationStatusParameter : ICSPredefinedValue {
}
+(id)participationStatusParameterFromCode:(int)code;
@end

@interface ICSParticipationStatusParameter (ICSWriter)
-(void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;
@end

@interface ICSParticipationStatusParameter (iCalendarImport)
+(id)participationStatusParameterFromICSString:(id)icsstring;
@end
