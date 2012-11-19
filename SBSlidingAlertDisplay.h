/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDeviceLockViewOwner.h"
#import "SBAlertView.h"

@class SBWallpaperView, UIImage, SBDeviceLockView, UIStatusBar, SBEmergencyCallView;
@protocol SBSlidingAlertDisplayDelegate;

__attribute__((visibility("hidden")))
@interface SBSlidingAlertDisplay : SBAlertView <SBDeviceLockViewOwner> {
	SBWallpaperView* _backgroundView;
	UIImage* _defaultDesktopImage;
	UIView* _topBar;
	UIView* _bottomBar;
	UIView* _overlayView;
	SBDeviceLockView* _deviceLockView;
	SBEmergencyCallView* _emergencyCallView;
	UIView* _emergencyCallTopBar;
	BOOL _playKeyboardClicks;
	unsigned _animatingEmergencyCall : 1;
	unsigned _animatingIn : 1;
	unsigned _animatingOut : 1;
	unsigned _animatingDeviceLock : 1;
	unsigned _showingDeviceLock : 1;
	unsigned _showingDeviceUnlockFailure : 1;
	unsigned _isDisplayingWallpaper : 1;
	int _currentOrientation;
	UIStatusBar* _fakeStatusBarForSlideToDeviceLock;
	id _lockAnimationCompletionHandler;
	id<SBSlidingAlertDisplayDelegate> _delegate;
}
@property(assign, nonatomic) id<SBSlidingAlertDisplayDelegate> delegate;
+(void)setDisplayPropertiesForActivationOfAlert:(id)alert;
+(id)bottomBarForInstance:(id)instance;
+(id)topBarForInstance:(id)instance;
-(BOOL)shouldAddClippingViewDuringRotation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(id)backgroundView;
-(id)topBar;
-(id)bottomBar;
-(void)emergencyCallWasRemoved:(id)removed finished:(id)finished context:(void*)context;
-(void)animateFromEmergencyCallWithDuration:(float)duration;
-(void)emergencyCallWasDisplayed;
-(void)animateToEmergencyCall;
-(void)_animateView:(id)view direction:(int)direction;
-(void)alertWindowResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;
-(void)statusBarFrameChanged:(id)changed;
-(void)adjustForDoubleHighStatusBarIfNecessary;
-(void)_adjustForDoubleHighStatusBar:(BOOL)doubleHighStatusBar;
-(void)_updateDeviceLockFrameForDoubleHeightStatusBar:(BOOL)doubleHeightStatusBar;
-(void)_moveTopBarForDoubleHeightStatusBar:(BOOL)doubleHeightStatusBar;
-(BOOL)shouldShowEmergencyCallButton;
-(int)requiredUnlockStyle;
-(void)deviceLockViewEmergencyCallButtonPressed:(id)pressed;
-(void)deviceLockViewCancelButtonPressed:(id)pressed;
-(void)deviceLockViewPasscodeEntered:(id)entered;
-(void)deviceLockViewPasscodeDidChange:(id)deviceLockViewPasscode;
-(void)deviceLockViewWillAnimateMaximization:(id)deviceLockView;
-(void)deviceLockViewWillAnimateMinimization:(id)deviceLockView;
-(void)deviceUnlockCanceled;
-(void)_entryFinishedWithPassword:(id)password;
-(BOOL)isDisplayingErrorStatus;
-(BOOL)shouldUseTransparentStatusBar;
-(void)removeBlockedStatus;
-(void)showBlockedStatus;
-(BOOL)shouldShowBlockedRedStatus;
-(void)deviceUnlockFailed;
-(void)deviceUnlockSucceeded;
-(void)animateToHidingDeviceLockFinished;
-(void)animateToShowingDeviceLockFinished;
-(void)_animateToHidingOrShowingDeviceLockFinished;
-(void)animateToShowingDeviceLock:(BOOL)showingDeviceLock duration:(float)duration;
-(void)setShowingDeviceLock:(BOOL)lock animated:(BOOL)animated;
-(void)setShowingDeviceLock:(BOOL)lock;
-(void)setShowingDeviceLock:(BOOL)lock duration:(float)duration completion:(id)completion outDuration:(float*)duration4;
-(void)setShowingDeviceLock:(BOOL)lock duration:(float)duration completion:(id)completion;
-(id)deviceLockView;
-(void)_updateOverlayViewFrame;
-(BOOL)bottomBarIsVisible;
-(BOOL)topBarIsVisible;
-(void)_zoomOutDeviceLockViewWithDelay:(double)delay;
-(void)_zoomInDeviceLockViewWithDelay:(double)delay;
-(BOOL)_shouldZoomDeviceLockView;
-(BOOL)isShowingDeviceLock;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)alertDisplayWillBecomeVisible;
-(void)animateDisplayIn:(float)anIn middleDelay:(float)delay animateStatusBar:(BOOL)bar;
-(void)performAnimateDisplayIn;
-(void)beginAnimatingDisplayIn:(BOOL)anIn;
-(void)performAdditionalDismissAnimations;
-(void)dismiss;
-(float)durationForOthersActivation;
-(BOOL)isReadyToBeRemovedFromView;
-(void)setMiddleContentAlpha:(float)alpha;
-(void)_fadeOutCompleted:(id)completed;
-(void)_fadeOutCompletedWithDisplayDisablingIconUnscatter:(BOOL)displayDisablingIconUnscatter;
-(void)animateOut;
-(void)_beginDismissAnimationAffectingWorkspace:(BOOL)workspace;
-(int)currentOrientation;
-(BOOL)isAnimatingOut;
-(BOOL)shouldAnimateIconsOut;
-(BOOL)shouldAnimateIconsIn;
-(void)finishedAnimatingOut;
-(void)finishedAnimatingIn;
-(void)updateDesktopImage:(id)image;
-(BOOL)isShowingWallpaper;
-(BOOL)showsDesktopImage;
-(void)getFrameForTopButton:(CGRect*)topButton bottomButton:(CGRect*)button;
-(CGRect)middleFrame;
-(BOOL)isFullscreen;
-(id)lockBar;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)_defaultDesktopImage;
-(void)_showUnlockFailedIndicator;
-(void)_clearUnlockFailedIndicator;
-(void)leftNavigationButtonPressed;
-(void)rightNavigationButtonPressed;
-(CGAffineTransform)slideBottomBarToVisible:(BOOL)visible;
-(CGAffineTransform)slideTopBarToVisible:(BOOL)visible;
-(void)updateTopBarBackground;
-(id)_topBarLCDShadow;
-(id)_topBarLCDImage;
-(BOOL)shouldShowBottomBar;
-(BOOL)shouldEnableWirelessLCD;
-(void)_resetStatusTextView;
-(void)_setTopBarImage:(id)image shadowColor:(id)color;
@end

