//
//  FTTSHAppDelegate.h
//  FTTSH
//
//  Created by zhou Yangbo on 10-7-10.
//  Copyright Godpaper Lookbackon 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FTTSHAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
