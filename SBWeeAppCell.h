/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBulletinLinenBackedCell.h"

@class UIView, UITapGestureRecognizer, SBWeeApp;

__attribute__((visibility("hidden")))
@interface SBWeeAppCell : SBBulletinLinenBackedCell {
	SBWeeApp* _weeApp;
	UIView* _weeAppView;
	BOOL _useTopPadding;
	UITapGestureRecognizer* _tapRecognizer;
}
@property(retain, nonatomic) SBWeeApp* weeApp;
+(float)rowHeightForViewHeight:(float)viewHeight withTopPadding:(BOOL)topPadding;
-(void)_tapped:(id)tapped;
-(void)prepareForReuse;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)window;
-(void)noteDidDisappear;
-(void)noteWillAppear;
-(void)layoutSubviews;
-(void)setUsesTopPadding:(BOOL)padding;
-(void)dealloc;
-(id)initWithLinenView:(id)linenView reuseIdentifier:(id)identifier;
@end

