/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIImage.h>
#import "SBCountedMapValue.h"

@class SBIconLabelImageParameters;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface SBIconLabelImage : UIImage <SBCountedMapValue> {
	SBIconLabelImageParameters* _parameters;
	CGPoint _maxSizeOffset;
}
@property(readonly, assign, nonatomic) id<NSCopying> countedMapKey;
@property(readonly, assign, nonatomic) CGPoint maxSizeOffset;
@property(readonly, assign, nonatomic) SBIconLabelImageParameters* parameters;
+(void)checkinLabelImage:(id)image;
+(id)checkoutLabelImageForParameters:(id)parameters;
+(id)_drawLabelImageForParameters:(id)parameters;
+(id)_labelImageCountedMap;
+(void)drawImageInRect:(CGRect)rect fromParameters:(id)parameters;
+(CGRect)rectIncludingShadow:(BOOL)shadow fromParameters:(id)parameters constrainedToRect:(CGRect)rect;
+(CGRect)_rectIncludingShadow:(BOOL)shadow withDrawing:(BOOL)drawing inRect:(CGRect)rect fromParameters:(id)parameters;
-(void)dealloc;
-(id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;
-(id)_initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation parameters:(id)parameters maxSizeOffset:(CGPoint)offset;
@end

