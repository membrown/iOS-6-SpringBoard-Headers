/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface SBSlidingViewHighlight : UIView {
	UIImageView* _leftHighlight;
	UIImageView* _rightHighlight;
	CGRect _notchRect;
}
+(id)highlightImage;
+(float)defaultHeight;
-(void)dealloc;
-(void)setNotchRect:(CGRect)rect;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame notchRect:(CGRect)rect;
-(id)initWithFrame:(CGRect)frame;
@end
