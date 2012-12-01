//
//  Phenotypes.h
//  SGD_2
//
//  Created by Vivek on 14/07/11.
//  Copyright 2011 Stanford University. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Features;

@interface Phenotypes :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * phenoQualifier;
@property (nonatomic, retain) NSString * mutantinfo;
@property (nonatomic, retain) NSString * phenoReferences;
@property (nonatomic, retain) NSString * pubMedId;

@property (nonatomic, retain) NSString * phenoExpType;
@property (nonatomic, retain) NSString * observable;
@property (nonatomic, retain) Features * phenotofeat;

@end



