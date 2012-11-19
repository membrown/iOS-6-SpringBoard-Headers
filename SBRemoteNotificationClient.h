/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "NSCoding.h"

@class NSData, NSString, NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface SBRemoteNotificationClient : NSObject <NSCoding> {
	NSString* _bundleIdentifier;
	NSString* _environment;
	unsigned _appEnabledTypes;
	unsigned _settingsEnabledTypes;
	unsigned _settingsPresentedTypes;
	NSData* _lastKnownDeviceToken;
	NSDate* _missingDate;
	int _dayOfLastContentPush;
	unsigned _dailyCountOfContentPushes;
	BOOL _hasShownSystemwideEnableAlert;
	NSDictionary* _lastUserInfo;
}
@property(retain, nonatomic) NSDictionary* lastUserInfo;
@property(assign, nonatomic) BOOL hasShownSystemwideEnableAlert;
@property(assign, nonatomic) unsigned dailyCountOfContentPushes;
@property(assign, nonatomic) int dayOfLastContentPush;
@property(retain, nonatomic) NSDate* missingDate;
@property(retain, nonatomic) NSData* lastKnownDeviceToken;
@property(assign, nonatomic) unsigned settingsPresentedTypes;
@property(assign, nonatomic) unsigned settingsEnabledTypes;
@property(assign, nonatomic) unsigned appEnabledTypes;
@property(retain, nonatomic) NSString* environment;
@property(readonly, assign, nonatomic) NSString* bundleIdentifier;
-(unsigned)effectivelyEnabledTypes;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithBundleIdentifier:(id)bundleIdentifier;
@end
