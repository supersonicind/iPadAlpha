//
//  MasterViewController.h
//  iPadAlpha
//
//  Created by Kurt Hobson on 12/7/12.
//  Copyright (c) 2012 SSI. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
