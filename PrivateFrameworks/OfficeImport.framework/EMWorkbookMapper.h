/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "EMWorkbookMapper.h"
#import "CMMapperRoot.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, EDWorkbook, OIXMLDocument, OIXMLElement, NSString, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {
@private
	unsigned mRealSheetCount;
	int mWidth;
	int mHeight;
	EDWorkbook* edWorkbook;
	NSMutableArray* mWorksheetUrls;
	NSMutableArray* mWorksheetNames;
	NSMutableArray* mWorksheetGuids;
	NSString* mResourceUrlPrefix;
	NSString* mResourceUrlProtocol;
	NSString* mStyleSheetGuid;
	CMArchiveManager* mArchiver;
	NSString* mFileName;
	unsigned mSheetIndex;
	bool mIsFirstMappedSheet;
	bool mIsFrameset;
	OIXMLDocument* mXhtmlDoc;
	OIXMLElement* mBodyElement;
	OIXMLDocument* mTabBarDoc;
	NSString* mTabBarURL;
	NSMutableArray* mSheetURLs;
	float mTabPosition;
	unsigned mNumberOfMappedSheets;
	BOOL mHasPushedHeader;
	BOOL mHasPushedFirstSheet;
	BOOL mLoadingMessageVisible;
}
+(void)setBaseDate1904:(BOOL)a1904;
+(id)baseDate;
+(id)cssStyleCache;
+(id)borderStyleCache;
+(id)borderWidthCache;
-(id)initWithEDWorkbook:(id)edworkbook archiver:(id)archiver;
-(void)dealloc;
-(id)workbook;
-(void)setFileName:(id)name;
-(id)fileName;
-(id)blipAtIndex:(unsigned)index;
-(bool)isMultiPage;
-(id)archiver;
-(id)documentTitle;
-(id)styleMatrix;
-(BOOL)hasMultipleSheets;
-(CGSize)pageSizeForDevice;
-(id)_createMainPageAndReturnFront;
-(id)_mainPageBack;
-(void)_pushTabForSheet:(id)sheet atIndex:(unsigned)index;
-(void)startMappingWithState:(id)state;
-(id)_createStringForSheet:(id)sheet atIndex:(unsigned)index withState:(id)state andMapper:(id)mapper;
-(void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;
-(void)finishMappingWithState:(id)state;
@end

@interface EMWorkbookMapper (Private)
-(id)createSheetMapperWithEdSheet:(id)edSheet;
-(void)mapBodyStyleAt:(id)at;
@end
