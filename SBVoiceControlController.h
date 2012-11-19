/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface SBVoiceControlController : NSObject {
	BOOL _delayedAssistantActivationPending;
	BOOL _headsetDownDelayedActionPerformed;
}
+(id)sharedInstance;
-(void)_updateNextRecognitionAudioInputPaths:(id)paths;
-(void)bluetoothDeviceEndedVoiceControl:(id)control;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)control;
-(void)_spokenLanguageDidChange:(id)_spokenLanguage;
-(void)_assistantActivationSettingsDidChange:(id)_assistantActivationSettings;
-(void)headsetAvailabilityChanged;
-(BOOL)handleHeadsetButtonUpNotInCall;
-(BOOL)handleHeadsetButtonUp;
-(void)handleHeadsetButtonDownWithClickCount:(unsigned)clickCount;
-(void)_cancelDelayedHeadsetAction;
-(void)_prepareDelayedHeadsetAction;
-(void)_performDelayedHeadsetActionForVoiceControl;
-(void)_performDelayedHeadsetActionForAssistant;
-(BOOL)handleHomeButtonHeld;
-(void)preheatForMenuButtonWithFireDate:(id)fireDate;
-(void)configureVoiceControl;
-(id)init;
@end

