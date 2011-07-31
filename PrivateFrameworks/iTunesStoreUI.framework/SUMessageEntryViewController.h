/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUMessageEntryViewDelegate.h"
#import "SUViewController.h"

@class SUMessageEntryView, NSArray, NSString, UIImagePickerController;
@protocol SUMessageEntryViewControllerDelegate;

@interface SUMessageEntryViewController : SUViewController <SUMessageEntryViewDelegate> {
	id<SUMessageEntryViewControllerDelegate> _delegate;
	UIImagePickerController* _imagePicker;
	NSArray* _imagePickerMediaTypes;
	SUMessageEntryView* _messageEntryView;
}
@property(assign, nonatomic) id<SUMessageEntryViewControllerDelegate> delegate;
@property(copy, nonatomic) NSArray* imagePickerMediaTypes;
@property(copy, nonatomic) NSString* sendButtonTitle;
@property(assign, nonatomic, getter=isSendButtonEnabled) BOOL sendButtonEnabled;
@property(assign, nonatomic, getter=isPhotoButtonEnabled) BOOL photoButtonEnabled;
-(id)init;
-(void)dealloc;
-(void)clearMessage;
-(id)copyMessagePartsWithUTI:(id)uti;
-(void)focusMessageField;
-(id)copyScriptViewController;
-(void)loadView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)messageEntryViewDidChange:(id)messageEntryView;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)messageEntryViewPhotoButtonAction:(id)action;
-(void)messageEntryViewSendButtonAction:(id)action;
-(BOOL)_allowsCamera;
-(BOOL)_allowsVideoCamera;
-(void)_dismissImagePickerAnimated:(BOOL)animated;
-(id)_messageEntryView;
-(void)_promptForSourceType;
-(void)_reloadMessageEntryView;
-(void)_showImagePickerForSourceType:(unsigned)sourceType;
@end
