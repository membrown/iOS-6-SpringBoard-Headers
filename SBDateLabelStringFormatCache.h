/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSNumberFormatter, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface SBDateLabelStringFormatCache : NSObject {
	NSDateFormatter* _dayOfWeekFormatter;
	NSDateFormatter* _dayOfWeekWithTimeFormatter;
	NSDateFormatter* _dayMonthYearFormatter;
	NSDateFormatter* _shortDayMonthFormatter;
	NSDateFormatter* _shortDayMonthTimeFormatter;
	NSDateFormatter* _abbrevDayMonthFormatter;
	NSDateFormatter* _abbrevDayMonthTimeFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _relativeDateTimeFormatter;
	NSNumberFormatter* _decimalFormatter;
}
+(id)sharedInstance;
+(void)load;
-(id)formatDateAsRelativeDateAndTimeStyle:(id)style;
-(id)formatDateAsTimeStyle:(id)style;
-(id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)timeStyle;
-(id)formatDateAsAbbreviatedDayMonthStyle:(id)style;
-(id)formatDateAsShortDayMonthWithTimeStyle:(id)timeStyle;
-(id)formatDateAsDayMonthYearStyle:(id)style;
-(id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)time;
-(id)formatDateAsDayOfWeek:(id)week;
-(id)formatNumberAsDecimal:(id)decimal;
-(void)resetFormatters:(id)formatters;
-(void)resetFormattersIfNecessary;
-(void)dealloc;
-(id)init;
@end

