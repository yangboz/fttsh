//
//  FTTSHAppDelegate.h
//  FTTSH
//
//  Created by zhou Yangbo on 10-5-25.
//  Copyright Godpaper Lookbackon 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SplashViewController.h"

@class FTTSHViewController;

@interface FTTSHAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    //FTTSHViewController *viewController;
    SplashViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
//@property (nonatomic, retain) IBOutlet FTTSHViewController *viewController;
@property (nonatomic, retain) IBOutlet SplashViewController *viewController;

@end

