/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>
#import "SBHostView.h"

@class UIColor, SBAppContextHostManager;

__attribute__((visibility("hidden")))
@interface SBHostWrapperView : UIView <SBHostView> {
	UIColor* _backgroundColorWhileNotHosting;
	UIColor* _backgroundColorWhileHosting;
	SBAppContextHostManager* _manager;
}
@property(retain, nonatomic) UIColor* backgroundColorWhileNotHosting;
@property(retain, nonatomic) UIColor* backgroundColorWhileHosting;
@property(assign, nonatomic) SBAppContextHostManager* manager;
-(id)window;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(id)description;
-(void)willRemoveSubview:(id)subview;
-(void)didAddSubview:(id)subview;
-(void)_toggleBackgroundColorIfNecessary;
-(void)_hostingStatusChanged;
-(BOOL)_isReallyHosting;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame contextHostManager:(id)manager;
@end

