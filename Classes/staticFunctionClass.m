//
//  staticFunctionClass.m
//  SGD_Vivek
//
//  Created by Vivek on 29/04/11.
//  Copyright 2011 Stanford University. All rights reserved.
//

#import "staticFunctionClass.h"

static NSString *strSearchFeatName;
static NSString *strFeatListFeatName;
static NSString *strFavFeatName;
static NSString *strGeneName;

static NSString *strMolName;
static NSString *strBioName;
static NSString *strCelName;

static NSDictionary *interDict;


static NSMutableArray *strRecipient;
static NSString *strSubjectLine;
static NSString *strMessageBody;
static NSDictionary *phenoDict;

static NSString *strPredicate;
static NSString *strFeatGOType;
static NSMutableArray *allPrevwItem;
static NSString *strBrowseImg;
static NSString *strReferencePubID;


static NSString *strFeatureType;

@implementation staticFunctionClass

//FOR SETTING AND GETTING FEAT NAME USED IN SEARCH STACK
+ (void) initializeSearchObjFeat
{
	if (! strSearchFeatName)
	{
		strSearchFeatName = [[NSString alloc] init];
	}
}
+(void)setSearchObjFeat:(NSString*)newValue
{
	if (strSearchFeatName != newValue) 
	{
		strSearchFeatName = nil;
	}
	strSearchFeatName = newValue;
}
+ (NSString*) getSearchObjFeat
{
	return strSearchFeatName;
}

//FOR SETTING AND GETTING FEAT NAME USED IN FAVORITE STACK
+ (void) initializeFavObjFeat
{
	if (! strFavFeatName)
	{
		strFavFeatName = [[NSString alloc] init];
	}
}

+(void)setFavObjFeat:(NSString*)newValue
{
	if (strFavFeatName != newValue) 
	{
		[strFavFeatName release];
		strFavFeatName = [newValue retain];
	}

}

+ (NSString*) getFavObjFeat
{
	return strFavFeatName;
}

//FOR SETTING AND GETTING FEAT NAME USED IN FEAT LIST STACK
+ (void) initializeFeatObjListFeat
{
	if (! strFeatListFeatName)
	{
		strFeatListFeatName = [[NSString alloc] init];
	}
	
}
+(void)setFeatObjFeat:(NSString*)newValue
{
	if (strFeatListFeatName != newValue) 
	{
		[strFeatListFeatName release];
		strFeatListFeatName = [newValue retain];
	}
}
+ (NSString*) getFeatObjFeat
{
	return strFeatListFeatName;
}


+ (void) initializeGeneName
{
	if (! strGeneName) 
	{
		strGeneName = [[NSString alloc] init];
	}
}
+ (void)setGeneName:(NSString *)newValue
{
	if (strGeneName != newValue) 
	{
		[strGeneName release];
		strGeneName = [newValue retain];
	}
}
+ (NSString *)getGeneName
{
	return strGeneName;
}


+ (void) initializeMolFnName
{
	if (! strMolName) 
	{
		strMolName = [[NSString alloc] init];
	}
}
+ (void)setMolFnName:(NSString *)newValue
{
	if (strMolName != newValue) 
	{
		[strMolName release];
		strMolName = [newValue retain];
	}
}
+ (NSString *)getMolFnName
{
	return strMolName;
}

+ (void) initializeBioPrName
{
	if (! strBioName) 
	{
		strBioName = [[NSString alloc] init];
	}
}
+ (void)setBioPrName:(NSString *)newValue
{
	if (strBioName != newValue) 
	{
		[strBioName release];
		strBioName = [newValue retain];
	}
}
+ (NSString *)getBioPrName
{
	return strBioName;
}

+ (void) initializeCelCmName
{
	if (! strCelName) 
	{
		strCelName = [[NSString alloc] init];
	}
}
+ (void)setCelCmName:(NSString *)newValue
{
	if (strCelName != newValue) 
	{
		[strCelName release];
		strCelName = [newValue retain];
	}
}
+ (NSString *)getCelCmName
{
	return strCelName;
}


+ (void) initInteractionDict
{
	if (! interDict)
	{
		interDict = [[NSDictionary alloc] init];
	}
}

+ (void)setInteractionDict:(NSDictionary *)newValue
{
	if (interDict != newValue) 
	{
		[interDict release];
		interDict = [newValue retain];
	}
}
+ (NSDictionary *)getInteractionDict
{
	return interDict;
}



+ (void) initSubjectLine{
	if (! strSubjectLine)
	{
		strSubjectLine = [[NSString alloc] init];
	}
	
}
+ (void)setSubjectLine:(NSString *)newValue{
	
	if (strSubjectLine != newValue) 
	{
		[strSubjectLine release];
		strSubjectLine = [newValue retain];
	}
}


+ (NSString *)getSubjectLine{
	
	return strSubjectLine;
}


+ (void) initMessageBody{
	if (! strMessageBody)
	{
		strMessageBody = [[NSString alloc] init];
	}
	
}
+ (void)setMessageBody:(NSString *)newValue{
	
	if (strMessageBody != newValue) 
	{
		[strMessageBody release];
		strMessageBody = [newValue retain];
	}
}


+ (NSString *)getMessageBody{
	
	return strMessageBody;
}


+ (void) initRecipient{
	if (! strRecipient)
	{
		strRecipient = [[NSMutableArray alloc] init];
		[strRecipient retain];
	}
	
}
+ (void)setRecipient:(NSMutableArray *)newValue{
	
	if (strRecipient != newValue) 
	{
		[strRecipient release];
		strRecipient = [newValue retain];
	}
}


+ (NSMutableArray *)getRecipient{
	
	return strRecipient;
}


+ (void) initPhenoDict
{
	if (! phenoDict) 
	{
		phenoDict = [[NSDictionary alloc] init];
	}
}
+ (void) setPhenoDict:(NSDictionary *)newValue
{
	if (phenoDict != newValue) 
	{
		[phenoDict release];
		phenoDict = [newValue retain];
	}
}
+ (NSDictionary *)getPhenoDict
{
	return phenoDict;
}


// Predicate String 
+ (void) initPredicateStr{
	if (! strPredicate)
	{
		strPredicate = [[NSString alloc] init];
		[strPredicate retain];
	}
	
}
+ (void)setPredicateStr:(NSString *)newValue{
	
	if (strPredicate != newValue) 
	{
		[strPredicate release];
		strPredicate = [newValue retain];
	}
}


+ (NSString *)getPredicateStr{
	
	return strPredicate;
}

// FeatGOType String 
+ (void) initFeatGOTypeStr{
	if (! strFeatGOType)
	{
		strFeatGOType = [[NSString alloc] init];
		[strFeatGOType retain];
	}
	
}
+ (void)setFeatGOTypeStr:(NSString *)newValue{
	
	if (strFeatGOType != newValue) 
	{
		[strFeatGOType release];
		strFeatGOType = [newValue retain];
	}
}


+ (NSString *)getFeatGOTypeStr{
	
	return strFeatGOType;
}

+ (void) initPreviewItem
{
	if (! allPrevwItem)
	{
		allPrevwItem = [[NSMutableArray alloc] init];
		[allPrevwItem retain];
	}
}
+ (void)setRprtPreview:(NSMutableArray *)newValue
{
	if (allPrevwItem != newValue) 
	{
		[allPrevwItem release];
		allPrevwItem = [newValue retain];
	}
}
+ (NSMutableArray *)getRprtPreview
{
	return allPrevwItem;
}

//FOR SETTING AND GETTING FEAT NAME USED IN FEATURE TYP
+ (void) initializeFeatureType
{
	if (! strFeatureType)
	{
		strFeatureType = [[NSString alloc] init];
	}
}

+(void)setFeatureType:(NSString*)newValue
{
	if (strFeatureType != newValue) 
	{
		[strFeatureType release];
		strFeatureType = [newValue retain];
	}
    
}

+ (NSString*) getFeatureType
{
	return strFeatureType;
}

// Browsr Img string

+ (void) initBrowseImg
{
	if (! strBrowseImg)
	{
		strBrowseImg = [[NSString alloc] init];
	}
}

+(void)setBrowseImg:(NSString*)newValue
{
	if (strBrowseImg != newValue) 
	{
		[strBrowseImg release];
		strBrowseImg = [newValue retain];
	}
    
}

+ (NSString*) getBrowseImg
{
	return strBrowseImg;
}

// Reference PubID Index

+ (void) initReferencePub{

    if (! strReferencePubID)
	{
		strReferencePubID = [[NSString alloc] init];
	}

}


+ (void)setReferencePub:(NSString *)newValue{
    
	if (strReferencePubID != newValue) 
	{
		[strReferencePubID release];
		strReferencePubID = [newValue retain];
	}
	
    
}
+ (NSString *)getReferencePub{
    return strReferencePubID;
}
@end
