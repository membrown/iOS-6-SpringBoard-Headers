/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import </libobjc.A.h>
#import "UITableViewDelegate.h"
#import "SPSearchAgentDelegate.h"
#import "SpringBoard-Structs.h"
#import "UISearchBarDelegate.h"

@class SBSearchView;

__attribute__((visibility("hidden")))
@interface SBSearchController : NSObject <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, SPSearchAgentDelegate> {
	SBSearchView* _searchView;
	BOOL _reloadingTableContent;
	BOOL _resultsUpdated;
	void* _addressBook;
}
@property(retain, nonatomic) SBSearchView* searchView;
-(id)_auxiliaryTitleForABRecordID:(int)abrecordID;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)searchAgentClearedResults:(id)results;
-(void)searchAgentUpdatedResults:(id)results;
-(void)_updateTableContents;
-(void)_tableViewDidFadeOut:(id)_tableView finished:(id)finished context:(void*)context;
-(void)scrollViewDidScroll:(id)scrollView;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(BOOL)tableView:(id)view wantsHeaderForSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)_deselect;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)_populateCell:(id)cell withSearchResultAtIndex:(int)index inSection:(id)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(BOOL)shouldShowKeyboardOnScroll;
-(void)scrollViewIsScrollingHorizontallyInSearchView;
-(void)controllerWasDeactivated;
-(void)controllerWasActivated;
-(void)updateResultsIfNecessary;
-(void)dealloc;
-(id)init;
@end

