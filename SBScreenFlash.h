/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class UIWindow, UIView;

__attribute__((visibility("hidden")))
@interface SBScreenFlash : NSObject {
	UIWindow* _flashWindow;
	UIView* _flashView;
	BOOL _windowVisible;
}
+(id)sharedInstance;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)flashColor:(id)color;
-(void)flash;
-(void)stopFlash;
-(void)_orderWindowFront:(id)front withColor:(id)color;
-(void)_orderWindowOut:(id)anOut;
-(void)_tearDown;
-(void)_createUIWithColor:(id)color;
-(void)dealloc;
@end

