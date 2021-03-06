/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EPMergedRegionScanner.h"
#import "EDProcessor.h"


__attribute__((visibility("hidden")))
@interface EPMergedRegionScanner : EDProcessor {
}
-(bool)isObjectSupported:(id)supported;
-(void)applyProcessorToObject:(id)object sheet:(id)sheet;
@end

@interface EPMergedRegionScanner (Private)
-(bool)processMergedRegion:(id)region inWorksheet:(id)worksheet;
@end

