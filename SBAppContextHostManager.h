/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "SpringBoard-Structs.h"

@class SBAppContextHostView, NSMutableArray, NSString, SBOrderedRequesters, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBAppContextHostManager : NSObject {
	SBAppContextHostView* _contextHostView;
	NSString* _appBundleID;
	NSMutableArray* _contexts;
	BOOL _hostingEnabled;
	BOOL _suspended;
	SBOrderedRequesters* _hostRequesters;
	NSMutableDictionary* _hostRequesterInfo;
}
@property(readonly, assign, nonatomic) unsigned contextCount;
@property(readonly, assign, nonatomic, getter=isHostingEnabled) BOOL hostingEnabled;
@property(copy, nonatomic) NSString* appBundleID;
-(void)_adjustLayerFrameAndTransform:(id)transform;
-(void*)createIOSurfaceForFrame:(CGRect)frame excludeContext:(unsigned)context outTransform:(CGAffineTransform*)transform;
-(void*)createIOSurfaceForFrame:(CGRect)frame outTransform:(CGAffineTransform*)transform;
-(void*)createIOSurfaceForFrame:(CGRect)frame;
-(void)setOrderOutPending:(BOOL)pending forContextId:(unsigned)contextId;
-(void)didOrderOutContextWithId:(unsigned)anId;
-(void)willOrderInContextWithId:(unsigned)anId windowLevel:(float)level windowOutput:(int)output flush:(BOOL)flush;
-(void)_setContext:(id)context hidden:(BOOL)hidden;
-(void)_removeRequesterInfo:(id)info;
-(void)_applyRequesterInfo:(id)info;
-(id)_infoForRequester:(id)requester;
-(void)_notePropertiesSetOnRealContextHostViewWhichIReallyNeedToChangeAndIKnowWhatImDoingISwear:(id)changeAndIKnowWhatImDoingISwear originalProperties:(id)properties forRequester:(id)requester;
-(id)_realContextHostViewWhichIReallyNeedToAccessAndIKnowWhatImDoingISwear;
-(void)setContextId:(unsigned)anId hidden:(BOOL)hidden forRequester:(id)requester;
-(void)orderRequesterFront:(id)front;
-(void)disableHostingForAllRequesters;
-(void)disableHostingForRequester:(id)requester;
-(void)resumeContextHosting;
-(void)suspendContextHosting;
-(BOOL)_clearContextHosts;
-(BOOL)_startContextHosting;
-(void)enableHostingForRequester:(id)requester priority:(int)priority;
-(id)hostViewForRequester:(id)requester;
-(id)description;
-(void)dealloc;
-(id)init;
@end

