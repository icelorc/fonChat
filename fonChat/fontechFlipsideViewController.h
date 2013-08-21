//
//  fontechFlipsideViewController.h
//  fonChat
//
//  Created by Robert Huang on 8/21/13.
//  Copyright (c) 2013 Fontech. All rights reserved.
//

#import <UIKit/UIKit.h>

@class fontechFlipsideViewController;

@protocol fontechFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(fontechFlipsideViewController *)controller;
@end

@interface fontechFlipsideViewController : UIViewController

@property (weak, nonatomic) id <fontechFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
