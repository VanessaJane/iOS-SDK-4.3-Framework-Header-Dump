/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBSlidingViewHighlight, SBWallpaperView, SBFolderNotchHighlightView, SBLinenNotchView, UIView, UIImageView, SBFolderView;

@interface SBFolderSlidingView : XXUnknownSuperclass {
	int _position;
	SBFolderView* _folderView;
	int _orientation;
	XXStruct_9ihRqB _notchInfo;
	CGRect _wallpaperRect;
	UIView* _rasterizationView;
	UIView* _wallpaperContainerView;
	SBWallpaperView* _wallpaperView;
	SBLinenNotchView* _linenNotchView;
	SBSlidingViewHighlight* _highlightView;
	SBFolderNotchHighlightView* _notchHighlightView;
	UIImageView* _dockView;
	UIImageView* _outgoingDockView;
	BOOL _touchDownInWallpaper;
}
-(id)initWithPosition:(int)position folderView:(id)view;
-(void)prepareToSetDockOrientation:(int)setDockOrientation;
-(void)cleanUpAfterDockOrientationChange;
-(void)setOrientation:(int)orientation wallpaperRect:(CGRect)rect notchInfo:(XXStruct_9ihRqB)info;
-(void)dealloc;
-(CGRect)_rectByAddingOverlapToRect:(CGRect)rect;
-(void)_placeNotchAndHighlights;
-(id)_newDockViewForOrientation:(int)orientation;
-(void)setShowsHighlight:(BOOL)highlight;
-(void)setShouldRasterize:(BOOL)rasterize;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

