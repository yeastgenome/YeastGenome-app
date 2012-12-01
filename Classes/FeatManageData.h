//
//  FeatSyncUpList.h
//  SGD_2
//
//  Created by Vivek on 08/07/11.
//  Copyright 2011 Stanford University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "webServiceHelper.h"
#import "FeatManageData.h"
#import "FeatureDetails.h"
#import "sqlite3.h"


#define kCellImageViewTag		1000
#define kCellLabelTag			1001
#define kCellImageTag           1002  

#define kCellFavImgTag          1005


#define kLabelIndentedRect	CGRectMake(40.0, 12.0, 275.0, 30.0)
#define kLabelRect			CGRectMake(15.0, 12.0, 275.0, 30.0)

#define CHARACTERS          @" ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_-()[]"
#define CHARACTERS_NUMBERS  [CHARACTERS stringByAppendingString:@"1234567890"]

@interface FeatManageData : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UIAlertViewDelegate, DownloadCompleteDelegate>
{
	NSMutableArray				*allSynUpFeats;
    NSMutableArray				*allFeatures;
	NSMutableArray				*selectedArray;
	NSArray *                   array;
	NSManagedObjectContext		*managedObjectContext;
	
	UIButton					*synUpButton;
	UISearchBar					*sBar;
	
	
	BOOL						inPseudoEditMode;
	
	UIImage						*selectedImage;
	UIImage						*unselectedImage;
	
	UIAlertView					*progAlertView;
	UIActivityIndicatorView		*activityIndView;
	
	NSMutableArray				*rowsToBeUpdates;
    
    IBOutlet UITableView        *tempTableview;
    
    UIActivityIndicatorView     *progressInd;
	UIView                      *fadeView;
    
    int page;
    int tpages;
    int adjacents;
    BOOL isFetching;
    NSInteger firstScrollOffset;
    int  cntScroll;
    BOOL isSearch;
    BOOL isDataNotFound;
    int  Counter;
}

@property(nonatomic, retain) NSMutableArray *allSynUpFeats;
@property(nonatomic, retain) NSMutableArray	*allFeatures;
@property(nonatomic, retain) NSArray        *array;

@property(nonatomic, retain) NSMutableArray *selectedArray;
@property(nonatomic, retain) NSMutableArray	*rowsToBeUpdates;

@property(nonatomic, retain) NSManagedObjectContext  *managedObjectContext;

@property(nonatomic, retain) UIAlertView             *progAlertView;
@property(nonatomic, retain) UIActivityIndicatorView *activityIndView;

@property(nonatomic, retain) UIImage              *selectedImage;
@property(nonatomic, retain) UIImage              *unselectedImage;
@property(nonatomic, retain) IBOutlet UISearchBar *sBar;
@property BOOL inPseudoEditMode;


-(void)getSearchdata;
-(void)populateSelectedArray;
-(void)doSyncUp;

-(void)getdata;
-(void)getORFData:(int)offset limit:(int)limit;

-(void)setLabelSizeFor: (UILabel *)labelToSet labelText:(NSString *)labelText;

-(void)createProgressionAlertWithMessage:(NSString *)message;
-(void)webServiceRequest:(NSString *)featurename;
-(void)finishedDownloading:(NSString *)strJSONResponse;
-(void)getResultsAndInsert:(NSDictionary *)resultSet;

-(IBAction)pushedSyncUpButton:(id)sender;


@end
