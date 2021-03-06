/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "_MFComposeRecipientViewDelegate.h"
#import "MFContactsSearchConsumer.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CKOverlayViewProtocol.h"

@class UIScrollView, UITableView, MFSearchShadowView, MFContactsSearchResultsModel, MFContactsSearchManager, NSArray, NSNumber, _MFComposeRecipientView;

@interface CKRecipientSelectionView : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, CKOverlayViewProtocol, MFContactsSearchConsumer, _MFComposeRecipientViewDelegate> {
	_MFComposeRecipientView* _toField;
	UIScrollView* _toFieldScrollingView;
	UITableView* _searchResultsTable;
	MFSearchShadowView* _shadowView;
	BOOL _showingSearchField;
	id _delegate;
	MFContactsSearchResultsModel* _searchResults;
	MFContactsSearchManager* _searchManager;
	NSNumber* _currentSearchTaskID;
	NSArray* _abProperties;
	void* _addressBook;
}
@property(assign, nonatomic) id delegate;
@property(readonly, assign, nonatomic, getter=isShowingSearchField) BOOL showingSearchField;
-(id)initWithFrame:(CGRect)frame ABProperties:(id)properties;
-(void)dealloc;
-(BOOL)hasText;
-(id)recipients;
-(void)reset;
-(id)toField;
-(void)setABProperties:(id)properties;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)composeRecipientView:(id)view textDidChange:(id)text;
-(void)composeRecipientView:(id)view requestDeleteRecipientAtIndex:(int)index;
-(void)composeRecipientViewDidFinishEnteringRecipient:(id)composeRecipientView;
-(void)composeRecipientViewReturnPressed:(id)pressed;
-(id)composeRecipientView:(id)view composeRecipientForAddress:(id)address;
-(id)composeRecipientView:(id)view composeRecipientForRecord:(void*)record property:(int)property identifier:(int)identifier;
-(void)composeRecipientView:(id)view didChangeSize:(CGSize)size;
-(void)composeRecipientViewRequestAddRecipient:(id)recipient;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)composeRecipientView;
-(void)animationDidStop:(id)animation;
-(void)_updateContentSize;
-(void)reflow;
-(void)reallyResignFirstResponder;
-(void)_hideSearchField:(BOOL)field;
-(void)_showSearchField:(BOOL)field;
-(void)_searchWithText:(id)text;
-(float)heightWithoutSeparator;
-(void)_updateShowingSearch;
-(void)consumeSearchResults:(id)results type:(int)type taskID:(id)anId;
-(void)finishedSearchingForType:(int)type;
-(void)finishedTaskWithID:(id)anId;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)handleAddressBookChangedNotification:(id)notification;
@end

