
#import "Query.h"
#import "CBX-XCTest-Umbrella.h"
#import "XCTest+CBXAdditions.h"
#import "Application.h"
#import "CoordinateQueryConfiguration.h"
#import "QuerySpecifierFactory.h"
#import "CoordinateQuery.h"
#import "CBXException.h"
#import "JSONUtils.h"
#import "XCTest+CBXAdditions.h"

@implementation Query

+ (JSONKeyValidator *)validator {
    return [JSONKeyValidator withRequiredKeys:@[]
                                 optionalKeys:[QuerySpecifierFactory supportedSpecifierNames]];
}

- (BOOL)isCoordinateQuery {
    return NO;
}

- (CoordinateQuery *)asCoordinateQuery {
    return [CoordinateQuery withQueryConfiguration:self.queryConfiguration.asCoordinateQueryConfiguration];
}

+ (instancetype)withQueryConfiguration:(QueryConfiguration *)queryConfig {
    Query *e = [self new];
    e.queryConfiguration = queryConfig;
    return e;
}

- (NSArray<NSDictionary *> *)execute {
    if (self.queryConfiguration.selectors.count == 0) {
        @throw [CBXException withMessage:@"Query must have at least one "
                "specifier"];
    }

    if (![Application currentApplication]) {
        @throw [CBXException withMessage:@"Current application is nil. Cannot "
                "perform queries until POST /session route is called"];
    }

    XCUIApplication *application = [Application currentApplication];
    XCUIElementQuery *query = [application cbxQueryForDescendantsOfAnyType];

    for (QuerySpecifier *specifier in self.queryConfiguration.selectors) {
        query = [specifier applyToQuery:query];
    }

    NSArray<XCUIElement *> *foundElements = [query allElementsBoundByIndex];

    NSMutableArray<NSDictionary *> *results = [NSMutableArray array];
    for (XCUIElement *element in foundElements) {
        XCElementSnapshot *snapshot = [[element query] cbx_elementSnapshotForDebugDescription];
        [results addObject:[self childrenTreeFor:snapshot]];
    }
    return results;
}

- (NSDictionary *)childrenTreeFor:(XCElementSnapshot *)element {
    NSMutableDictionary *json = [[JSONUtils snapshotOrElementToJSON:element] mutableCopy];

    if (element.children.count) {
        NSMutableArray *children = [NSMutableArray array];
        for (XCElementSnapshot *child in element.children) {
            [children addObject:[self childrenTreeFor:child]];
        }
        json[@"children"] = children;
    }
    return json;
}

- (NSDictionary *)toDict {
    return self.queryConfiguration.raw;
}

- (NSString *)toJSONString {
    return [JSONUtils objToJSONString:[self toDict]];
}

- (NSString *)description {
    return [[self toDict] ?: @{} description];
}

- (id)objectForKeyedSubscript:(NSString *)key {
    return self.queryConfiguration[key];
}

@end
