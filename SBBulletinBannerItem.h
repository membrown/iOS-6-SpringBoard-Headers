/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <SpringBoardUI/SBUIBannerItem.h>

@class UIImage, BBObserver, BBBulletin, SBUISound, NSArray;

__attribute__((visibility("hidden")))
@interface SBBulletinBannerItem : SBUIBannerItem {
	BBBulletin* _seedBulletin;
	BBObserver* _observer;
	NSArray* _additionalBulletins;
	UIImage* _iconImage;
	SBUISound* _sound;
}
+(id)itemWithSeedBulletin:(id)seedBulletin additionalBulletins:(id)bulletins andObserver:(id)observer;
+(id)itemWithBulletin:(id)bulletin andObserver:(id)observer;
-(BOOL)canShowInAssistant;
-(id)sortDate;
-(id)seedBulletin;
-(id)action;
-(id)sound;
-(void)_setSound;
-(int)accessoryStyle;
-(id)attachmentText;
-(id)message;
-(id)title;
-(id)_appName;
-(id)iconImage;
-(id)attachmentImage;
-(id)additionalBulletins;
-(void)dealloc;
-(id)_initWithSeedBulletin:(id)seedBulletin additionalBulletins:(id)bulletins andObserver:(id)observer;
@end

