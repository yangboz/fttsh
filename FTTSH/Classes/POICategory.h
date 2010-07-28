//
//  POICategory.h
//  FTTSH
//
//  Created by zhou Yangbo on 10-7-28.
//  Copyright 2010 Godpaper Lookbackon. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface POICategory :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * POICategoryNameChinese;
@property (nonatomic, retain) NSString * POICategoryNameEnglish;
@property (nonatomic, retain) NSString * POICategoryNameImage;
@property (nonatomic, retain) NSString * POICategoryID;
@property (nonatomic, retain) NSString * POICategoryImage;

@end



