//
//  KNAppDelegate.h
//  CarefulCheckList
//
//  Created by Kenzo on 2014/03/23.
//  Copyright (c) 2014年 Kenzo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KNCheckListViewController.h"

@interface KNAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) KNCheckListViewController *checkListViewController;
@property (strong, nonatomic) UINavigationController *navController;

@end
