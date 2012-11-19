/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSIMLockEntryAlertDisplay.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBSIMLockPUKEntryAlertDisplay : SBSIMLockEntryAlertDisplay {
	int _state;
	NSString* _enteredPUKCode;
	NSString* _newPIN;
}
-(void)unlock;
-(void)_attemptPUKUnlock;
-(id)label;
-(void)setupFailureState;
-(id)titleText;
-(void)setupSuccess;
-(id)_pukAttemptsRemainingLabel;
-(void)dealloc;
@end

