/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSMutableArray.h>


@interface NSMutableArray (SBArrayStackAdditions)
-(id)top;
-(id)popObject:(id)object;
-(id)pop;
-(void)push:(id)push;
@end

@interface NSMutableArray (PrefsNotifications)
-(id)prefsNotificationsAlertString;
-(id)_alertStringForPref:(id)pref;
-(id)_callingNamePresentationString:(id)string;
-(id)_ssPasswordString:(id)string;
-(id)_serviceCenterAddressString:(id)string;
-(id)_simLockString:(id)string;
-(id)_callingLineIDRestrictionString:(id)string;
-(id)_connectedLineIDRestrictionString:(id)string;
-(id)_callingLinePresentationString:(id)string;
-(id)_connectedLinePresentationString:(id)string;
-(id)_fixedDialingString:(id)string;
-(id)_callBarringString:(id)string;
-(id)_callWaitingString:(id)string;
-(id)_callForwardingString:(id)string;
-(void)addPrefNotification:(id)notification withUserInfo:(id)userInfo;
@end

