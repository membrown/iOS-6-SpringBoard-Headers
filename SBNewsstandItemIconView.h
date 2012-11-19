/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBNewsstandItemIconViewBase.h"
#import "SpringBoard-Structs.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface SBNewsstandItemIconView : SBNewsstandItemIconViewBase {
	UIView* _iconTransformView;
	UILabel* _indexLabel;
	unsigned _newsstandIndex;
}
+(CGSize)_maxLabelSize;
+(CGSize)defaultIconSize;
-(void)setNewsstandIndex:(unsigned)index;
-(void)positionLabel;
-(void)setIsGrabbed:(BOOL)grabbed;
-(CGRect)_frameForAccessoryView;
-(void)positionIconImageView;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)applyIconImageTransform:(CATransform3D)transform duration:(float)duration delay:(float)delay;
-(id)createShadowImageView;
-(void)positionCloseBoxOfType:(int)type;
-(void)prepareForRecycling;
-(CGRect)defaultFrameForProgressBar;
-(void)dealloc;
-(id)initWithDefaultSize;
-(id)initWithFrame:(CGRect)frame;
@end
