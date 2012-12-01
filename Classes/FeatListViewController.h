//
//  FeatListViewController.h
//  SGD_2
//
//  Created by Vishwanath on 08/07/11.
//  Copyright 2011 Stanford University. All rights reserved.
//

/*
 Class to browse the features according to there feature type and qualifier.
 eg: feature type 'ORF' with qualifier 'Verified'.
 */
#import <UIKit/UIKit.h>
#import "BrowseGeneList.h"

@class BrowseGeneList;

@interface FeatListViewController : UIViewController <UITableViewDelegate,UITableViewDataSource>{

	NSMutableArray              *allFeatsList;
	
	NSManagedObjectContext      *managedObjectContext;
	
	BrowseGeneList              *browseFeatureListVC;
	
    UIAlertView					*progAlertView;
	UIActivityIndicatorView		*activityIndView;
    IBOutlet UITableView        *tempTableview;
   
}

@property (nonatomic, retain) NSMutableArray          *allFeatsList;

@property (nonatomic, retain) NSManagedObjectContext  *managedObjectContext;

@property (nonatomic, retain) BrowseGeneList          *browseFeatureListVC;

@property (nonatomic, retain) UIAlertView             *progAlertView;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndView;


@end
