/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MFMailMimePart.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MFMailMimePart : XXUnknownSuperclass {
}
+(BOOL)isRecognizedClassForContent:(id)content;
+(Class)attachmentClass;
-(id)decodeTextRichtext;
-(id)decodeTextEnriched;
-(id)decodeTextHtml;
-(id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned*)offset2 downloadIfNecessary:(BOOL)necessary;
-(id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned*)offset2;
-(id)htmlContent;
-(void)_setDecryptedMessageBody:(id)body isEncrypted:(BOOL)encrypted isSigned:(BOOL)aSigned;
-(id)decodeTextPlain;
-(id)decodeTextCalendar;
-(id)decodeMultipartSigned;
-(id)decodeMultipartAppledouble;
-(id)availableBodyData;
-(void)loadMoreHtmlContent;
-(id)fileWrapperForcingDownload:(BOOL)download;
-(id)fileWrapperForDecodedObject:(id)decodedObject withFileData:(id*)fileData;
-(void)configureFileWrapper:(id)wrapper;
-(void)storeData:(id)data inMessage:(id)message isComplete:(BOOL)complete;
-(BOOL)_shouldContinueDecodingProcess;
-(id)contentToOffset:(unsigned)offset resultOffset:(unsigned*)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL*)complete;
@end

@interface MFMailMimePart (DecodeMessage)
-(id)decodeMessageDelivery_status;
-(id)decodeMessageRfc822;
-(id)decodeMessagePartial;
-(id)decodeMessageExternal_body;
@end
