//
//  KNTaskController.m
//  CarefulCheckList
//
//  Created by Kenzo on 2014/04/09.
//  Copyright (c) 2014年 Kenzo. All rights reserved.
//

#import "KNTaskController.h"
#import "KNTask.h"

@implementation KNTaskController

+(void)addTaskWithName:(NSString *)name priority:(NSInteger)priority {
    KNTask *task = [KNTask createEntity];
    task.name = name;
    task.priority = [NSNumber numberWithInteger:priority];
    [[NSManagedObjectContext MR_defaultContext] MR_saveToPersistentStoreAndWait];
}

+(void)addTaskWithName:(NSString *)name priority:(NSInteger)priority relation:(KNSituation *)situation {
    KNTask *task = [KNTask createEntity];
    task.name = name;
    task.priority = [NSNumber numberWithInteger:priority];
    task.situation = situation;
    [[NSManagedObjectContext MR_defaultContext] MR_saveToPersistentStoreAndWait];
}

@end
