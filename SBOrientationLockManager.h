/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SBOrientationLockManager : NSObject {
	NSMutableSet* _lockOverrideReasons;
	int _userLockedOrientation;
}
+(id)sharedInstance;
-(BOOL)_effectivelyLocked;
-(void)_updateLockStateWithOrientation:(int)orientation forceUpdateHID:(BOOL)hid changes:(id)changes;
-(void)_updateLockStateWithOrientation:(int)orientation changes:(id)changes;
-(void)_updateLockStateWithChanges:(id)changes;
-(void)updateLockOverrideForCurrentDeviceOrientation;
-(BOOL)lockOverrideEnabled;
-(void)enableLockOverrideForReason:(id)reason forceOrientation:(int)orientation;
-(void)enableLockOverrideForReason:(id)reason suggestOrientation:(int)orientation;
-(void)setLockOverrideEnabled:(BOOL)enabled forReason:(id)reason;
-(int)userLockOrientation;
-(BOOL)isLocked;
-(void)unlock;
-(void)lock:(int)lock;
-(void)lock;
-(void)dealloc;
-(id)init;
-(void)restoreStateFromPrefs;
@end

