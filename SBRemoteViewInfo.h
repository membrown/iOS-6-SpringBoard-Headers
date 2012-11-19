/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "SpringBoard-Structs.h"

@class SBApplication, NSString, SBProxyRemoteView;

__attribute__((visibility("hidden")))
@interface SBRemoteViewInfo : NSObject {
	NSString* _remoteViewIdentifier;
	SBProxyRemoteView* _proxyRemoteView;
	unsigned _contextID;
	SBApplication* _application;
	CGSize _viewSize;
}
@property(assign, nonatomic) CGSize viewSize;
@property(retain, nonatomic) SBApplication* application;
@property(assign, nonatomic) unsigned contextID;
@property(retain, nonatomic) SBProxyRemoteView* proxyRemoteView;
@property(retain, nonatomic) NSString* remoteViewIdentifier;
-(void)dealloc;
@end

