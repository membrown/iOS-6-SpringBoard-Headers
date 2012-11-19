/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "SBCardItemsControllerRemoteInterface.h"
#import "XPCProxyTarget.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBCardItemsController : NSObject <SBCardItemsControllerRemoteInterface, XPCProxyTarget> {
	NSMutableArray* _remoteControllers;
	NSMutableDictionary* _cardItems;
}
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)getCardItemsForControllerWithIdentifier:(id)identifier withHandler:(id)handler;
-(void)clearCardItemsForControllerWithIdentifier:(id)identifier;
-(void)removeCardItems:(id)items forControllerWithIdentifier:(id)identifier;
-(void)addCardItems:(id)items forControllerWithIdentifier:(id)identifier;
-(void)setCardItems:(id)items forControllerWithIdentifier:(id)identifier;
-(void)_activateAllCardItems;
-(void)cardItemsDidChange:(id)cardItems forControllerWithIdentifier:(id)identifier;
-(void)_addControllerWithConnection:(id)connection;
-(void)dealloc;
-(id)init;
@end

