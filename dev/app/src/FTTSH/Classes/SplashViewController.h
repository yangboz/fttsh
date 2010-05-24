//
//  SplashViewController.h
//  iTennis
//
//  Created by Brandon Trebitowski on 3/18/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FTTSHViewController.h"

@interface SplashViewController : UIViewController {
	NSTimer *timer;
	UIImageView *splashImageView;
	
	FTTSHViewController *viewController;
}

@property(nonatomic,retain) NSTimer *timer;
@property(nonatomic,retain) UIImageView *splashImageView;
@property(nonatomic,retain) FTTSHViewController *viewController;

@end
