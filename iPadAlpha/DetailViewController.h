//
//  DetailViewController.h
//  iPadAlpha
//
//  Created by Kurt Hobson on 12/7/12.
//  Copyright (c) 2012 SSI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
