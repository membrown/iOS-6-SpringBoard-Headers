/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationController.h"
#import "SpringBoard-Structs.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownApp : SBUIAnimationController {
	UIView* _viewToAnimate;
	BOOL _animateBanner;
	XXStruct_UhFvxB _fakeStatusBarInfo;
}
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(float)endZoomScale;
-(double)animationDelay;
-(double)animationStartTime;
-(double)animationDuration;
-(void)_prepareAnimation;
-(id)appContext;
-(BOOL)prefersLayerHostSnapshot;
-(XXStruct_UhFvxB)fakeStatusBarInfoWithStartEffectivelyHidden:(BOOL)startEffectivelyHidden endStyle:(int)style endOrientation:(int)orientation;
-(void)dealloc;
-(id)initWithDeactivatingApp:(id)deactivatingApp;
@end

