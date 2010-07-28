//
//  NeighborhoodInfo.h
//  FTTSH
//
//  Created by zhou Yangbo on 10-7-28.
//  Copyright 2010 Godpaper Lookbackon. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface NeighborhoodInfo :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * NeighborhoodInfoName;
@property (nonatomic, retain) NSNumber * NeighborhoodInfoID;
@property (nonatomic, retain) NSString * NeighborhoodImage;

@end



