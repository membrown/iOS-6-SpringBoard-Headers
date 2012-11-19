/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "SpringBoard-Structs.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBIconLabelImageParameters : NSObject <NSCopying> {
	NSString* _text;
	BOOL _containsNonLatinLikeCharacters;
	BOOL _containsEmoji;
	BOOL _canEllipsize;
	CGSize _maxSize;
}
+(id)parametersWithText:(id)text canEllipsize:(BOOL)ellipsize maxSize:(CGSize)size;
-(CGSize)shadowOffset;
-(float)shadowBlur;
-(id)shadowColor;
-(id)textColor;
-(id)font;
-(BOOL)colorspaceIsGrayscale;
-(CGSize)maxSize;
-(BOOL)canEllipsize;
-(id)text;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(id)initWithText:(id)text canEllipsize:(BOOL)ellipsize maxSize:(CGSize)size;
@end

