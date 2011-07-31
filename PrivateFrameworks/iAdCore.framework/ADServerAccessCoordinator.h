/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

@interface ADServerAccessCoordinator : XXUnknownSuperclass {
	BOOL _allowsRequests;
	BOOL _networkAvailable;
	BOOL _serverReachabile;
	BOOL _clientBackgrounded;
	double _currentBackoffIntervalExponent;
	NSTimer* _retryTimer;
}
@property(assign, nonatomic) BOOL allowsRequests;
@property(readonly, assign, nonatomic) BOOL networkAvailable;
@property(readonly, assign, nonatomic) BOOL serverReachabile;
@property(readonly, assign, nonatomic) BOOL clientBackgrounded;
@property(readonly, assign, nonatomic) double currentBackoffIntervalExponent;
@property(retain, nonatomic) NSTimer* retryTimer;
@property(readonly, assign, nonatomic) double nextBackoffInterval;
-(void)dealloc;
-(id)init;
-(void)networkAvailabilityChanged:(BOOL)changed;
-(void)serverReachabilityChanged:(BOOL)changed;
-(void)clientApplicationDidEnterBackground;
-(void)clientApplicationWillEnterForeground;
-(void)errorDidOccur:(int)error;
-(void)reset;
-(void)connectionDidSucceed;
-(void)recalculate;
-(void)retryTimerDidFire:(id)retryTimer;
-(id)serverError;
@end
