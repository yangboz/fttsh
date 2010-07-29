//
//  POIInfo.h
//  FTTSH
//
//  Created by zhou Yangbo on 10-7-29.
//  Copyright 2010 Godpaper Lookbackon. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface POIInfo :  NSManagedObject  
{
}

@property (nonatomic, retain) NSNumber * POIPointY;
@property (nonatomic, retain) NSString * POINameEnglish;
@property (nonatomic, retain) NSString * POITips;
@property (nonatomic, retain) NSString * POIStar;
@property (nonatomic, retain) NSString * POICost;
@property (nonatomic, retain) NSString * POIBusinessHours;
@property (nonatomic, retain) NSString * POIIntroduction;
@property (nonatomic, retain) NSString * POIAddress;
@property (nonatomic, retain) NSString * POISubway;
@property (nonatomic, retain) NSString * POIWhereto;
@property (nonatomic, retain) NSNumber * POIPointX;
@property (nonatomic, retain) NSString * POITelephone;
@property (nonatomic, retain) NSString * POINameChinese;
@property (nonatomic, retain) NSNumber * POIID;
@property (nonatomic, retain) NSString * POIWebsite;
@property (nonatomic, retain) NSString * POICategoryID;
@property (nonatomic, retain) NSString * POIDistance;

@end



