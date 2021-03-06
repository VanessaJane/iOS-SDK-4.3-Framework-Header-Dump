/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QLPreviewParts.h"
#import "QuickLook-Structs.h"


@interface QLBasePreviewParts : QLPreviewParts {
}
+(id)_officeUTIs;
+(id)_iWorkUTIs;
+(id)_rtfUTIs;
+(id)_csvUTIs;
+(BOOL)canConvertDocumentType:(id)type;
+(/*function-pointer*/ void*)urlCallbackForUTI:(id)uti;
+(/*function-pointer*/ void*)dataCallbackForUTI:(id)uti andSize:(unsigned)size;
-(void)computePreview;
@end

