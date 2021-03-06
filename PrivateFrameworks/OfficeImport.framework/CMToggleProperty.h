/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


__attribute__((visibility("hidden")))
@interface CMToggleProperty : CMProperty {
@private
	int wdValue;
}
-(id)initWithCMTogglePropertyValue:(int)cmtogglePropertyValue;
-(int)value;
-(int)compareValue:(id)value;
-(void)resolveWithBaseProperty:(id)baseProperty;
-(id)mapBold;
-(id)mapItalic;
-(id)mapStrikeTrough;
-(id)cssStringForName:(id)name;
@end

