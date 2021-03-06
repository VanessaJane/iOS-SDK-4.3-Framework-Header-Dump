/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "DASearchQueryConsumer.h"
#import "UITableViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDataSource.h"

@class ABGroupWrapper, NSString, DAContactsSearchQuery, NSArray, NSMutableArray;
@protocol ABServerSearchDataSourceDelegate, ABStyleProvider;

@interface ABServerSearchDataSource : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, DASearchQueryConsumer> {
@private
	ABGroupWrapper* _selectedGroupWrapper;
	NSArray* _currentSearchResults;
	NSArray* _currentResultsAsPeople;
	struct {
		unsigned showingCardForPerson : 1;
		unsigned wasKeyboardShowing : 1;
	} _flags;
	DAContactsSearchQuery* _currentSearchQuery;
	NSMutableArray* _incrementalSearchResults;
	NSString* _searchString;
	id<ABServerSearchDataSourceDelegate> _delegate;
}
@property(retain, nonatomic) ABGroupWrapper* selectedGroupWrapper;
@property(assign, nonatomic) id<ABServerSearchDataSourceDelegate> delegate;
@property(retain, nonatomic) NSString* searchString;
@property(readonly, assign, nonatomic) NSArray* currentResultsAsPeople;
@property(readonly, assign, nonatomic) id<ABStyleProvider> styleProvider;
-(void)_beginSearch;
-(void)_cancelBeginSearch;
-(void)_cancelSearchQuery;
-(void)_setCurrentSearchResults:(id)results;
-(void)_setCurrentSearchResults:(id)results error:(int)error;
-(void)_setCurrentSearchResults:(id)results callDelegate:(BOOL)delegate;
-(void)_setCurrentSearchResults:(id)results error:(int)error callDelegate:(BOOL)delegate;
-(int)_errorForDAStatusCode:(int)dastatusCode;
-(id)_localizedStringForError:(int)error;
-(void)dealloc;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)searchQuery:(id)query returnedResults:(id)results;
-(void)searchQuery:(id)query finishedWithError:(id)error;
-(void)beginNewSearchForString:(id)string;
-(void)cancelSearch;
-(void)clearSearchResults;
-(void*)personAtIndex:(unsigned)index;
@end

