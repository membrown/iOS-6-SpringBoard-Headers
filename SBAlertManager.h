/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "SpringBoard-Structs.h"

@class NSMutableArray, SBAlertWindow;
@protocol SBAlertManagerDelegate;

__attribute__((visibility("hidden")))
@interface SBAlertManager : NSObject {
	SBAlertWindow* _alertWindow;
	SBAlertWindow* _deferredAlertWindow;
	NSMutableArray* _alerts;
	BOOL _deactivatingAllAlerts;
	id<SBAlertManagerDelegate> _delegate;
}
@property(assign, nonatomic) id<SBAlertManagerDelegate> delegate;
-(void)_deactivateAfterNextLaunch:(id)launch;
-(void)_updateSEOStatus;
-(void)_tearDownAlertWindow:(id)window;
-(id)debugDescription;
-(id)description;
-(void)removeFromView:(id)view;
-(void)_updateStatusBarTimeItemEnabled;
-(CGRect)_alertWindowRect;
-(int)orientation;
-(void)noteOrientationChanged:(int)changed;
-(void)workspaceDidAnimateSuspendingApp;
-(void)workspaceWillAnimateActivatingApp;
-(void)deactivateAlertsAfterLaunch;
-(void)setAlertsShouldDeactivateAfterLaunch;
-(void)deactivateAll;
-(BOOL)containsAlert:(id)alert;
-(void)_deactivate:(id)deactivate;
-(void)deactivate:(id)deactivate;
-(void)_activate:(id)activate;
-(void)activate:(id)activate;
-(id)allAlerts;
-(BOOL)hasStackedAlerts;
-(id)activeAlert;
-(id)window;
-(void)dealloc;
-(id)init;
@end

