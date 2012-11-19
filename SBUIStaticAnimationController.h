/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationController.h"

@class SBApplication, UIView;

__attribute__((visibility("hidden")))
@interface SBUIStaticAnimationController : SBUIAnimationController {
	BOOL _relaunchExpected;
	BOOL _awaitingKeybagRefetch;
	BOOL _appWasActivating;
	UIView* _staticAppView;
}
@property(readonly, assign, nonatomic) SBApplication* app;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(BOOL)_animationShouldStart;
-(BOOL)_willAnimate;
-(void)dealloc;
-(id)initWithApp:(id)app;
@end

