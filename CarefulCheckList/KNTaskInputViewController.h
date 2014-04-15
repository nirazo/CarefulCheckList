//
//  KNTaskInputViewControllerTableViewController.h
//  CarefulCheckList
//
//  Created by Kenzo on 2014/04/10.
//  Copyright (c) 2014年 Kenzo. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^KNTaskInputVCDidCancel)();
@interface KNTaskInputViewController : UITableViewController
@property (nonatomic, copy) KNTaskInputVCDidCancel onCancelTapped;
@end
