/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBFolderView.h"

@class UIButton, SBNewsstandCardView, NSTimer, UITableView, UIImageView, SBNewsstandShelfFrameView;

__attribute__((visibility("hidden")))
@interface SBNewsstandFolderView : SBFolderView {
	UIButton* _storeButton;
	UIImageView* _navigationBar;
	UIImageView* _bottomBar;
	UITableView* _shelvesView;
	SBNewsstandShelfFrameView* _shelfFrameView;
	unsigned _minVisibleRow;
	unsigned _maxVisibleRow;
	int _lastConfiguredOrientation;
	BOOL _didMakeHeaderVisible;
	float _targetContentOffset;
	BOOL _orientationShenanigans;
	NSTimer* _autoscrollTimer;
	double _autoscrollStartTime;
	int _autoscrollDirection;
	float _autoscrollIntensity;
	SBNewsstandCardView* _cardView;
	BOOL _showingCardView;
}
+(id)woodImageForNotchDirection:(int)notchDirection inOrientation:(int)orientation;
+(id)_bottombarImageForOrientation:(int)orientation;
+(id)_navbarImageForOrientation:(int)orientation;
-(void)_placeBackgroundView;
-(void)_placeIconListView;
-(void)_placeBars;
-(float)_labelHorizontalInset;
-(float)_labelVerticalInset;
-(void)_placeShadows;
-(void)_placeShadow:(int)shadow;
-(id)_shadowForPosition:(int)position;
-(id)_shadowImageForPosition:(int)position;
-(id)editTitleField;
-(BOOL)canEditTitle;
-(void)scrollViewDidScroll:(id)scrollView;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)showStoreCard:(BOOL)card animate:(BOOL)animate;
-(void)setFrame:(CGRect)frame;
-(CGPoint)_getOriginForCardOnShelf;
-(BOOL)isShowingCard;
-(id)cardView;
-(void)noteHasGrabbedIcon:(id)icon;
-(void)noteGrabbedIconLocation:(CGPoint)location;
-(void)_autoscrollTimerFired:(id)fired;
-(float)_maxVelocityInDirection:(int)direction;
-(int)_autoscrollableDirections;
-(void)_cancelAutoscroll;
-(void)didDropIconView;
-(void)prepareToDropIconView:(id)dropIconView targetFolderBounds:(CGRect*)bounds;
-(void)setScrollOffset:(id)offset;
-(id)scrollOffset;
-(BOOL)isScrolling;
-(void)_storeAvailabilityDidChange:(id)_storeAvailability;
-(void)storeButtonClicked;
-(void)cleanUpAfterOrientationChange;
-(void)prepareToSetOrientation:(int)setOrientation;
-(void)_updateRotationDebugging;
-(void)_prepareToSetOrientation:(int)setOrientation dryRun:(BOOL)run;
-(unsigned)_rowForScrollOffset:(float)scrollOffset;
-(void)setRows:(unsigned)rows notchInfo:(XXStruct_9ihRqB)info orientation:(int)orientation;
-(void)_createInitialIconViews;
-(void)_setupFolderTitleLabel;
-(void)_setupBackgroundView;
-(void)_setupNavigationBar;
-(void)_configureBars;
-(void)_updateVisibleRows;
-(CGSize)_sizeForCurrentConfiguration;
-(CGSize)_contentSizeForRows:(unsigned)rows inOrientation:(int)orientation;
-(float)_contentHeightForCurrentConfiguration;
-(float)_contentHeightForRows:(unsigned)rows;
-(float)_maxHeightForOrientation:(int)orientation;
-(float)_extraRowPeekage;
-(float)_shelfHeaderHeight;
-(BOOL)_shouldShowStoreButton;
-(float)_heightPerRow;
-(id)iconListView;
-(CGRect)rectForNotchLinen;
-(Class)notchViewClass;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

