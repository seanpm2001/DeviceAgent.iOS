// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr 12 2019 07:16:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@protocol XCTRunnerAutomationSession;

@protocol XCUIApplicationAutomationSessionProviding <NSObject>
- (void)requestAutomationSessionBlacklist:(void (^)(NSSet *, NSError *))arg1;
- (void)requestAutomationSessionForTestTargetWithPID:(NSInteger)arg1 preferredBackendPath:(NSString *)arg2 reply:(void (^)(id <XCTRunnerAutomationSession>, NSError *))arg3;
@end
