//
//  FeatGoTypeDetails.h
//  SGD_2
//
//  Created by Vivek on 7/6/11.
//  Copyright 2011 Stanford University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "GODetails.h"
#import "webServiceHelper.h"

@interface FeatGoTypeDetails : UIViewController <UIActionSheetDelegate>{

	IBOutlet UILabel *functiontype;
	IBOutlet UILabel *lblAnnotations;
    IBOutlet UILabel *lblGoId;

	IBOutlet UILabel *lblEvidence;
    IBOutlet UILabel *lblDefinition;

	IBOutlet UILabel *lblReferences;
	IBOutlet UILabel *lblAssignedBy;
	
	IBOutlet UILabel *annotationsDetails;
    IBOutlet UILabel *goIdDetails;

	IBOutlet UILabel *evidenceDetails;
	IBOutlet UILabel *referencesDetails;
	IBOutlet UILabel *assignedByDetails;
    IBOutlet UILabel *DefinitionDetails;
    IBOutlet UIButton *referenceBtn;
    IBOutlet UIButton *definitionBtn;

    IBOutlet UILabel *indicator1;
    IBOutlet UILabel *indicator2;
    
	IBOutlet UIView  *contentView;
	UIButton		 *EmailButton;
	
	
	UIAlertView					*progAlertView;
	UIActivityIndicatorView		*activityIndView;
	

	GODetails                   *SelectedGODetails;
	NSManagedObjectContext      *managedObjectContext;
    
    NSMutableArray				*finalListArr;

	
	
}
@property (nonatomic, retain) UIView       *contentView;

@property (nonatomic, retain) GODetails    *SelectedGODetails;

@property (nonatomic, retain) NSManagedObjectContext        *managedObjectContext;

@property (nonatomic, retain) NSMutableArray				*finalListArr;

@property (nonatomic, retain) UIAlertView                   *progAlertView;
@property (nonatomic, retain) UIActivityIndicatorView       *activityIndView;




-(void)setLabelSizeFor:(UILabel *)labelToSet labelText:(NSString *)labelText;
-(void)setViewYOriginFor:(UIView *)viewToSet previousView:(UIView *)previousViewName;
-(void)setViewXOriginFor:(UIView *)viewToSet previousView:(UIView *)previousViewName;
-(void)setLabelWidthFor: (UIView *)labelToSet newWidth: (int) newWidth;
-(void)setButtonWidthFor: (UIView *)labelToSet newWidth: (int) newWidth;

//Setting the Y Origin of label depending on label at top
- (void)setViewYOriginFor: (UIView *)viewToSet previousView:(UIView *)previousLabelView previousDetailView:(UIView *)detailView;
- (void)setLabelSizeFor: (UILabel *)labelToSet detailview:(UILabel *)detailview;

-(IBAction)pushedEmailButton:(id)sender;
-(IBAction)pushedReferenceButton:(id)sender;
-(IBAction)pushedDefinitionButton:(id)sender;

@end
