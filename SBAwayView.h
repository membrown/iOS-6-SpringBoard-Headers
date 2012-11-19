/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSlidingAlertDisplay.h"
#import "SBAwayDateViewDelegate.h"

@class SBAwayLockBar, UIView, SBAwayViewPluginController, UIAlertView, UIButton, NSMutableDictionary, SBAwayInCallController, SBAwayBuddyBackgroundView, UIWindow, NSTimer, SBAwayBulletinListController, SBAwayChargingView, SBAwayDateView, SBAwaySwipeGestureRecognizer, NSDictionary, SBAlertImageView, TPBottomSingleButtonBar, SBThermalLockoutView;
@protocol SBAwayHeaderPluginView;

__attribute__((visibility("hidden")))
@interface SBAwayView : SBSlidingAlertDisplay <SBAwayDateViewDelegate> {
	BOOL _isDimmed;
	BOOL _fullscreen;
	BOOL _alwaysFullscreen;
	BOOL _showingBlockedIndicator;
	BOOL _hasTelephony;
	BOOL _wasShowingAlertAtDismiss;
	BOOL _removingAlertAtUnlock;
	BOOL _awayPluginIsVisible;
	BOOL _ignoreFullScreenUpdates;
	BOOL _lockBarCurrentlyTracking;
	UIView* _headerContainerView;
	SBAwayDateView* _dateHeaderView;
	UIView<SBAwayHeaderPluginView>* _pluginHeaderView;
	UIView* _animatingFromHeaderView;
	SBAwayChargingView* _chargingView;
	SBThermalLockoutView* _thermalLockoutView;
	SBAlertImageView* _firewireWarningView;
	SBAwayViewPluginController* _awayPluginController;
	BOOL _awayPluginControllerReceivedViewWillDisappear;
	BOOL _awayPluginControllerReceivedViewDidDisappear;
	SBAwaySwipeGestureRecognizer* _gestureRecognizer;
	SBAwayBuddyBackgroundView* _buddyBackgroundView;
	SBAwayBulletinListController* _bulletinController;
	NSTimer* _mediaControlsTimer;
	NSTimer* _fullscreenTimer;
	NSTimer* _chargingViewTimer;
	NSDictionary* _nowPlayingInfo;
	BOOL _isPlaying;
	NSMutableDictionary* _currentPluginFadeAnimationContext;
	NSTimer* _blockedStatusUpdateTimer;
	UIAlertView* _alertSheet;
	int _alertSheetPosition;
	SBAwayInCallController* _inCallController;
	SBAwayLockBar* _lockBar;
	TPBottomSingleButtonBar* _cancelSyncBar;
	UIButton* _infoButton;
	UIView* _legalTextView;
	UIWindow* _previousWindow;
}
@property(retain, nonatomic) UIView* animatingFromHeaderView;
+(id)lockLabels:(BOOL)labels fontSize:(float*)size;
+(id)bottomBarForInstance:(id)instance;
-(void)_layoutLegalTextOverlay:(int)overlay;
-(void)_initializeLegalTextOverlay;
-(void)_handleKeyEvent:(GSEventRef)event;
-(void)_networkTetheringStateChanged:(id)changed;
-(void)animateToShowingDeviceLock:(BOOL)showingDeviceLock duration:(float)duration;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)window;
-(BOOL)handleMenuButtonTap;
-(void)restartFullscreenTimerIfNecessary;
-(void)_fullscreenTimerFired;
-(void)restartFullscreenTimer;
-(void)cancelFullscreenTimer;
-(void)enableOrDisableNowPlayingPlugin;
-(void)updateNowPlayingInfo:(id)info;
-(void)hideSyncingBottomBar:(BOOL)bar;
-(void)showSyncingBottomBar:(BOOL)bar;
-(void)updateTopBarBackground;
-(id)_topBarLCDControlsImage;
-(BOOL)_isShowingPluginHeaderView;
-(BOOL)hasNowPlayingInfo;
-(void)setPlaying:(BOOL)playing;
-(BOOL)isPlaying;
-(BOOL)isMediaControlsShowingOverlays;
-(BOOL)isShowingMediaControls;
-(void)toggleMediaControls;
-(void)showMediaControls;
-(void)_hideMediaControls;
-(void)hideMediaControls;
-(void)restartMediaControlsTimerIfNecessary;
-(void)restartMediaControlsTimer;
-(void)clearMediaControlsTimer;
-(void)_hideChargingViewAndClearTimer;
-(void)clearChargingViewTimer;
-(void)_didFadeChargingView;
-(void)_chargingViewTimerFired;
-(void)startChargingViewTimer;
-(void)updateChargingView;
-(void)hideChargingView;
-(void)showChargingView;
-(id)chargingView;
-(void)_recenterAlertSheet;
-(void)slideAlertSheetOut:(BOOL)anOut direction:(BOOL)direction duration:(float)duration;
-(void)removeAlertSheet;
-(BOOL)replaceAlertSheet:(id)sheet withAlertSheet:(id)alertSheet;
-(void)showAlertSheet:(id)sheet;
-(void)setShowingDeviceLock:(BOOL)lock duration:(float)duration completion:(id)completion;
-(void)animateToShowingDeviceLockFinished;
-(void)animateToHidingDeviceLockFinished;
-(void)showBulletinView;
-(void)hideBulletinView;
-(void)_positionBulletinViewForOrientation:(int)orientation;
-(void)_placeBulletinViewInHierarchy;
-(CGAffineTransform)slideTopBarToVisible:(BOOL)visible;
-(void)updateInCallInfo;
-(BOOL)shouldShowInCallInfo;
-(id)inCallController;
-(void)removeBuddyBackgroundView;
-(void)addBuddyBackgroundView;
-(id)buddyBackgroundView;
-(void)awayDateViewDidChangeTitle:(id)awayDateView;
-(void)_addHeaderView;
-(void)_removeHeaderView;
-(id)dateHeaderView;
-(BOOL)_isShowingDateHeaderView;
-(id)_currentTitleForHeaderView;
-(void)_updateBlockedStatus;
-(void)removeBlockedStatus;
-(void)showBlockedStatus;
-(void)deviceUnlockFailed;
-(void)deviceUnlockCanceled;
-(void)_updateBlockedStatusLabel;
-(BOOL)shouldShowBlockedRedStatus;
-(void)windowGestureWasCompleted:(id)completed;
-(void)_setAwayViewGesturesEnabled:(BOOL)enabled;
-(id)bulletinController;
-(void)setIgnoreFullScreenUpdates:(BOOL)updates;
-(void)setAlwaysFullscreen:(BOOL)fullscreen;
-(BOOL)isAlwaysFullscreen;
-(BOOL)isFullscreen;
-(void)setFullscreen:(BOOL)fullscreen duration:(double)duration;
-(void)setFullscreen:(BOOL)fullscreen duration:(double)duration force:(BOOL)force;
-(void)_fullscreenAnimationStopped:(id)stopped finished:(id)finished context:(void*)context;
-(void)_pluginAnimationDidStop:(id)_pluginAnimation finished:(id)finished context:(void*)context;
-(void)_finalizeAndClearPluginAnimationContext;
-(void)_setPluginController:(id)controller;
-(void)_performTransitionFromPluginController:(id)pluginController toPluginController:(id)pluginController2;
-(id)currentAwayPluginController;
-(void)_adjustForDoubleHighStatusBar:(BOOL)doubleHighStatusBar;
-(void)updateLockBarLabel;
-(void)_updateLockBarLabelByClearingFirst:(BOOL)first;
-(void)lockBar:(id)bar textAlphaChangedForKnobDrag:(float)knobDrag;
-(BOOL)lockBarIsTracking;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)lockBarStartedTracking:(id)tracking;
-(void)lockBarUnlocked:(id)unlocked;
-(void)lockBarUnlocked:(id)unlocked freezeKnobInLockedPosition:(BOOL)lockedPosition;
-(void)resetLockBar;
-(BOOL)dimmed;
-(void)setDimmed:(BOOL)dimmed;
-(void)setMiddleContentAlpha:(float)alpha;
-(void)_setMiddleSubviewsAlpha:(float)alpha;
-(void)updateInterface;
-(void)_updateTopBarShadowAlpha;
-(BOOL)_shouldAlwaysHideBulletinView;
-(BOOL)canBecomeFirstResponder;
-(void)dismissMediaControlsOverlaysAnimated:(BOOL)animated;
-(void)noteLocked:(BOOL)locked;
-(void)_fixupFirstResponder;
-(BOOL)isShowingWallpaper;
-(BOOL)shouldShowChargingView;
-(void)removeFirewireWarningView;
-(void)addFirewireWarningView;
-(void)updateUIForResetState:(int)resetState;
-(void)updateUIForRestorationState:(int)restorationState;
-(void)setThermalLockoutUIVisible:(BOOL)visible;
-(BOOL)isSupportedInterfaceOrientation:(int)orientation;
-(void)resetForDeactivation;
-(void)stopAnimations;
-(void)startAnimations;
-(BOOL)isAnimating;
-(BOOL)shouldAnimateIconsOut;
-(BOOL)shouldAnimateIn;
-(BOOL)shouldShowBottomBar;
-(void)noteAssistantDidHide;
-(void)noteAssistantWillAppear;
-(void)setBottomLockBar:(id)bar;
-(float)durationForOthersActivation;
-(void)finishedAnimatingOut;
-(void)performAdditionalDismissAnimations;
-(void)dismiss;
-(void)finishedAnimatingIn;
-(void)_postLockCompletedNotification;
-(void)dealloc;
-(void)postLockCompletedNotification:(BOOL)notification;
-(void)alertDisplayWillBecomeVisible;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(id)initWithFrame:(CGRect)frame;
-(void)_clearBlockedStatusUpdateTimer;
@end
