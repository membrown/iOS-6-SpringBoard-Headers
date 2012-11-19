/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSMutableArray, SBWorkspaceEvent;

__attribute__((visibility("hidden")))
@interface SBWorkspaceEventQueue : NSObject {
	unsigned _lockCount;
	NSMutableArray* _eventQueue;
	SBWorkspaceEvent* _executingEvent;
}
@property(retain, nonatomic) SBWorkspaceEvent* executingEvent;
+(id)sharedInstance;
-(void)_bumpLockAssertionCount:(int)count;
-(void)_processNextEvent;
-(BOOL)hasEventWithName:(id)name;
-(BOOL)hasEventWithPrefix:(id)prefix;
-(void)cancelEventsWithName:(id)name;
-(BOOL)isLocked;
-(void)executeOrPrependEvents:(id)events;
-(void)executeOrPrependEvent:(id)event;
-(void)executeOrAppendEvent:(id)event;
-(void)_executeOrPendEvents:(id)events position:(int)position;
-(id)description;
-(void)dealloc;
-(id)init;
@end

