/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "RTF_CMArchiveManager.h"

@class NSMutableDictionary, NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface RTF_CMDictArchiveManager : RTF_CMArchiveManager {
@private
	NSMutableString* mCssString;
	NSMutableDictionary* mStyleCache;
	NSMutableDictionary* mResources;
	NSString* mPrefix;
	NSString* mResourceUrlProtocol;
	NSMutableString* mMainHtml;
	NSString* mName;
	bool mIsFrameset;
}
-(id)initWithName:(id)name resourcePathPrefix:(id)prefix;
-(void)dealloc;
-(void)setIsFrameset;
-(id)name;
-(id)newResourceWithName:(id)name;
-(void)pushData:(id)data toPath:(id)path;
-(void)pushText:(id)text toPath:(id)path;
-(id)copyDictionaryWithSizeInfos:(BOOL)sizeInfos;
-(int)resourceCount;
-(id)resourceUrlProtocol;
-(id)addCssStyle:(id)style;
-(void)addCssStyle:(id)style withName:(id)name;
-(void)pushCssToPath:(id)path;
-(id)cssStylesheetString;
@end

