/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SportsTrainer-Structs.h"
#import "STRunView.h"

@class STShadowLabel, SWRunWorkoutProxy, NSTimer, UIView, UIButton, UIImageView, NSString, STRunCaloriesLabel, STRunPaceLabel, STRunDistanceLabel, STRunTimeLabel, STRunProgressView, STAnimatableButton;
@protocol STRunViewDelegate;

@interface STRunView : XXUnknownSuperclass {
	id<STRunViewDelegate> _delegate;
	SWRunWorkoutProxy* _workoutProxy;
	NSTimer* _subsecondTimer;
	NSTimer* _workoutInfoTimer;
	double _elapsedWorkoutTime;
	double _estimatedElapsedWorkoutTime;
	double _lastWorkoutNotificationTime;
	UIView* _rotationContainer;
	int _orientation;
	int _interface;
	UIButton* _leftButton;
	UIButton* _rightButton;
	STAnimatableButton* _endWorkoutButton;
	UIButton* _previousTrackButton;
	UIButton* _nextTrackButton;
	UIImageView* _transportControlsDivider;
	STRunTimeLabel* _runTimeLabel;
	STRunDistanceLabel* _runDistanceLabel;
	STRunPaceLabel* _runPaceLabel;
	STRunCaloriesLabel* _runCaloriesLabel;
	STShadowLabel* _nowPlayingSongLabel;
	STRunProgressView* _runProgressView;
	float _progressToGoal;
	UIImageView* _powerSongGlowView;
	NSTimer* _considerSeekTimer;
	int _currentSeekDirection;
	NSString* _throttledWorkoutState;
	struct {
		unsigned timerPaused : 1;
		unsigned shouldStartTimer : 1;
		unsigned isLockScreen : 1;
		unsigned animateForResumeEventsOnly : 1;
		unsigned canHighlightPowerSong : 1;
		unsigned validPaceReceived : 1;
		unsigned noMusic : 1;
		unsigned seekHandled : 1;
		unsigned seekAllowed : 1;
		unsigned needsNowPlayingLayout : 1;
		unsigned forceTimeExtrapolation : 1;
		unsigned goalCompleted : 1;
		unsigned useMetricDistance : 1;
		unsigned forceMetricForDistanceOnly : 1;
		unsigned throttleNextPauseResume : 1;
		unsigned shouldControlMusic : 1;
		unsigned unused : 16;
	} _runFlagsBitfield;
}
@property(assign, nonatomic) int interface;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic) id<STRunViewDelegate> delegate;
@property(assign, nonatomic) BOOL animateForResumeEventsOnly;
@property(assign, nonatomic) BOOL isLockScreen;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame workoutProxy:(id)proxy;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)_layoutBottomButtons;
-(void)_layoutMainButtonsForGoalType:(id)goalType;
-(void)_layoutLabelsForWorkoutType:(int)workoutType presetGoal:(id)goal;
-(void)_layoutPrimaryLabelForWorkoutType:(int)workoutType;
-(void)_layoutSecondaryLabelsForWorkoutType:(int)workoutType;
-(void)_layoutTransportControlsDivider;
-(void)_layoutNowPlayingLabelForWorkoutType:(int)workoutType;
-(void)_layoutRunTimeInPosition:(int)position isLandscape:(BOOL)landscape isLockedMusicInterface:(BOOL)interface hasProgressView:(BOOL)view;
-(void)_layoutRunDistanceInPosition:(int)position isLandscape:(BOOL)landscape isLockedMusicInterface:(BOOL)interface hasProgressView:(BOOL)view;
-(void)_layoutPaceInPosition:(int)position isLandscape:(BOOL)landscape isLockedMusicInterface:(BOOL)interface hasProgressView:(BOOL)view;
-(void)_layoutCaloriesInPosition:(int)position isLandscape:(BOOL)landscape isLockedMusicInterface:(BOOL)interface hasProgressView:(BOOL)view;
-(void)_layoutLabel:(id)label inPosition:(int)position isLandscape:(BOOL)landscape isLockedMusicInterface:(BOOL)interface hasProgressView:(BOOL)view;
-(void)suspend;
-(void)resume;
-(void)resumeEventsOnly;
-(void)_finishResumeEventsOnly;
-(void)resumeWorkout;
-(void)selectPowerSong;
-(void)_updateProgressViewWithDictionary:(id)dictionary;
-(void)_changeMusic;
-(void)_start;
-(void)_cancel;
-(void)_pause;
-(void)_pauseWorkoutForResume:(BOOL)resume;
-(void)_resume;
-(void)_resumeWorkoutForResume:(BOOL)resume;
-(void)_unthrottlePauseResume;
-(void)_stop;
-(void)_previousTrack;
-(void)_nextTrack;
-(void)_cancelConsiderSeeking:(id)seeking;
-(void)_beginConsiderSeeking:(id)seeking;
-(void)_endSeeking:(id)seeking;
-(void)_considerSeekTimerFired:(id)fired;
-(BOOL)_beginSeekInDirection:(int)direction;
-(BOOL)_endSeekInDirection:(int)direction;
-(void)_subsecondTimerTick:(id)tick;
-(void)_workoutInfoTimerTick:(id)tick;
-(void)_updateSubviewsForWorkoutData:(id)workoutData;
-(void)_configureButtonsForWorkout;
-(id)_mainButtonStringForGoalType:(id)goalType;
-(void)_startUpdateTimers;
-(void)_stopUpdateTimers;
-(id)_greenButtonImage;
-(id)_greenButtonDownImage;
-(id)_orangeButtonImage;
-(id)_orangeButtonDownImage;
-(id)_redButtonImage;
-(id)_redButtonDownImage;
-(id)_startWorkoutButtonImage;
-(id)_startWorkoutButtonDownImage;
-(id)_startWorkoutLandscapeButtonImage;
-(id)_startWorkoutLandscapeButtonDownImage;
-(id)_endWorkoutButtonImage;
-(id)_endWorkoutButtonDownImage;
-(id)_endWorkoutLandscapeButtonImage;
-(id)_endWorkoutLandscapeButtonDownImage;
-(id)_powersongButtonImage;
-(id)_powersongButtonDownImage;
-(id)_powersongLandscapeButtonImage;
-(id)_powersongLandscapeButtonDownImage;
-(void)_empedSearchStateChanged:(id)changed;
-(void)_workoutStateDidChange:(id)_workoutState;
-(void)_startWorkoutEventFromRemote:(id)remote;
-(void)_playPowerSongEventFromRemote:(id)remote;
-(void)_applicationWillSuspend:(id)_application;
-(void)_applicationResumed:(id)resumed;
-(void)_applicationWillResignActive:(id)_application;
-(void)_nowPlayingChanged:(id)changed;
@end

@interface STRunView (SWTransitional)
-(int)_workoutTypeForGoalType:(id)goalType;
@end

