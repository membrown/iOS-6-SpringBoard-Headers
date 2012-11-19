/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class SBIcon;

__attribute__((visibility("hidden")))
@interface SBIconRotationContainer : UIView {
	UIView* _startSnapshot;
	UIView* _endSnapshot;
	SBIcon* _icon;
	BOOL _shouldCrossfade;
	int _toOrientation;
	int _fromOrientation;
	unsigned _startIndex;
	unsigned _endIndex;
}
@property(retain, nonatomic) SBIcon* icon;
-(id)newSnapshot:(id)snapshot includingShadows:(BOOL)shadows;
-(void)crossfadeWithDuration:(double)duration inIconList:(id)iconList;
-(void)prepareToCrossfade;
-(void)setOrigin:(CGPoint)origin;
-(void)setStartIcon:(id)icon endIcon:(id)icon2 inIconList:(id)iconList fromOrientation:(int)orientation toOrientation:(int)orientation5;
-(void)dealloc;
@end

