/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIImageView.h>


__attribute__((visibility("hidden")))
@interface SBFolderNotchView : UIImageView {
	XXStruct_9ihRqB _notchInfo;
	int _orientation;
}
+(id)notchForNotchInfo:(XXStruct_9ihRqB)notchInfo orientation:(int)orientation;
+(id)_imageForNotchInfo:(XXStruct_9ihRqB)notchInfo orientation:(int)orientation;
+(id)_squareImageForNotchInfo:(XXStruct_9ihRqB)notchInfo orientation:(int)orientation;
+(id)_keyForNotchInfo:(XXStruct_9ihRqB)notchInfo orientation:(int)orientation;
+(id)_keyComponentForNotchInfoRect:(CGRect)notchInfoRect;
-(void)setNotchInfo:(XXStruct_9ihRqB)info orientation:(int)orientation;
-(id)initWithFrame:(CGRect)frame notchInfo:(XXStruct_9ihRqB)info orientation:(int)orientation;
@end
