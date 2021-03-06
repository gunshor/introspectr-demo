//
//  IRMasterViewController.h
//  IntrospectrTest
//
//  Created by Simon Murtha-Smith on 2/4/13.
//  Copyright (c) 2013 Simon Murtha-Smith. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IRDetailViewController;

@interface IRMasterViewController : UITableViewController {
    UISearchBar *searchBar;
}

@property (strong, nonatomic) IRDetailViewController *detailViewController;
@property (nonatomic, retain) IBOutlet UISearchBar *searchBar;


- (IBAction)dismissAndLogin:(UIStoryboardSegue *)segue;

@end
