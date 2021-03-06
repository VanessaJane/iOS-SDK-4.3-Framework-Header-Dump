/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MKMapView, UIActivityIndicatorView, UIView, UIToolbar, UINavigationBar, UIImageView;

@interface MKUserTrackingBarButtonItem : XXUnknownSuperclass {
@private
	MKMapView* _mapView;
	UIActivityIndicatorView* _progressIndicator;
	UIImageView* _imageView;
	int _state;
	UIToolbar* _toolbar;
	UINavigationBar* _navigationBar;
	UIView* _associatedView;
}
@property(retain, nonatomic) MKMapView* mapView;
@property(retain, nonatomic) UIActivityIndicatorView* _progressIndicator;
@property(retain, nonatomic) UIImageView* _imageView;
@property(assign, nonatomic) int _state;
@property(retain, nonatomic) UIToolbar* _toolbar;
@property(retain, nonatomic) UINavigationBar* _navigationBar;
@property(retain, nonatomic) UIView* _associatedView;
+(id)_trackingEmpty;
+(id)_trackingNoneImage;
+(id)_trackingFollowImage;
+(id)_trackingFollowWithHeadingImage;
+(Class)_activityIndicatorClass;
+(int)_activityIndicatorStyle;
-(id)initWithMapView:(id)mapView;
-(void)dealloc;
-(BOOL)_isInMiniBar;
-(void)_repositionViews;
-(void)setEnabled:(BOOL)enabled;
-(id)createViewForToolbar:(id)toolbar;
-(id)createViewForNavigationItem:(id)navigationItem;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)_shrinkAnimation;
-(id)_expandAnimation;
-(id)_contentAnimation;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(float)_verticalOffsetForState:(int)state;
-(int)_styleForState:(int)state;
-(id)_imageForState:(int)state;
-(BOOL)_shouldAnimateFromState:(int)state toState:(int)state2;
-(void)setState:(int)state;
-(void)_updateState;
-(void)_goToNextMode:(id)nextMode;
@end

