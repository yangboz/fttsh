//
//  FTTSHAppDelegate.m
//  FTTSH
//
//  Created by zhou Yangbo on 10-5-25.
//  Copyright Godpaper Lookbackon 2010. All rights reserved.
//

#import "FTTSHAppDelegate.h"

@implementation FTTSHAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    viewController = [[SplashViewController alloc]init];
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
