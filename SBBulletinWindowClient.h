/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBBulletinWindowClient <NSObject>
-(void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
-(void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation;
-(void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow;
@optional
-(void)bulletinWindowDidResignKey;
-(void)bulletinWindowDidBecomeKey;
-(BOOL)requiresKeyWindow;
@end
