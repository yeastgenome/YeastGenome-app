//
//  FeatInteractionDetails.h
//  SGD_2
//
//  Created by Vivek on 14/06/11.
//  Copyright 2011 Stanford University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Features.h"
#import "webServiceHelper.h"
#import <QuartzCore/QuartzCore.h>

@interface FeatInteractionDetails : UIViewController <DownloadCompleteDelegate, UIActionSheetDelegate>
{
    IBOutlet UILabel		*titleLabel;

	IBOutlet UILabel		*actionLabel;
	IBOutlet UILabel		*expTypeLabel;
	IBOutlet UILabel		*featNameLabel;
	IBOutlet UILabel		*featTypeLabel;
	IBOutlet UILabel		*geneNameLabel;
	IBOutlet UILabel		*intDescriptionLabel;
	IBOutlet UILabel		*sourceLabel;
	IBOutlet UILabel		*referencesLabel;
	
	IBOutlet UILabel		*actionTitle;
	IBOutlet UILabel		*expTypeTitle;
	IBOutlet UILabel		*featNameTitle;
	IBOutlet UILabel		*featTypeTitle;
	IBOutlet UILabel		*geneNameTitle;
	IBOutlet UILabel		*intDescriptionTitle;
	IBOutlet UILabel		*sourceTitle;
	IBOutlet UILabel		*referencesTitle;
    IBOutlet UIButton		*referenceBtn;

    IBOutlet UILabel        *indicator1;

	IBOutlet UIView			*contentView;
	
	NSManagedObjectContext	*managedObjectContext;	
	UIAlertView				*progAlertView;
	UIActivityIndicatorView	*activityIndView;
	Features				*selectedFeature;	
	UIButton				*EmailButton;
    
    NSMutableArray			*allReferencesInteraction;

	
}
@property (nonatomic, retain) NSManagedObjectContext		*managedObjectContext;	

@property (nonatomic, retain) NSMutableArray                *allReferencesInteraction;

@property (nonatomic, retain) UIAlertView                   *progAlertView;
@property (nonatomic, retain) UIActivityIndicatorView       *activityIndView;
@property (nonatomic, retain) Features                      *selectedFeature;

-(void)setLabelSizeFor:(UILabel *)labelToSet labelText:(NSString *)labelText;
-(void)setViewYOriginFor:(UIView *)viewToSet previousView:(UIView *)previousViewName;
-(void)setViewXOriginFor:(UIView *)viewToSet previousView:(UIView *)previousViewName;
-(void)setLabelWidthFor: (UIView *)labelToSet newWidth: (int) newWidth;
-(void)setLabelSizeFor: (UILabel *)labelToSet detailview:(UILabel *)detailview;
-(void)setButtonWidthFor: (UIView *)labelToSet newWidth: (int) newWidth;

- (void)setViewYOriginFor: (UIView *)viewToSet previousView:(UIView *)previousLabelView previousDetailView:(UIView *)detailView;
-(void)createProgressionAlertWithMessage:(NSString *)message;
-(void)webServiceCall:(NSString *)webserviceName;
-(void)finishedDownloading:(NSString *)strJSONResponse;
-(void)getResultsAndInsert:(NSDictionary *)resultSet;

-(IBAction)pushedEmailButton:(id)sender;
-(IBAction)pushedReferenceButton:(id)sender;


@end
