/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol BBObserverDelegate <NSObject>
@optional
-(CGSize)observer:(id)observer composedAttachmentSizeForType:(int)type thumbnailWidth:(float)width height:(float)height key:(id)key;
-(id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
-(id)observer:(id)observer multipleThumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
-(id)observer:(id)observer thumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
-(BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)observer;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
-(void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
-(void)observer:(id)observer purgeReferencesToBulletinID:(id)bulletinID;
-(void)observer:(id)observer noteSectionParametersChanged:(id)changed;
-(void)observer:(id)observer updateSectionInfo:(id)info;
-(void)observer:(id)observer updateSectionOrder:(id)order;
-(void)observer:(id)observer updateSectionOrderRule:(unsigned)rule;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer modifyBulletin:(id)bulletin;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
@end

