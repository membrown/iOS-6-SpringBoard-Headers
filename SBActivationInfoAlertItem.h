/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDismissOnlyAlertItem.h"

@class UITextView, NSString;

__attribute__((visibility("hidden")))
@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem {
	UITextView* _textView;
	NSString* _meid;
	NSString* _imei;
	NSString* _iccid;
	float _alertHeight;
}
+(id)activeItem;
-(BOOL)allowInSetup;
-(void)cleanPreviousConfiguration;
-(BOOL)forcesModalAlertAppearance;
-(void)didDeactivateForReason:(int)reason;
-(void)willActivate;
-(void)_simStatusChanged:(id)changed;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)_updateTextView;
-(void)didPresentAlertView:(id)view;
-(void)dealloc;
-(id)init;
@end

