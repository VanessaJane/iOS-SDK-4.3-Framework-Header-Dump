/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIFont, UIImage, UIColor;

@interface GKUITheme : XXUnknownSuperclass {
	UIColor* _playerHeaderColor;
	UIColor* _playerHeaderShadowColor;
	UIColor* _labelColor;
	UIColor* _buttonTitleColor;
	UIColor* _headerButtonTitleColor;
	UIColor* _secondaryLabelColor;
	UIColor* _welcomeBannerTextColor;
}
@property(readonly, retain, nonatomic) UIColor* playerHeaderColor;
@property(readonly, retain, nonatomic) UIColor* playerHeaderShadowColor;
@property(readonly, retain, nonatomic) UIColor* labelColor;
@property(readonly, retain, nonatomic) UIColor* buttonTitleColor;
@property(readonly, retain, nonatomic) UIColor* headerButtonTitleColor;
@property(readonly, retain, nonatomic) UIColor* secondaryLabelColor;
@property(readonly, retain, nonatomic) UIColor* welcomeBannerTextColor;
@property(readonly, assign, nonatomic) float modalTableViewMargin;
@property(readonly, assign, nonatomic) CGSize formSheetSize;
@property(readonly, retain, nonatomic) UIImage* uninviteNowButtonImage;
@property(readonly, retain, nonatomic) UIImage* inviteButtonPressedImage;
@property(readonly, retain, nonatomic) UIImage* inviteButtonImage;
@property(readonly, retain, nonatomic) UIImage* ratingStarsForegroundImage;
@property(readonly, retain, nonatomic) UIImage* ratingStarsBackgroundImage;
@property(readonly, retain, nonatomic) UIImage* aliasAccentImage;
@property(readonly, retain, nonatomic) UIImage* achievementsLabelLargeBackgroundImage;
@property(readonly, retain, nonatomic) UIImage* gamesLabelLargeBackgroundImage;
@property(readonly, retain, nonatomic) UIImage* friendsLabelLargeBackgroundImage;
@property(readonly, retain, nonatomic) UIImage* achievementsLabelBackgroundImage;
@property(readonly, retain, nonatomic) UIImage* gamesLabelBackgroundImage;
@property(readonly, retain, nonatomic) UIImage* friendsLabelBackgroundImage;
@property(readonly, retain, nonatomic) UIImage* backgroundImage;
@property(readonly, retain, nonatomic) UIFont* ribbonSegmentedControlFont;
@property(readonly, retain, nonatomic) UIFont* inviteButtonFont;
@property(readonly, retain, nonatomic) UIFont* typedTextFont;
@property(readonly, retain, nonatomic) UIFont* boldInfoFont;
@property(readonly, retain, nonatomic) UIFont* infoFont;
@property(readonly, retain, nonatomic) UIFont* boldSmallTitleFont;
@property(readonly, retain, nonatomic) UIFont* smallTitleFont;
@property(readonly, retain, nonatomic) UIFont* boldTitleFont;
@property(readonly, retain, nonatomic) UIFont* titleFont;
@property(readonly, retain, nonatomic) UIFont* headlineFont;
@property(readonly, retain, nonatomic) UIColor* ribbonSegmentedControlSelectedTextColor;
@property(readonly, retain, nonatomic) UIColor* uninviteNowButtonTitleHighlightColor;
@property(readonly, retain, nonatomic) UIColor* uninviteNowButtonTitleColor;
@property(readonly, retain, nonatomic) UIColor* leaderboardScoreColor;
@property(readonly, retain, nonatomic) UIColor* leaderboardDetailColor;
@property(readonly, retain, nonatomic) UIColor* leaderboardLabelColor;
@property(readonly, retain, nonatomic) UIColor* leaderboardRankColor;
@property(readonly, retain, nonatomic) UIColor* playerHeaderEmbossColor;
@property(readonly, retain, nonatomic) UIColor* inactiveSegmentedControlLabelColor;
@property(readonly, retain, nonatomic) UIColor* activeSegmentedControlLabelColor;
@property(readonly, retain, nonatomic) UIColor* tableCellSeparatorColor;
@property(readonly, retain, nonatomic) UIColor* highlightedEmbossColor;
@property(readonly, retain, nonatomic) UIColor* headerEmbossColor;
@property(readonly, retain, nonatomic) UIColor* embossColor;
@property(readonly, retain, nonatomic) UIColor* shadowColor;
@property(readonly, retain, nonatomic) UIColor* headerPlaceholderTextColor;
@property(readonly, retain, nonatomic) UIColor* placeholderTextColor;
@property(readonly, retain, nonatomic) UIColor* typedTextColor;
@property(readonly, retain, nonatomic) UIColor* tableSectionHeaderColor;
@property(readonly, retain, nonatomic) UIColor* highlightedInfoTextColor;
@property(readonly, retain, nonatomic) UIColor* darkerInfoTextColor;
@property(readonly, retain, nonatomic) UIColor* infoTextColor;
@property(readonly, retain, nonatomic) UIColor* focusButtonTextColor;
@property(readonly, retain, nonatomic) UIColor* secondaryButtonTitleColor;
@property(readonly, retain, nonatomic) UIColor* lowContrastSecondaryLabelColor;
@property(readonly, retain, nonatomic) UIColor* highlightedButtonTitleColor;
@property(readonly, retain, nonatomic) UIColor* buttonTitleEmbossColor;
+(void)clearCache;
+(id)themeWithIndex:(id)index;
+(id)themeForGame:(id)game;
+(id)sharedTheme;
-(void)dealloc;
-(id)welcomeBannerFontOfSize:(float)size;
-(id)playerHeaderFontOfSize:(float)size;
-(id)gameHeaderFontOfSize:(float)size;
-(id)playerStatsFontOfSize:(float)size;
-(id)headerBodyFontOfSize:(float)size;
-(id)boldHeaderBodyFontOfSize:(float)size;
-(id)headerStatusFontOfSize:(float)size;
-(id)headerOnHeaderStatusFontOfSize:(float)size;
-(id)headerLabelFontOfSize:(float)size;
-(id)boldHeaderLabelFontOfSize:(float)size;
-(id)matchmakerButtonFontOfSize:(float)size;
-(id)leaderboardRankFontOfSize:(float)size;
-(id)leaderboardLabelFontOfSize:(float)size;
-(id)leaderboardDetailFontOfSize:(float)size;
-(id)leaderboardScoreFontOfSize:(float)size;
-(id)gameCompareFontOfSize:(float)size;
-(id)gameCompareBoldFontOfSize:(float)size;
-(id)gameCompareDetailFontOfSize:(float)size;
-(id)gameCompareDetailBoldFontOfSize:(float)size;
-(id)defaultGameIcon;
-(id)darkBackgroundImageTiled;
-(id)selectedDarkBackgroundImageTiled;
-(id)backgroundImageForOrientation:(int)orientation;
-(id)selectedBackgroundImageForOrientation:(int)orientation;
-(id)textFieldClearButtonImage;
-(id)textFieldBackgroundImageWithHeight:(float)height;
-(id)textFieldBackgroundImageWithSectionLocation:(int)sectionLocation;
-(id)headerTextFieldBackgroundImageWithSectionLocation:(int)sectionLocation;
-(UIEdgeInsets)tableCellBackgroundBorderInsetsForSectionLocation:(int)sectionLocation;
-(id)tableCellBorderColor;
-(id)tableCellBorderFill;
-(id)tableCellBorderShadowColor;
-(id)sectionHeaderOrnamentLeft;
-(id)sectionHeaderOrnamentRight;
-(id)sectionHeaderDisclosureTriangle;
-(id)buttonImageSelected:(BOOL)selected;
-(id)smallButtonImageSelected:(BOOL)selected;
-(id)atomBackgroundImageSelected:(BOOL)selected;
-(id)addContactImageSelected:(BOOL)selected;
-(id)horizontalSeparatorImage;
-(id)tableCellDisclosureIndicatorImage;
-(id)headerBackground;
-(id)headerBackgroundMask;
-(id)redPuckForCompareHeader;
-(id)bluePuckForCompareHeader;
-(id)listIconMaskImage;
-(id)listIconShadowImage;
-(id)listIconShineImage;
-(id)headerBackgroundWithGlow;
-(id)eventBackgroundImage;
-(id)welcomeBannerImageForLocation:(int)location;
-(id)welcomeBannerTextImageForLocation:(int)location;
-(id)welcomeSubviewMask;
-(id)welcomeSubviewOutlineImage;
-(id)gameDetailSectionTitleBackgroundImage;
-(id)eventIconImage;
-(id)toolbarBackgroundImage;
-(id)searchbarBezelImage;
-(id)navbarPortraitImage;
-(id)navbarLandscapeImage;
-(id)navbarShadowImage;
-(id)achievementsNotStartedIcon;
-(id)achievementsDefaultIcon;
-(id)achievementsDefaultIconiPad;
-(id)achievementsDefaultIconSmall;
-(id)achievementsNotStartedIconiPad;
-(id)achievementsCompareCellSeparator;
-(id)achievementsCompareCellShortSeparator;
-(id)achievementsCompareCheckMark;
-(id)achievementsTokenMask;
-(id)achievementsTokenEffects;
-(id)achievementsToken;
-(id)achievementsTokenMaskiPad;
-(id)achievementsTokenEffectsiPad;
-(id)achievementsTokeniPad;
-(id)achievementsTokenMaskiPadSmall;
-(id)achievementsNotStartedIconSmall;
-(id)achievementsTokenEffectsiPadSmall;
-(id)achievementsTokeniPadSmall;
-(id)achievementsTokenOuterRim;
-(id)achievementsTokenLocalPlayer;
-(id)achievementsTokenFriendPlayer;
-(id)achievementsProgressTrack;
-(id)achievementsProgress;
-(id)achievementsProgressTrackiPad;
-(id)achievementsProgressiPad;
-(id)formSheetFrameBottom;
-(id)formSheetFrameRight;
-(id)formSheetFrameLeft;
-(id)formSheetFrameShadow;
-(id)formSheetNavbarBackground;
-(id)navbarButtonForControlState:(unsigned)controlState landscape:(BOOL)landscape;
-(id)navbarBackButtonForControlState:(unsigned)controlState landscape:(BOOL)landscape;
-(id)navbarFocusButtonForControlState:(unsigned)controlState landscape:(BOOL)landscape;
-(id)segmentedControlBackgroundForControlState:(unsigned)controlState landscape:(BOOL)landscape;
-(id)segmentedControlDividerForControlState:(unsigned)controlState landscape:(BOOL)landscape;
-(id)tabbarPortraitImage;
-(id)tabbarLandscapeImage;
-(id)tabbarShadowImage;
-(id)tabbarActiveTabImage;
-(id)tabbarIconFriendsActive:(BOOL)active;
-(id)tabbarIconGamesActive:(BOOL)active;
-(id)tabbarIconMeActive:(BOOL)active;
-(id)tabbarIconRequestsActive:(BOOL)active;
-(id)verticalLineImage;
-(id)showMoreCellBackgroundFill;
-(id)leaderboardCellBackgroundBlackFill;
-(id)leaderboardCellBackgroundRedFill;
-(id)leaderboardCellBackgroundGreenFill;
-(id)tableSectionCapCellBackgroundFill;
-(id)tokenBackgroundForType:(int)type;
-(id)smallTokenBackgroundForType:(int)type;
-(id)compareHeaderPiece:(int)piece;
-(id)compareSplitterForHeader:(BOOL)header;
-(UIEdgeInsets)tokenInsetsForRow:(unsigned)row;
@end

