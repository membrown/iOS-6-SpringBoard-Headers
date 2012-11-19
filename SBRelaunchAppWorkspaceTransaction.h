/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerDelegate.h"
#import "SBToAppWorkspaceTransaction.h"

@class SBUIAnimationController;

__attribute__((visibility("hidden")))
@interface SBRelaunchAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBUIAnimationController* _animationController;
	BOOL _relaunchSuspended;
	BOOL _keepWorkspaceSuspended;
	BOOL _waitForReceiverChange;
}
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller didCommitAnimation:(BOOL)animation withDuration:(double)duration afterDelay:(double)delay;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(void)_handleAppRelaunch:(id)relaunch;
-(BOOL)selfApplicationExited:(id)exited;
-(BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
-(BOOL)selfApplicationActivated:(id)activated;
-(BOOL)selfApplicationDidFinishLaunching:(id)selfApplication withInfo:(id)info;
-(BOOL)selfApplicationDidStartLaunching:(id)selfApplication withInfo:(id)info;
-(BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(BOOL)selfApplicationWillBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(void)_transactionComplete;
-(void)_commit;
-(void)_endAnimation;
-(id)_setupAnimationForApp:(id)app;
-(BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager application:(id)application;
@end

