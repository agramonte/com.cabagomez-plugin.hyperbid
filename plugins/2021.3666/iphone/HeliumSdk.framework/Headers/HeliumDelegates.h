//
//  Helium.h
//  HeliumSdk
//
//  Created by Geoff Heeren on 10/23/18.
//



#ifndef HeliumDelegates_h
#define HeliumDelegates_h
#import <Foundation/Foundation.h>


@class UIViewController;
@class HeliumError;
@protocol HeliumSdkDelegate <NSObject>
- (void)heliumDidStartWithError:(HeliumError *)error;
@end
@protocol HeliumInterstitialAd <NSObject>
- (void) loadAd;
- (BOOL) clearLoadedAd;
- (void) showAdWithViewController:(UIViewController *)vc;
- (BOOL) readyToShow;
@end
@protocol CHBHeliumInterstitialAdDelegate <NSObject>
- (void)heliumInterstitialAdWithPlacementName:(NSString*)placementName
                           didLoadWithError:(HeliumError *)error;
- (void)heliumInterstitialAdWithPlacementName:(NSString*)placementName
                           didShowWithError:(HeliumError *)error;
- (void)heliumInterstitialAdWithPlacementName:(NSString*)placementName
                            didCloseWithError:(HeliumError *)error;
@optional
- (void)heliumInterstitialAdWithPlacementName:(NSString*)placementName
                    didLoadWinningBidWithInfo:(NSDictionary*)bidInfo;
- (void)heliumInterstitialAdWithPlacementName:(NSString*)placementName
                            didClickWithError:(HeliumError *)error;
@end
@protocol HeliumRewardedAd <NSObject>
- (void) loadAd;
- (BOOL) clearLoadedAd;
- (void) showAdWithViewController:(UIViewController *)vc;
- (BOOL) readyToShow;
@end
@protocol CHBHeliumRewardedAdDelegate <NSObject>
- (void)heliumRewardedAdWithPlacementName:(NSString*)placementName
                            didLoadWithError:(HeliumError *)error;
- (void)heliumRewardedAdWithPlacementName:(NSString*)placementName
                            didShowWithError:(HeliumError *)error;
- (void)heliumRewardedAdWithPlacementName:(NSString*)placementName
                        didCloseWithError:(HeliumError *)error;
- (void)heliumRewardedAdWithPlacementName:(NSString*)placementName
                           didGetReward:(NSInteger)reward;
@optional
- (void)heliumRewardedAdWithPlacementName:(NSString*)placementName
                    didLoadWinningBidWithInfo:(NSDictionary*)bidInfo;
- (void)heliumRewardedAdWithPlacementName:(NSString*)placementName
                            didClickWithError:(HeliumError *)error;
@end
#endif
