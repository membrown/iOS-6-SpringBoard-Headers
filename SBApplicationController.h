/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class SBApplication, NSMutableSet, NSLock, NSOperationQueue, NSMutableDictionary, SBDataLookupResults, BKSApplicationStateMonitor, NSDictionary;

__attribute__((visibility("hidden")))
@interface SBApplicationController : NSObject {
	SBDataLookupResults* _pendingDataLookupResults;
	NSLock* _pendingDataLookupResultsLock;
	NSMutableDictionary* _applications;
	NSMutableDictionary* _applicationsByBundleIdentifer;
	NSMutableSet* _applicationsPlayingMutedAudioSinceLastLock;
	SBApplication* _applicationCurrentlyRecordingAudio;
	int _locationStatusBarIconType;
	NSDictionary* _backgroundDisplayDict;
	unsigned _ignoreUninstallationEventCount;
	NSOperationQueue* _backgroundOperationQueue;
	NSLock* _applicationsLock;
	NSMutableDictionary* _systemAppsVisibilityOverrides;
	BOOL _visibilityOverridesAreDirty;
	BKSApplicationStateMonitor* _appStateMonitor;
	BOOL _booting;
	NSMutableSet* _appsToAutoLaunchAfterBoot;
}
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(BOOL)updateAppIconVisibilityOverridesShowing:(id*)showing hiding:(id*)hiding;
-(void)_setVisibilityOverridesAreDirty:(BOOL)dirty;
-(int)appVisibilityOverrideForBundleIdentifier:(id)bundleIdentifier;
-(void)_reloadBackgroundIDsDict;
-(void)processPendingInstalls;
-(void)_handleDataLookupResultsIfReceived;
-(void)_applicationRegistrationChangedCallback:(id)callback info:(id)info;
-(void)_applicationsUnregistered:(id)unregistered;
-(void)_applicationsRegistered:(id)registered;
-(void)_applicationsRegistered:(id)registered unregistered:(id)unregistered;
-(BOOL)_hasRequiredCapabilities:(id)capabilities;
-(void)loadApplicationsWithBundle:(id)bundle bundlePath:(id)path isSystemApplication:(BOOL)application defaultTags:(id)tags signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated seatbeltEnvironmentVariables:(id)variables;
-(Class)applicationClassForInfoDictionary:(id)infoDictionary;
-(void)loadWebclipAndIcon:(id)icon;
-(void)loadApplicationsAndIcons:(id)icons reveal:(BOOL)reveal popIn:(BOOL)anIn;
-(void)_loadApplicationsAndIcons:(id)icons removed:(id)removed applicationDictionaries:(id)dictionaries reveal:(BOOL)reveal popIn:(BOOL)anIn reloadAllIcons:(BOOL)icons6;
-(void)_updateIconControllerAndModelForLoadedApplications:(id)loadedApplications reveal:(BOOL)reveal popIn:(BOOL)anIn reloadAllIcons:(BOOL)icons;
-(void)waitForOperationsToComplete;
-(void)_decrementUninstallationEventCount;
-(void)uninstallApplication:(id)application;
-(void)removeApplicationsFromModelWithBundleIdentifier:(id)bundleIdentifier;
-(BOOL)loadApplication:(id)application;
-(id)loadApplications;
-(id)_loadApplications:(BOOL)applications applicationDictionaries:(id)dictionaries;
-(id)_loadApplications:(id)applications removed:(id)removed applicationDictionaries:(id)dictionaries updateRestrictions:(BOOL)restrictions;
-(void)_calculateApplicationDiff:(id*)diff removed:(id*)removed applicationDictionaries:(id)dictionaries;
-(id)_modifiedApplications:(id)applications applicationDictionaries:(id)dictionaries;
-(BOOL)_applicationHasBeenModified:(id)modified applicationDictionary:(id)dictionary;
-(void)_loadApplication:(id)application dictionary:(id)dictionary allowDemoOnly:(BOOL)only;
-(void)_loadApplication:(id)application dictionary:(id)dictionary;
-(void)_postLoadApplications:(id)applications removed:(id)removed modified:(id)modified updateRestrictions:(BOOL)restrictions;
-(void)_sendInstalledAppsDidChangeNotification:(id)_sendInstalledApps removed:(id)removed modified:(id)modified;
-(void)_preLoadApplications;
-(id)newsstandApps;
-(id)webApplications;
-(id)mobilePhone;
-(id)setupApplication;
-(id)dataActivation;
-(id)applicationCurrentlyRecordingAudio;
-(id)iPod;
-(id)applicationWithPid:(int)pid;
-(id)applicationWithDisplayIdentifier:(id)displayIdentifier;
-(id)applicationsWithPid:(int)pid;
-(id)applicationsWithBundleIdentifier:(id)bundleIdentifier;
-(id)allApplications;
-(id)allDisplayIdentifiers;
-(void)autoLaunchAppsIfNecessaryAfterBoot;
-(int)locationStatusBarIconType;
-(void)buildLocationState;
-(void)_updateLocationState;
-(void)_memoryWarningReceived;
-(void)_lockStateChanged:(id)changed;
-(void)_unusuallyMutedAudioPlaying:(id)playing;
-(void)_recordingStateChanged:(id)changed;
-(void)_mediaServerConnectionDied:(id)died;
-(void)_registerForAVSystemControllerNotifications;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)queuePendingDataLookupResults:(id)results;
-(id)dequeuePendingDataLookupResults;
-(BOOL)hasPendingDataLookupResults;
-(void)dealloc;
-(id)init;
@end

