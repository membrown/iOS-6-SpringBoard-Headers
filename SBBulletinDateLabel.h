/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@protocol SBDateLabelDelegate;

@protocol SBBulletinDateLabel <NSObject>
@property(assign, nonatomic) int labelType;
@property(assign, nonatomic) id<SBDateLabelDelegate> delegate;
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;
-(void)prepareForReuse;
-(void)stopCoalescingUpdates;
-(void)startCoalescingUpdates;
-(void)setEndDate:(id)date withTimeZone:(id)timeZone;
-(void)setStartDate:(id)date withTimeZone:(id)timeZone;
@end

