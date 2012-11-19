/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"

@class SBApplication, SBAwayController;

__attribute__((visibility("hidden")))
@interface SBReturnToLockscreenWorkspaceTransaction : SBWorkspaceTransaction {
	SBApplication* _fromApp;
	SBAwayController* _awayController;
	BOOL _workspaceAlreadyResumed;
}
-(BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(BOOL)selfWorkspaceDidResume;
-(BOOL)selfAlertDidActivate:(id)selfAlert overAlerts:(id)alerts;
-(void)_commit;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager fromApplication:(id)application toAwayController:(id)awayController;
@end

