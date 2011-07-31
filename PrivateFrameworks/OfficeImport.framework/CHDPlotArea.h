/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CHDPlotArea.h"

@class OADGraphicProperties, CHDChartTypesCollection, CHDAxesCollection;

__attribute__((visibility("hidden")))
@interface CHDPlotArea : XXUnknownSuperclass {
@private
	CHDChartTypesCollection* mChartTypes;
	CHDAxesCollection* mAxes;
	OADGraphicProperties* mGraphicProperties;
	bool mCategoryAxesReversed;
	bool mCategoryAxesReversedOverridden;
	bool mContainsVolumeStockType;
}
-(id)initWithChart:(id)chart;
-(void)dealloc;
-(id)chartTypes;
-(id)axes;
-(bool)hasSecondaryAxis;
-(bool)hasSecondaryYAxisDeleted;
-(void)markSecondaryAxes;
-(id)graphicProperties;
-(void)setGraphicProperties:(id)properties;
-(bool)containsVolumeStockType;
-(void)setContainsVolumeStockType:(bool)type;
@end

@interface CHDPlotArea (CHPCategoryAndSeriesReordering)
-(bool)isCategoryAxesReversed;
@end
