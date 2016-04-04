//
//  CBEnterText.m
//  CBXDriver
//
//  Created by Chris Fuentes on 3/31/16.
//  Copyright © 2016 Calabash. All rights reserved.
//

#import "Testmanagerd.h"
#import "CBEnterText.h"

@implementation CBEnterText

+ (NSString *)name { return @"enter_text"; }

+ (CBGesture *)executeWithJSON:(NSDictionary *)json completion:(CompletionBlock)completion {
    NSMutableDictionary *j = [json mutableCopy];
    NSString *string = j[CB_STRING_KEY];
    [j removeObjectForKey:CB_STRING_KEY];
    
    [[Testmanagerd get] _XCT_sendString:string completion:^(NSError *e) {
        completion(e, @[]);
    }];
    
    return nil;
}

@end
