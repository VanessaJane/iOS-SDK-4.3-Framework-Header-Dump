/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"
#import "OADColorPalette.h"
#import "EDColorsCollection.h"


__attribute__((visibility("hidden")))
@interface EDColorsCollection : EDCollection <OADColorPalette> {
@private
	unsigned mDefaultColorsCount;
}
+(bool)isSystemColorId:(unsigned)anId;
+(int)systemColorIdFromIndex:(unsigned)index;
+(unsigned)xlColorIndexFromCPSystemColorIDEnum:(int)cpsystemColorIDEnum;
+(int)oadSchemeColorIdFromThemeIndex:(int)themeIndex;
-(id)initWithDefaultSetup:(bool)defaultSetup;
-(unsigned)defaultColorsCount;
-(id)colorWithIndex:(unsigned)index;
-(unsigned)addOrEquivalentColorExcludingDefaults:(id)defaults;
-(void)addDefaultPalette;
-(void)addColors:(const unsigned*)colors count:(unsigned long)count defaultColors:(const unsigned*)colors3 defaultCount:(unsigned)count4;
-(void)addPalette:(const unsigned*)palette paletteSize:(unsigned long)size paletteX:(const unsigned*)x paletteXSize:(unsigned)size4;
@end

@interface EDColorsCollection (Private)
-(void)setupDefaults;
@end

