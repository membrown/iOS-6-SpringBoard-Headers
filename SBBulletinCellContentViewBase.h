/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>
#import "SBDateLabelDelegate.h"

@class UIColor, SBStringMetrics, UILabel, UIImageView;
@protocol SBBulletinDateLabel;

__attribute__((visibility("hidden")))
@interface SBBulletinCellContentViewBase : UIView <SBDateLabelDelegate> {
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _messageLabel;
	SBStringMetrics* _messageMetrics;
	UILabel<SBBulletinDateLabel>* _dateLabel;
	UILabel<SBBulletinDateLabel>* _endDateLabel;
	UIImageView* _attachmentImageView;
	UILabel* _attachmentLabel;
	BOOL _isVIP;
	UIImageView* _vipImageView;
	unsigned _maxMessageLines;
	unsigned _maxTitleLines;
	CGSize _imageSize;
	UIColor* _shadowColor;
	int _layoutStyle;
	float _titleLineHeight;
	float _subtitleLineHeight;
	float _messageLineHeight;
	float _attachmentLineHeight;
	BOOL _highlighted;
	int _dateFormatStyle;
}
@property(assign, nonatomic) int dateFormatStyle;
@property(assign, nonatomic) int layoutStyle;
@property(retain, nonatomic) UIImageView* attachmentImageView;
@property(retain, nonatomic) UILabel<SBBulletinDateLabel>* endDateLabel;
@property(retain, nonatomic) UILabel<SBBulletinDateLabel>* dateLabel;
@property(retain, nonatomic) UILabel* attachmentLabel;
@property(retain, nonatomic) UILabel* messageLabel;
@property(retain, nonatomic) UILabel* subtitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
-(id)_vipAccessoryImage;
-(id)_attachmentFont;
-(id)_messageFont;
-(id)_subtitleFont;
-(id)_titleFont;
-(id)_dateFont;
-(void)_configureLabel:(id)label withFont:(id)font color:(id)color alignment:(int)alignment;
-(float)_heightForLabel:(id)label forWidth:(float)width maxHeight:(float)height;
-(float)_heightForLabel:(id)label forWidth:(float)width minLines:(unsigned)lines maxLines:(unsigned)lines4 lineHeight:(float)height;
-(void)_updateLabelFontsAndLineHeights;
-(void)setVIP:(BOOL)vip;
-(void)setAttachmentImageSize:(CGSize)size;
-(void)setAttachmentImage:(id)image;
-(void)setStartDate:(id)date endDate:(id)date2 timeZone:(id)zone allDay:(BOOL)day formatStyle:(int)style;
-(void)dateLabelDidChange:(id)dateLabel;
-(void)setAttachmentText:(id)text;
-(void)setMessage:(id)message;
-(void)setSubtitle:(id)subtitle;
-(void)setTitle:(id)title;
-(id)_modifiedLabel:(id)label withText:(id)text font:(id)font;
-(id)_modifiedLabel:(id)label withText:(id)text font:(id)font alignment:(int)alignment;
-(void)setShadowColor:(id)color;
-(void)setMessageMaxLines:(unsigned)lines;
-(void)setTitleMaxLines:(unsigned)lines;
-(void)dealloc;
-(id)initForSystemAlertStyle;
-(id)initForBulletinStyle;
-(id)_initForLayoutStyle:(int)layoutStyle;
@end

