/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSlidingAlertDisplay.h"
#import "SpringBoard-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBSIMLockEntryAlertDisplay : SBSlidingAlertDisplay {
	NSString* _languageCode;
	NSString* _code;
}
-(void)deviceLockViewCancelButtonPressed:(id)pressed;
-(void)deviceLockViewPasscodeEntered:(id)entered;
-(void)unlock;
-(void)_unlock;
-(void)setupSuccess;
-(void)alertDisplayWillBecomeVisible;
-(BOOL)shouldShowEmergencyCallButton;
-(int)requiredUnlockStyle;
-(void)setupCurrentLockAttemptState;
-(id)label;
-(id)titleText;
-(void)setupFailureState;
-(id)failureLabel;
-(id)failureTitle;
-(void)setupUnlockAttemptState;
-(BOOL)alphanumericKeyboard;
-(id)_pinAttemptsRemainingLabel;
-(id)localizedStringWithKey:(id)key;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame languageCode:(id)code;
@end

