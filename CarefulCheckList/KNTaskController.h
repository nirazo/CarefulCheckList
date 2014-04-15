//
//  KNTaskController.h
//  CarefulCheckList
//
//  Created by Kenzo on 2014/04/09.
//  Copyright (c) 2014年 Kenzo. All rights reserved.
//

#import <Foundation/Foundation.h>

@class KNSituation;
@interface KNTaskController : NSObject
+(void)addTaskWithName:(NSString *)name priority:(NSInteger)priority;
+(void)addTaskWithName:(NSString *)name priority:(NSInteger)priority relation:(KNSituation *)situation;

@end
