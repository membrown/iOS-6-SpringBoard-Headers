/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class UIColor, UIBezierPath;

__attribute__((visibility("hidden")))
@interface SBResetProgressView : UIView {
	UIColor* _progressColor;
	UIBezierPath* _path;
	float _resetProgress;
}
-(void)drawRect:(CGRect)rect;
-(id)_progressColor;
-(id)_outlinePath;
-(void)setResetProgress:(float)progress;
-(void)dealloc;
@end

