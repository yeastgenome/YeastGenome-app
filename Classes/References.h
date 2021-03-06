//
//  References.h
//  SGD_2
//
//  Created by Vivek on 14/07/11.
//  Copyright 2011 Stanford University. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Features;

@interface References :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * refPubMedId;
@property (nonatomic, retain) NSString * citation;
@property (nonatomic, retain) Features * refertofeat;

@end



