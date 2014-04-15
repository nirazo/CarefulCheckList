// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to KNTask.h instead.

#import <CoreData/CoreData.h>


extern const struct KNTaskAttributes {
	__unsafe_unretained NSString *name;
	__unsafe_unretained NSString *priority;
} KNTaskAttributes;

extern const struct KNTaskRelationships {
	__unsafe_unretained NSString *situation;
} KNTaskRelationships;

extern const struct KNTaskFetchedProperties {
} KNTaskFetchedProperties;

@class KNSituation;




@interface KNTaskID : NSManagedObjectID {}
@end

@interface _KNTask : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (KNTaskID*)objectID;





@property (nonatomic, strong) NSString* name;



//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* priority;



@property int16_t priorityValue;
- (int16_t)priorityValue;
- (void)setPriorityValue:(int16_t)value_;

//- (BOOL)validatePriority:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) KNSituation *situation;

//- (BOOL)validateSituation:(id*)value_ error:(NSError**)error_;





@end

@interface _KNTask (CoreDataGeneratedAccessors)

@end

@interface _KNTask (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;




- (NSNumber*)primitivePriority;
- (void)setPrimitivePriority:(NSNumber*)value;

- (int16_t)primitivePriorityValue;
- (void)setPrimitivePriorityValue:(int16_t)value_;





- (KNSituation*)primitiveSituation;
- (void)setPrimitiveSituation:(KNSituation*)value;


@end
