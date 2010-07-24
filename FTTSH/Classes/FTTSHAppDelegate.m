//
//  FTTSHAppDelegate.m
//  FTTSH
//
//  Created by zhou Yangbo on 10-7-10.
//  Copyright Godpaper Lookbackon 2010. All rights reserved.
//

#import "FTTSHAppDelegate.h"


@implementation FTTSHAppDelegate

@synthesize window;
@synthesize tabBarController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {
    
    // Add the tab bar controller's current view as a subview of the window
    [window addSubview:tabBarController.view];
    
    //system location alert:
    /*
    UIAlertView *theAlert = [[[UIAlertView alloc] initWithTitle:@"Atention"
                                                        message: @"YOUR MESSAGE HERE"
                                                       delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil] autorelease];
    
    
    
    UILabel *theTitle = [theAlert valueForKey:@"_titleLabel"];
    [theTitle setTextColor:[UIColor redColor]];
    
    UILabel *theBody = [theAlert valueForKey:@"_bodyTextLabel"];
    [theBody setTextColor:[UIColor blueColor]];
    
    UIImage *theImage = [UIImage imageNamed:@"hu.png"];    
    theImage = [theImage stretchableImageWithLeftCapWidth:16 topCapHeight:16];
    CGSize theSize = [theAlert frame].size;
    
    UIGraphicsBeginImageContext(theSize);    
    [theImage drawInRect:CGRectMake(0, 0, theSize.width, theSize.height)];    
    theImage = UIGraphicsGetImageFromCurrentImageContext();    
    UIGraphicsEndImageContext();
    
    [[theAlert layer] setContents:[theImage CGImage]];
    
    [theAlert show];
    [theAlert release];*/
}


/*
// Optional UITabBarControllerDelegate method
- (void)tabBarController:(UITabBarController *)tabBarController didSelectViewController:(UIViewController *)viewController {
}
*/

/*
// Optional UITabBarControllerDelegate method
- (void)tabBarController:(UITabBarController *)tabBarController didEndCustomizingViewControllers:(NSArray *)viewControllers changed:(BOOL)changed {
}
*/


- (void)dealloc {
    [tabBarController release];
    [window release];
    [super dealloc];
}

@end

