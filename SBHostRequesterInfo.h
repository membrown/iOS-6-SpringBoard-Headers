/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class SBHostWrapperView, NSDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SBHostRequesterInfo : NSObject {
	SBHostWrapperView* _wrapperView;
	NSMutableSet* _hiddenContexts;
	NSDictionary* _realContextHostViewChangedProperties;
	NSDictionary* _realContextHostViewOriginalProperties;
}
@property(retain, nonatomic) NSDictionary* realContextHostViewOriginalProperties;
@property(retain, nonatomic) NSDictionary* realContextHostViewChangedProperties;
@property(readonly, assign, nonatomic) NSMutableSet* hiddenContexts;
@property(readonly, assign, nonatomic) SBHostWrapperView* wrapperView;
-(void)dealloc;
-(id)init;
@end

