/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OABPropertiesManager.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABDefaultsManager : XXUnknownSuperclass <OABPropertiesManager> {
}
-(BOOL)isFilled;
-(EshColor)fillFgColor;
-(EshColor)fillBgColor;
-(BOOL)isStroked;
-(EshColor)strokeFgColor;
-(EshColor)strokeBgColor;
-(EshColor)shadowColor;
-(int)fillType;
-(long)fillFgAlpha;
-(long)fillBgAlpha;
-(long)fillAngle;
-(long)fillFocus;
-(long)fillFocusLeft;
-(long)fillFocusTop;
-(long)fillFocusRight;
-(long)fillFocusBottom;
-(const EshTablePropVal<EshGradientStop>*)fillGradientColors;
-(unsigned long)fillBlipID;
-(EshBlip*)fillBlipDataReference;
-(id)fillBlipName;
-(int)strokeFillType;
-(unsigned long)strokeFillBlipID;
-(id)strokeFillBlipName;
-(long)strokeFgAlpha;
-(long)strokeWidth;
-(long)strokeMiterLimit;
-(int)strokeCompoundType;
-(int)strokePresetDash;
-(const EshTablePropVal<long int>*)strokeCustomDash;
-(int)strokeCapStyle;
-(int)strokeJoinStyle;
-(int)strokeStartArrowType;
-(int)strokeStartArrowWidth;
-(int)strokeStartArrowLength;
-(int)strokeEndArrowType;
-(int)strokeEndArrowWidth;
-(int)strokeEndArrowLength;
-(BOOL)isShadowed;
-(int)shadowType;
-(long)shadowAlpha;
-(long)shadowOffsetX;
-(long)shadowOffsetY;
-(long)shadowSoftness;
-(BOOL)isFillOK;
-(BOOL)isStrokeOK;
-(BOOL)isShadowOK;
-(BOOL)isTextPath;
-(id)textPathUnicodeString;
-(int)textPathTextAlignment;
-(long)textPathFontSize;
-(id)textPathFontFamily;
-(BOOL)textPathBold;
-(BOOL)textPathItalic;
-(BOOL)textPathUnderline;
-(BOOL)textPathSmallcaps;
-(BOOL)textPathStrikethrough;
-(BOOL)hidden;
@end
