//
//  UserInfo.h
//  FTTSH
//
//  Created by zhou Yangbo on 10-7-29.
//  Copyright 2010 Godpaper Lookbackon. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface UserInfo :  NSManagedObject  
{
}

@property (nonatomic, retain) NSNumber * UserInfoID;
@property (nonatomic, retain) NSString * UserName;
@property (nonatomic, retain) NSString * Password;

@end



