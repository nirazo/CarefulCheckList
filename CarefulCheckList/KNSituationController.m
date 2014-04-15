//
//  KNSituationController.m
//  CarefulCheckList
//
//  Created by Kenzo on 2014/04/09.
//  Copyright (c) 2014年 Kenzo. All rights reserved.
//

#import "KNSituationController.h"
#import "KNSituation.h"

@implementation KNSituationController
+(void)addSituationWithName:(NSString *)name {
    KNSituation *situation = [KNSituation createEntity];
    situation.name = name;
    [[NSManagedObjectContext MR_defaultContext] MR_saveToPersistentStoreAndWait];

}

+(void)addSituationWithName:(NSString *)name relation:(NSSet *)tasks {
    KNSituation *situation = [KNSituation createEntity];
    situation.name = name;
    situation.task = tasks;
    [[NSManagedObjectContext MR_defaultContext] MR_saveToPersistentStoreAndWait];
}
@end
