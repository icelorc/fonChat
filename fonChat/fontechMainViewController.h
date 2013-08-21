//
//  fontechMainViewController.h
//  fonChat
//
//  Created by Robert Huang on 8/21/13.
//  Copyright (c) 2013 Fontech. All rights reserved.
//

#import "fontechFlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface fontechMainViewController : UIViewController <fontechFlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
