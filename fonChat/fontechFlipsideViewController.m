//
//  fontechFlipsideViewController.m
//  fonChat
//
//  Created by Robert Huang on 8/21/13.
//  Copyright (c) 2013 Fontech. All rights reserved.
//

#import "fontechFlipsideViewController.h"

@interface fontechFlipsideViewController ()

@end

@implementation fontechFlipsideViewController

- (void)awakeFromNib
{
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
