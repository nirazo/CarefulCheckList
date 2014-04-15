// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to KNSituation.m instead.

#import "_KNSituation.h"

const struct KNSituationAttributes KNSituationAttributes = {
	.name = @"name",
};

const struct KNSituationRelationships KNSituationRelationships = {
	.task = @"task",
};

const struct KNSituationFetchedProperties KNSituationFetchedProperties = {
};

@implementation KNSituationID
@end

@implementation _KNSituation

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Situation" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Situation";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Situation" inManagedObjectContext:moc_];
}

- (KNSituationID*)objectID {
	return (KNSituationID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	

	return keyPaths;
}




@dynamic name;






@dynamic task;

	
- (NSMutableSet*)taskSet {
	[self willAccessValueForKey:@"task"];
  
	NSMutableSet *result = (NSMutableSet*)[self mutableSetValueForKey:@"task"];
  
	[self didAccessValueForKey:@"task"];
	return result;
}
	






@end
