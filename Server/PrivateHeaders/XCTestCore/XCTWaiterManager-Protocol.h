// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 26 2020 14:08:26).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol XCTWaiterManagement;

@protocol XCTWaiterManager
- (void)waiterDidFinishWaiting:(id <XCTWaiterManagement>)arg1;
- (void)waiterTimedOutWhileWaiting:(id <XCTWaiterManagement>)arg1 withCompletion:(void (^)(void))arg2;
- (void)waiterWillBeginWaiting:(id <XCTWaiterManagement>)arg1;
@end

