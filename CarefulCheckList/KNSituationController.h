//
//  KNSituationController.h
//  CarefulCheckList
//
//  Created by Kenzo on 2014/04/09.
//  Copyright (c) 2014年 Kenzo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KNSituationController : NSObject
+(void)addSituationWithName:(NSString *)name;
+(void)addSituationWithName:(NSString *)name relation:(NSSet *)tasks;

@end
