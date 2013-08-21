//
//  fontechAppDelegate.h
//  fonChat
//
//  Created by Robert Huang on 8/21/13.
//  Copyright (c) 2013 Fontech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface fontechAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
