/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <SpringBoardUI/SBAlertItem.h>

@class UIAlertView;

__attribute__((visibility("hidden")))
@interface SBFlippyAlertItem : SBAlertItem {
	UIAlertView* _frontAlertSheet;
	UIAlertView* _backAlertSheet;
	BOOL _showingBack;
	BOOL _isLocked;
	BOOL _requirePasscode;
}
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)flip;
-(void)configureBack:(BOOL)back requirePasscodeForActions:(BOOL)actions;
-(void)configureFront:(BOOL)front requirePasscodeForActions:(BOOL)actions;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)cleanPreviousConfiguration;
-(void)dealloc;
-(id)alertSheet;
-(id)backAlertSheet;
-(id)frontAlertSheet;
-(id)newBackAlertSheet;
-(id)newFrontAlertSheet;
-(Class)alertSheetClass;
-(Class)backAlertSheetClass;
-(Class)frontAlertSheetClass;
@end

