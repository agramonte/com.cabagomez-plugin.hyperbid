//
//  HeliumSDK.h
//  HeliumSdk
//
//  Created by Geoff Heeren on 12/10/18.
//

#import <Foundation/Foundation.h>
#import <HeliumSDK/HeliumDelegates.h>
#import <HeliumSDK/HeliumError.h>
NS_ASSUME_NONNULL_BEGIN
@interface HeliumSdk : NSObject
+ (HeliumSdk *)sharedHelium ;
- (void)startWithAppId:(NSString *)appId andAppSignature:(NSString*)appSignature delegate:(id<HeliumSdkDelegate>)delegate;
- (id<HeliumInterstitialAd>)interstitialAdProviderWithDelegate:(id<CHBHeliumInterstitialAdDelegate>)delegate andPlacementName:(nonnull NSString *)placementName;
- (id<HeliumRewardedAd>)rewardedAdProviderWithDelegate:(id<CHBHeliumRewardedAdDelegate>)delegate andPlacementName:(nonnull NSString *)placementName;
- (void)setSubjectToCoppa:(BOOL)isSubject;
- (void)setSubjectToGDPR:(BOOL)isSubject;
- (void)setUserHasGivenConsent:(BOOL)hasGivenConsent;
- (void)setCCPAConsent:(BOOL)hasGivenConsent;
@end

NS_ASSUME_NONNULL_END
