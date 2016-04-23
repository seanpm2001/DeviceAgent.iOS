//
//  CBXProtocols.h
//  xcuitest-server
//


#import "CBXRoute.h"
/**
 Protocol to denote that a class will define a set of CBXRoute instances
 to be added to the server.
 
 Ideally, a class conforming to this protocol should create routes that
 are semantically similar, e.g. "RoutesThatDoFoo", "RoutesThatBar", etc...
 
 */
@protocol CBRouteProvider <NSObject>
@required
/**
 Static method to retrieve all routes generated by the class. Should be called
 only once by the server during initialization. 
 
 @return An array of CBXRoute instances
 */
+ (NSArray<CBXRoute *>*)getRoutes;
@end

@class JSONKeyValidator;
/**
 Protocol to denote that a class can produce a JSONKeyValidator instance. 
 The idea is that the validator that the class produces can be used
 to validate json used to instantiate instances of that class.
 
 This makes it easy for a factory class to provide custom validation
 for various classes.
 */
@protocol JSONKeyValidatorProvider<NSObject>
@required
/**
 Static convenience method for retrieving a validator.
 @return A JSONValidator to be used in instantiating a class instance.
 */
+ (JSONKeyValidator *)validator;
@end