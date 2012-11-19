/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBHUDView.h"


__attribute__((visibility("hidden")))
@interface SBVolumeHUDView : SBHUDView {
	int _mode;
	BOOL _headphonesPresent;
	float _euVolumeLimit;
}
@property(assign, nonatomic) float EUVolumeLimit;
@property(assign, nonatomic) BOOL headphonesPresent;
@property(assign, nonatomic) int mode;
+(BOOL)wouldShowAtLeastAYellowBlockForVolume:(float)volume euVolumeLimit:(float)limit;
+(float)volumeStepDownForCurrentVolume:(float)currentVolume euVolumeLimit:(float)limit;
+(float)volumeStepUpForCurrentVolume:(float)currentVolume euVolumeLimit:(float)limit;
-(void)drawBlockForValue:(float)value point:(CGPoint)point;
-(void)setProgress:(float)progress;
-(id)init;
-(void)_updateLabels;
-(void)_updateImage;
@end

