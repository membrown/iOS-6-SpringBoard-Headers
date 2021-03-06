/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "SpringBoard-Structs.h"
#import "SBUIUserAgent.h"

@class SBBulletinAlertHandlerRegistry;

__attribute__((visibility("hidden")))
@interface SBUserAgent : NSObject <SBUIUserAgent> {
	SBBulletinAlertHandlerRegistry* _modalAlertRegistry;
}
+(id)sharedUserAgent;
-(void)setMinimumBacklightLevel:(float)level animated:(BOOL)animated;
-(BOOL)isSBUILoggingEnabled;
-(void)removeActiveInterfaceOrientationObserver:(id)observer;
-(void)addActiveInterfaceOrientationObserver:(id)observer;
-(void)activateModalBulletinAlert:(id)alert;
-(id)modalBulletinAlertHandlerRegistry;
-(void)stopRinging;
-(void)playRingtoneAtPath:(id)path vibrationPattern:(id)pattern;
-(void)playRingtoneAtPath:(id)path;
-(int)networkUsageTypeForAppWithDisplayID:(id)displayID;
-(BOOL)homeScreenIsDisplayingWallpaper;
-(id)createWallpaperView:(int)view;
-(BOOL)canUserLaunchIcon;
-(void)setIdleText:(id)text;
-(void)setBadgeNumberOrString:(id)string forApplicationWithID:(id)anId;
-(void)notifyOnNextUserEvent;
-(BOOL)isIdleTimerDisabledForReason:(id)reason;
-(void)setIdleTimerDisabled:(BOOL)disabled forReason:(id)reason;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)necessary;
-(void)lockAndDimDevice;
-(void)undimScreen;
-(void)dimScreen:(BOOL)screen;
-(void)updateLockScreenInterfaceIfNecessary;
-(CGRect)defaultContentRegionForAwayViewPlugin:(id)awayViewPlugin withOrientation:(int)orientation;
-(BOOL)launchFromAwayViewPluginWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate;
-(BOOL)canLaunchFromAwayViewPluginWithURL:(id)url bundleID:(id)anId;
-(BOOL)launchFromPushOrLocalBulletin:(id)pushOrLocalBulletin origin:(int)origin;
-(BOOL)launchFromBulletinWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate launchOrigin:(int)origin;
-(BOOL)canLaunchFromBulletinWithURL:(id)url bundleID:(id)anId;
-(BOOL)_launchFromSource:(int)source withURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate;
-(BOOL)launchFromSource:(int)source withURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock;
-(BOOL)launchApplicationFromSource:(int)source withURL:(id)url options:(id)options;
-(BOOL)launchApplicationFromSource:(int)source withDisplayID:(id)displayID options:(id)options;
-(BOOL)canLaunchFromSource:(int)source withURL:(id)url bundleID:(id)anId;
-(BOOL)_openApplication:(id)application withURL:(id)url fromSource:(int)source animated:(BOOL)animated options:(id)options;
-(id)_safeValue:(id)value forKey:(id)key ofType:(Class)type;
-(BOOL)openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated;
-(void)openURL:(id)url animateIn:(BOOL)anIn scale:(float)scale start:(double)start duration:(float)duration animateOut:(BOOL)anOut;
-(void)prepareToAnswerCall;
-(BOOL)launchDisplayWithURL:(id)url forCall:(BOOL)call sender:(id)sender;
-(void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)identifier;
-(BOOL)lockScreenIsShowing;
-(BOOL)deviceIsTethered;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsPasscodeLockedRemotely;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)deviceIsLocked;
-(BOOL)springBoardIsActive;
-(BOOL)applicationInstalledForDisplayID:(id)displayID;
-(id)topSuspendedEventsOnlyDisplayID;
-(id)foregroundDisplayID;
-(id)foregroundApplicationDisplayID;
-(int)activeInterfaceOrientation;
-(void)updateInterfaceOrientationIfNecessary;
-(void)dealloc;
-(id)init;
@end

