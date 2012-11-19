/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBPushStore : NSObject {
	NSObject<OS_dispatch_queue>* _notificationsQueue;
	NSObject<OS_dispatch_queue>* _settingsQueue;
}
+(void)migratePushStore;
+(id)sharedInstance;
+(void)initialize;
-(void)dealloc;
-(BOOL)prepareToSupportLocalNotificationsTypes:(unsigned)supportLocalNotificationsTypes forBundleID:(id)bundleID;
-(void)setEffectivePushSettings:(unsigned)settings forBundleID:(id)bundleID;
-(unsigned)effectivePushSettingsForBundleID:(id)bundleID;
-(unsigned)_effectivePushSettingsForBundleID:(id)bundleID;
-(id)allNotificationEnabledBundleIDs;
-(id)allLocalNotificationEnabledBundleIDs;
-(id)lastUpdateDateForBundleID:(id)bundleID;
-(id)bundleIDsWithUpdatesSince:(id)updatesSince;
-(id)savedNotificationDataForBundleID:(id)bundleID;
-(void)makeTestNotificationStores;
-(void)removeAllLocalNotificationsForBundleID:(id)bundleID;
-(void)removeLocalNotification:(id)notification forBundleID:(id)bundleID;
-(void)saveLocalNotification:(id)notification forBundleID:(id)bundleID;
-(void)saveRemoteNotificationWithMessage:(id)message soundName:(id)name actionText:(id)text badge:(id)badge userInfo:(id)info launchImage:(id)image forBundleID:(id)bundleID;
-(void)_saveNotificationWithMessage:(id)message soundName:(id)name actionText:(id)text badge:(id)badge userInfo:(id)info launchImage:(id)image fullDetails:(id)details soundIsRingtone:(BOOL)ringtone isRemoteNotification:(BOOL)notification forBundleID:(id)bundleID;
-(void)clearNotificationsForBundleID:(id)bundleID;
-(void)unregisterAppForNotificationsWithBundleID:(id)bundleID;
-(void)_removeNotificationsForBundleID:(id)bundleID andSendNotification:(id)notification;
-(void)registerAppForNotificationsWithBundleID:(id)bundleID;
-(BOOL)_saveNotificationList:(id)list toPath:(id)path;
-(id)_allNotificationsFromPath:(id)path;
-(id)_allNotificationDataFromPath:(id)path;
-(BOOL)_notificationDataExistsAtPath:(id)path;
-(id)_notificationStoreFilenameForBundleID:(id)bundleID;
-(void)noteInstalledAppsChanged;
-(id)init;
@end

