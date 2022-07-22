//
//  HBSplashCustomEvent.h
//  HyperBidSplash
//
//  Created by Leo on 2018/12/20.
//  Copyright © 2018 Leo. All rights reserved.
//

#import <HyperBidSDK/HyperBidSDK.h>
//#import "HBAdCustomEvent.h"
extern NSString *const kHBSplashExtraRequestIDKey;
@class HBSplash;
@protocol HBSplashDelegate;
@interface HBSplashCustomEvent : HBAdCustomEvent
-(instancetype) initWithInfo:(NSDictionary*)serverInfo localInfo:(NSDictionary*)localInfo;
@property(nonatomic, weak) id<HBSplashDelegate> delegate;
@property(nonatomic, strong) HBSplash *splash;
@property(nonatomic, readonly) NSString *unitID;
@property(nonatomic, assign) NSInteger priorityIndex;

-(NSDictionary*)delegateExtra;
-(void) trackShowWithoutWaterfall;
-(void) trackClickWithoutWaterfall;
-(void) trackSplashAdClosed;
-(void) trackSplashAdLoaded:(id)splashAd;
-(void) trackSplashAdLoaded:(id)splashAd adExtra:(NSDictionary *)adExtra;
-(void) trackSplashAdShow;
-(void) trackSplashAdClick;
-(void) trackSplashAdLoadFailed:(NSError*)error;
-(void) trackSplashAdZoomOutViewClick;
-(void) trackSplashAdZoomOutViewClosed;
-(void) trackSplashAdDeeplinkOrJumpResult:(BOOL)success;

// v5.7.53+
-(void) trackSplashAdDetailClosed;
-(void) trackSplashAdShowFailed:(NSError *)error;

// v5.7.61+
-(void) trackSplashAdCountdownTime:(NSInteger)countdown;

- (void)startCountdown:(NSDictionary *)localInfo countdownBlock:(void(^)(NSInteger time))block;

@end
