/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSDate, NSCalendar, NSTimer;
@protocol SBRelativeDateTimerDelegate;

__attribute__((visibility("hidden")))
@interface SBRelativeDateTimer : NSObject {
	NSCalendar* _gregorian;
	NSTimer* _timer;
	NSDate* _date;
	id<SBRelativeDateTimerDelegate> _delegate;
	int _currResolution;
	int _currValue;
}
+(void)invalidateTimer:(id)timer;
+(void)addTimerToMainRunLoop:(id)mainRunLoop;
+(void)initialize;
-(double)_nextFireInterval:(id)interval resolution:(int)resolution comparedToNow:(int)now;
-(void)_fireAndUpdateTimerIfNecessary;
-(id)_timeDifferenceFromDate:(id)date;
-(void)invalidate;
-(void)fireAndSchedule;
-(double)nextFireInterval;
-(id)date;
-(void)setDate:(id)date;
-(void)setDelegate:(id)delegate;
-(void)_fireForLocaleEvent:(id)localeEvent;
-(void)_fireForEvent:(id)event;
-(void)dealloc;
-(id)init;
@end
