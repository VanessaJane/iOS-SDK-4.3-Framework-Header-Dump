/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIWebView.h"
#import "UIView.h"
#import "UIScrollViewDelegate.h"

@class NSURLRequest, UIWebViewInternal;
@protocol UIWebViewDelegate;

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {
@private
	UIWebViewInternal* _internal;
}
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;
@property(assign, nonatomic) unsigned dataDetectorTypes;
@property(assign, nonatomic) BOOL detectsPhoneNumbers;
@property(assign, nonatomic) BOOL scalesPageToFit;
@property(readonly, assign, nonatomic, getter=isLoading) BOOL loading;
@property(readonly, assign, nonatomic, getter=canGoForward) BOOL canGoForward;
@property(readonly, assign, nonatomic, getter=canGoBack) BOOL canGoBack;
@property(readonly, retain, nonatomic) NSURLRequest* request;
@property(assign, nonatomic) id<UIWebViewDelegate> delegate;
-(void)_setScalesPageToFitViewportSettings;
-(void)_setRichTextReaderViewportSettings;
-(void)_updateViewSettings;
-(void)_webViewCommonInit:(BOOL)init;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)stringByEvaluatingJavaScriptFromString:(id)string;
-(void)loadRequest:(id)request;
-(void)loadHTMLString:(id)string baseURL:(id)url;
-(void)loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;
-(void)reload;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)setScale:(float)scale;
-(float)scale;
-(void)_updateCheckeredPattern;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)_frameOrBoundsChanged;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
-(void)_updateOpaqueAndBackgroundColor;
-(void)setOpaque:(BOOL)opaque;
-(void)setBackgroundColor:(id)color;
-(void)view:(id)view didSetFrame:(CGRect)frame oldFrame:(CGRect)frame3;
-(void)_updateScrollerViewForInputView:(id)inputView;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;
-(void)scrollViewDidZoom:(id)scrollView;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)_reportError:(id)error;
-(void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;
-(void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;
-(void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin;
-(void)_updateRequest;
-(void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;
-(void)webView:(id)view didCommitLoadForFrame:(id)frame;
-(void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;
-(id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;
-(id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;
-(void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;
-(void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;
-(void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;
-(void)webView:(id)view didFinishLoadForFrame:(id)frame;
-(void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;
-(void)webView:(id)view didFirstLayoutInFrame:(id)frame;
-(void)modalView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)webViewClose:(id)close;
-(void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;
-(BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;
-(id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;
-(void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;
-(id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;
-(void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;
-(void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;
-(void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;
-(void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;
-(BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;
-(CGImageRef)createSnapshotWithRect:(CGRect)rect;
-(CGImageRef)newSnapshotWithRect:(CGRect)rect;
-(void)saveGeolocation:(id)geolocation;
-(id)_browserView;
-(id)_documentView;
-(id)_scrollView;
-(void)_setDrawsCheckeredPattern:(BOOL)pattern;
-(void)_setWebSelectionEnabled:(BOOL)enabled;
-(void)_setDrawInWebThread:(BOOL)webThread;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)copy:(id)copy;
-(void)select:(id)select;
-(void)selectAll:(id)all;
@end

@interface UIWebView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

@interface UIWebView (UIWebViewPrintFormatter)
-(Class)_printFormatterClass;
@end

