/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class SBApplication, SBActivationContext, UIView, BKSApplicationActivationAssertion, UIWindow;
@protocol SBUIAnimationControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBUIAnimationController : NSObject {
	UIWindow* _transitionWindow;
	UIView* _transitionContainer;
	SBApplication* _activatingApp;
	SBApplication* _deactivatingApp;
	SBActivationContext* _activatingContext;
	SBActivationContext* _deactivatingContext;
	BKSApplicationActivationAssertion* _activationAssertion;
	id<SBUIAnimationControllerDelegate> _delegate;
	id _commitBlock;
	int _animationState;
	BOOL _cancelOnNextSuspendIfNecessary;
	BOOL _didDisableUserInteraction;
	BOOL _didNotifyDelegateOfCompletion;
}
@property(retain, nonatomic) BKSApplicationActivationAssertion* activationAssertion;
@property(retain, nonatomic) SBActivationContext* deactivatingContext;
@property(retain, nonatomic) SBActivationContext* activatingContext;
@property(assign, nonatomic) BOOL cancelOnNextSuspendIfNecessary;
@property(copy, nonatomic) id commitBlock;
@property(retain, nonatomic) SBApplication* deactivatingApp;
@property(retain, nonatomic) SBApplication* activatingApp;
@property(assign, nonatomic) id<SBUIAnimationControllerDelegate> delegate;
@property(readonly, assign, nonatomic) UIView* containerView;
+(id)_transitionWindow;
+(id)animationWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
+(id)animation;
-(void)__cleanupAnimation;
-(void)_noteAnimationDidFinish:(BOOL)_noteAnimation;
-(void)_notifyDelegateOfCompletion;
-(void)_noteAnimationDidCommit:(BOOL)_noteAnimation withDuration:(double)duration afterDelay:(double)delay;
-(void)_cleanupAnimation;
-(void)_cancelAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)_setHidden:(BOOL)hidden;
-(id)_animationProgressDependency;
-(BOOL)_animationShouldStart;
-(id)_animationIdentifier;
-(BOOL)_willAnimate;
-(void)endAnimation;
-(BOOL)waitingToStart;
-(void)beginAnimation;
-(void)_applicationActivationStateDidChange;
-(void)_applicationDependencyStateChanged;
-(void)_evaluateProgressConditions;
-(void)__cancelAnimation;
-(void)__startAnimation;
-(void)_releaseActivationAssertion;
-(void)_setAnimationState:(int)state;
-(BOOL)_isNullAnimation;
-(BOOL)animating;
-(int)_animationState;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
-(id)init;
@end

