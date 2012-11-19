/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertView.h"
#import "UITextFieldDelegate.h"

@class TPBottomSingleButtonBar, UITransitionView, UIScrollView, SBTextDisplayView, UIActivityIndicatorView, UITextField;

__attribute__((visibility("hidden")))
@interface SBUSSDAlertDisplay : SBAlertView <UITextFieldDelegate> {
	TPBottomSingleButtonBar* _responseBar;
	UIView* _notifyView;
	UIView* _replyView;
	UITransitionView* _transitionView;
	UIScrollView* _scroller;
	SBTextDisplayView* _contentView;
	SBTextDisplayView* _charsRemainingView;
	UIActivityIndicatorView* _progressIndicator;
	UITextField* _responseField;
	BOOL _allowsResponse;
}
-(void)_cancelClicked;
-(void)_okayClicked;
-(void)_replyClicked;
-(void)_textChanged:(id)changed;
-(void)_updateCharsRemaining;
-(BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;
-(void)setAllowsResponse:(BOOL)response;
-(BOOL)allowsResponse;
-(void)alertStringAvailable:(id)available;
-(void)_setupResponseBar;
-(void)alertDisplayBecameVisible;
-(void)alertDisplayWillBecomeVisible;
-(void)displayString:(id)string centerVertically:(BOOL)vertically;
-(void)dealloc;
-(id)_replyView;
-(id)_notifyView;
-(id)initWithFrame:(CGRect)frame;
@end
