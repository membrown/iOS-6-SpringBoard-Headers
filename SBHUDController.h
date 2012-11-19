/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class UIWindow, SBHUDView, UIView;

__attribute__((visibility("hidden")))
@interface SBHUDController : NSObject {
	UIWindow* _hudWindow;
	UIView* _hudContentView;
	SBHUDView* _hudView;
	int _orientation;
	BOOL _hudVisibleOrFading;
}
+(id)sharedHUDController;
-(void)hideHUDView;
-(id)visibleOrFadingHUDView;
-(id)visibleHUDView;
-(void)presentHUDView:(id)view autoDismissWithDelay:(double)delay;
-(void)presentHUDView:(id)view;
-(void)_orderWindowOut:(id)anOut;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)_tearDown;
-(void)_createUI;
-(void)reorientHUDIfNeeded:(BOOL)needed;
-(void)_recenterHUDView;
-(void)dealloc;
@end

