/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class SBWallpaperView;

__attribute__((visibility("hidden")))
@interface SBWallpaperNotchView : UIView {
	SBWallpaperView* _wallpaperView;
	XXStruct_9ihRqB _notchInfo;
}
-(void)drawRect:(CGRect)rect;
-(void)setNotchInfo:(XXStruct_9ihRqB)info;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame wallpaperView:(id)view notchInfo:(XXStruct_9ihRqB)info;
@end

