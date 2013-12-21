//
//  CheeseDetailViewController.h
//  Cheese
//
//  Created by Josh Silverman on 12/20/13.
//  Copyright (c) 2013 Wisr. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CheeseDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
