/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "NSFastEnumeration.h"
#import "SpringBoard-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBStringMetrics : NSObject <NSFastEnumeration> {
	NSMutableArray* _fragments;
}
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(unsigned)fragmentCount;
-(id)fragments;
-(void)addFragment:(id)fragment;
-(id)description;
-(void)dealloc;
-(id)init;
@end

