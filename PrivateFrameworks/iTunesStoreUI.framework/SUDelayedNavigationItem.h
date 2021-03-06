/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUNavigationItem.h"

@class UIView, UIBarButtonItem;

@interface SUDelayedNavigationItem : SUNavigationItem {
	UIBarButtonItem* _delayedLeftBarButtonItem;
	UIView* _delayedTitleView;
	UIBarButtonItem* _delayedRightBarButtonItem;
	UIBarButtonItem* _delayedSecondaryLeftBarButtonItem;
	BOOL _shouldDelayChanges;
	SUNavigationItem* _wrappedNavigationItem;
}
@property(assign, nonatomic) BOOL shouldDelayChanges;
@property(retain, nonatomic) SUNavigationItem* wrappedNavigationItem;
-(id)initWithNavigationItem:(id)navigationItem;
-(void)dealloc;
-(void)commitDelayedChanges;
-(id)internalTitleView;
-(id)leftBarButtonItem;
-(id)navigationBar;
-(id)rightBarButtonItem;
-(void)setLeftBarButtonItem:(id)item animated:(BOOL)animated;
-(void)setRightBarButtonItem:(id)item animated:(BOOL)animated;
-(void)setSecondaryLeftBarButtonItem:(id)item animated:(BOOL)animated;
-(void)setTitleView:(id)view;
-(id)titleView;
-(void)_prepareButtonItemForDisplay:(id)display;
-(void)_scheduleCommit;
@end

