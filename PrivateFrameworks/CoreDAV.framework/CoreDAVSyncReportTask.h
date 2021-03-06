/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {
	NSString* _previousSyncToken;
	NSString* _newSyncToken;
	BOOL _moreToSync;
	BOOL _wasInvalidSyncToken;
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;
@property(readonly, assign) NSString* newSyncToken;
@property(readonly, assign) BOOL moreToSync;
@property(readonly, assign) BOOL wasInvalidSyncToken;
-(id)initWithPropertiesToFind:(id)find atURL:(id)url withDepth:(int)depth previousSyncToken:(id)token;
-(void)dealloc;
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(id)notFoundHREFs;
-(id)copyDefaultParserForContentType:(id)contentType;
-(void)finishCoreDAVTaskWithError:(id)error;
@end

