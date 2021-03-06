/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSPredefinedValue.h"
#import "ICSFreeBusyTypeParameter.h"


@interface ICSFreeBusyTypeParameter : ICSPredefinedValue {
}
+(id)freeBusyTypeParameterFromCode:(int)code;
@end

@interface ICSFreeBusyTypeParameter (iCalendarImport)
+(id)freeBusyTypeParameterFromICSString:(id)icsstring;
@end

