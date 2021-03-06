/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBCallFailureAlert : SBAlert {
	long _causeCode;
	NSString* _address;
	int _uid;
	CTCallRef _call;
}
+(void)test;
+(void)activateForCall:(CTCallRef)call causeCode:(long)code;
+(BOOL)shouldDisplayForCauseCode:(long)causeCode modemCauseCode:(long)code;
-(void)setCallAddress:(id)address;
-(int)addressBookUID;
-(id)callAddress;
-(CTCallRef)call;
-(long)causeCode;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(void)activateWhenPossible;
-(void)dealloc;
-(id)initWithCauseCode:(long)causeCode call:(CTCallRef)call;
@end

