// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to KNSituation.h instead.

#import <CoreData/CoreData.h>


extern const struct KNSituationAttributes {
	__unsafe_unretained NSString *name;
} KNSituationAttributes;

extern const struct KNSituationRelationships {
	__unsafe_unretained NSString *task;
} KNSituationRelationships;

extern const struct KNSituationFetchedProperties {
} KNSituationFetchedProperties;

@class KNTask;



@interface KNSituationID : NSManagedObjectID {}
@end

@interface _KNSituation : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (KNSituationID*)objectID;





@property (nonatomic, strong) NSString* name;



//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet *task;

- (NSMutableSet*)taskSet;





@end

@interface _KNSituation (CoreDataGeneratedAccessors)

- (void)addTask:(NSSet*)value_;
- (void)removeTask:(NSSet*)value_;
- (void)addTaskObject:(KNTask*)value_;
- (void)removeTaskObject:(KNTask*)value_;

@end

@interface _KNSituation (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;





- (NSMutableSet*)primitiveTask;
- (void)setPrimitiveTask:(NSMutableSet*)value;


@end
