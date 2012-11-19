/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIButton.h>


__attribute__((visibility("hidden")))
@interface SBNowPlayingPushButton : UIButton {
	float _yOffset;
	float _xOffset;
}
+(id)newButtonWithImage:(id)image;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(CGRect)hitRect;
-(void)setXOffset:(float)offset;
-(void)setYOffset:(float)offset;
@end
