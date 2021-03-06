/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "ADJavaScriptObject.h"
#import "iAdCore-Structs.h"

@class NSString, NSArray, WebScriptObject;
@protocol ADJSODelegate;

@interface ADMailComposerJSO : ADJavaScriptObject {
	id<ADJSODelegate> _delegate;
	WebScriptObject* _listener;
	NSArray* _messageRecipients;
	NSString* _subject;
	NSString* _messageBody;
	NSArray* _attachmentDownloads;
	unsigned _attachmentDownloadCount;
	BOOL _isHTML;
}
@property(assign, nonatomic) id<ADJSODelegate> delegate;
@property(retain, nonatomic) WebScriptObject* listener;
@property(retain, nonatomic) NSArray* messageRecipients;
@property(retain, nonatomic) NSString* subject;
@property(retain, nonatomic) NSString* messageBody;
@property(retain, nonatomic) NSArray* attachmentDownloads;
@property(assign) unsigned attachmentDownloadCount;
@property(assign) BOOL isHTML;
+(id)scriptingKeys;
+(id)scriptSelectors;
+(void)initializeInContext:(OpaqueJSContext*)context;
-(void)dealloc;
-(id)init;
-(id)toRecipients;
-(void)setToRecipients:(id)recipients;
-(void)setMessageBody:(id)body isHTML:(BOOL)html;
-(void)setAttachments:(id)attachments;
-(void)reset;
-(void)send;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)mailComposerAttachmentDownloadDidFinish:(id)mailComposerAttachmentDownload;
-(void)mailComposerAttachmentDownload:(id)download didFailWithError:(id)error;
@end

