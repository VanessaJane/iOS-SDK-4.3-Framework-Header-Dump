/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDWPLayout.h"
#import "iWorkImport-Structs.h"
#import "GQDWPBlockList.h"

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPLayout : GQDWPBlockList {
@private
	GQDSStyle* mLayoutStyle;
}
-(void)dealloc;
-(id)layoutStyle;
@end

@interface GQDWPLayout (Private)
-(int)readAttributesFromReader:(xmlTextReader*)reader processor:(id)processor;
@end
