/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class UIImageView, GKTableView, UIView;

@interface GKTableViewController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
@private
	unsigned _pendingReload : 1;
	unsigned _pendingAnimation : 1;
@protected
	int _tableViewStyle;
	BOOL _shouldDelayTableReloadForDeselectAnimation;
	BOOL _clearsSelectionOnViewWillAppear;
	GKTableView* _tableView;
	GKTableView* _portraitTableView;
	GKTableView* _landscapeTableView;
	UIView* _overlayTouchView;
	UIImageView* _bottomShadowView;
}
@property(readonly, assign, nonatomic) int tableViewStyle;
@property(assign, nonatomic) BOOL shouldDelayTableReloadForDeselectAnimation;
@property(assign, nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property(retain, nonatomic) GKTableView* tableView;
@property(retain, nonatomic) GKTableView* portraitTableView;
@property(retain, nonatomic) GKTableView* landscapeTableView;
@property(retain, nonatomic) UIView* overlayTouchView;
@property(retain, nonatomic) UIImageView* bottomShadowView;
-(id)initWithStyle:(int)style;
-(void)dealloc;
-(void)updateTableViewFrame:(id)frame;
-(void)updateBottomShadowFrame;
-(void)setupViewsWithOrientation:(int)orientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)loadView;
-(void)viewDidUnload;
-(BOOL)usesCrossfade;
-(void)reloadAllTables;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)reloadTableData;
-(id)searchTitle;
-(void)localeDidChangeNotification:(id)locale;
-(BOOL)shouldAdjustInsetsForKeyboard;
-(void)keyboardWillHideShow:(id)keyboard;
-(CGRect)rectToKeepVisibleAboveKeyboardWithinView:(id)keepVisibleAboveKeyboardWithinView;
-(void)updateTableInsetsForKeyboardHeight:(float)keyboardHeight;
-(id)_gkTableView:(id)view buttonCellWithTitle:(id)title theme:(id)theme;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)addTouchCaptureOverlayViewWithTarget:(id)target action:(SEL)action;
-(void)removeTouchCaptureOverlayView;
@end
