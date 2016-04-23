
#import <Foundation/Foundation.h>
#import "CBXProtocols.h"

/**
 Routes for meta information about the application or testing session.
 
 ## GET @"/sessionIdentifier"
 Returns the session identifier of the current XCUITest session.
 
 ## GET @"/pid"
 Returns the PID of the current app under test. 
 
 */
@interface MetaRoutes : NSObject<CBRouteProvider>
@end
