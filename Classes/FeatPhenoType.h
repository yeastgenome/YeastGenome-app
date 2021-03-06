//
//  FeatPhenoType.h
//  SGD_Vivek
//
//  Created by Vivek on 09/03/11.
//  Copyright 2011 Stanford University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FeatPhenoTypeDetails.h"
#import "webServiceHelper.h"
#import <MessageUI/MessageUI.h>
#import <MessageUI/MFMailComposeViewController.h>

#define kCellLabelTag		1001
#define kCellSquareTag      1002
#define kCellFeatureNmTag   1003
#define kCellGeneNmTag      1004
#define kCellEvideNmTag     1005

@class FeatPhenoTypeDetails;
@interface FeatPhenoType : UIViewController <UIActionSheetDelegate,UIAlertViewDelegate, DownloadCompleteDelegate, MFMailComposeViewControllerDelegate>
{
	UIAlertView					*progAlertView;
	UIActivityIndicatorView		*activityIndView;
	NSManagedObjectContext		*managedObjectContext;		
	
	NSMutableArray				*allNewObjectsPhenoList;
	
	FeatPhenoTypeDetails		*objPhenoDetails;
	UIButton					*EmailButton;
    
    IBOutlet UITableView        *tempTableview;
    int respCnt;
    
    BOOL isPhysNotMapped;
}

@property (nonatomic, assign) BOOL isPhysNotMapped;
@property (nonatomic, retain) NSMutableArray            *allNewObjectsPhenoList;
@property (nonatomic, retain) FeatPhenoTypeDetails		*objPhenoDetails;
@property (nonatomic, retain) NSManagedObjectContext	*managedObjectContext;	
@property (nonatomic, retain) UIAlertView               *progAlertView;
@property (nonatomic, retain) UIActivityIndicatorView   *activityIndView;

-(void)webServiceCall:(NSString *)webserviceName;
-(void)getResultsAndInsert:(NSMutableArray *)resultSet;
-(void)createProgressionAlertWithMessage:(NSString *)message;

-(IBAction)pushedEmailButton:(id)sender;

@end
