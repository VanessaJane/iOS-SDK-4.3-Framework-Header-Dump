/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "LibraryStore.h"
#import "Message-Structs.h"

@class DAFolder;

@interface MFDAMessageStore : LibraryStore {
	DAFolder* _DAFolder;
}
-(id)initWithMailboxUid:(id)mailboxUid readOnly:(BOOL)only;
-(id)_folderIDForFetching;
-(int)fetchNumMessages:(unsigned)messages preservingUID:(id)uid fetchType:(int)type synchronize:(BOOL)synchronize compact:(BOOL)compact;
-(int)fetchMessagesMatchingCriterion:(id)criterion limit:(unsigned)limit;
-(void)issueFlagUpdates:(id)updates forMessages:(id)messages;
-(void)setServerFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
-(id)willSetFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
-(id)setFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
-(BOOL)allowsAppend;
-(id)messageForRemoteID:(id)remoteID;
-(void)deleteMessagesOlderThanNumberOfDays:(int)days compact:(BOOL)compact;
-(void)purgeMessagesBeyondLimit:(unsigned)limit keepingMessage:(id)message;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)rowID limit:(unsigned)limit;
-(BOOL)shouldSetSummaryForMessage:(id)message;
-(BOOL)shouldDownloadBodyDataForMessage:(id)message;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)mimepart;
-(id)loadMeetingExternalIDForMessage:(id)message;
-(id)loadMeetingDataForMessage:(id)message;
-(id)_fetchBodyDataForSearchResult:(id)searchResult format:(int)format streamConsumer:(id)consumer;
-(id)_fetchBodyDataForNormalMessage:(id)normalMessage format:(int)format part:(id)part streamConsumer:(id)consumer;
-(id)_fetchBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available downloadIfNecessary:(BOOL)necessary partial:(BOOL*)partial;
-(id)_fetchDataForMimePart:(id)mimePart range:(NSRange)range isComplete:(BOOL*)complete;
-(id)defaultAlternativeForPart:(id)part;
-(id)bestAlternativeForPart:(id)part;
-(BOOL)canFetchSearchResults;
-(BOOL)canDeleteMessage:(id)message;
-(id)_additionalHeadersForAction:(int)action ofMessage:(id)message;
-(id)additionalHeadersForReplyOfMessage:(id)message;
-(id)additionalHeadersForForwardOfMessage:(id)message;
@end
