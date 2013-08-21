//
//  fontechUser.h
//  fonChat
//
//  Created by Robert Huang on 8/21/13.
//  Copyright (c) 2013 Fontech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface fontechUser : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *userId;
@property (strong, nonatomic) NSString *userPassword;
@property (strong, nonatomic) NSString *position;
@property (strong, nonatomic) UIImage *userImage;

@end
