//
//  MANativeAdLoader.h
//  AppLovinSDK
//
//  Created by Andrew Tian on 7/14/21.
//

#import "ALSdk.h"
#import "MAAdRevenueDelegate.h"
#import "MANativeAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * This class represents a loader for native ads.
 */
@interface MANativeAdLoader : NSObject

/**
 * Creates a new MAX native ad loader.
 *
 * @param adUnitIdentifier Ad unit ID to load ads for.
 */
- (instancetype)initWithAdUnitIdentifier:(NSString *)adUnitIdentifier;

/**
 * Creates a new MAX native ad loader.
 *
 * @param adUnitIdentifier Ad unit ID to load ads for.
 * @param sdk              SDK to use. You can obtain an instance of the SDK by calling @code +[ALSdk shared] @endcode.
 */
- (instancetype)initWithAdUnitIdentifier:(NSString *)adUnitIdentifier sdk:(ALSdk *)sdk;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
 * A delegate that will be notified about native ad events.
 */
@property (nonatomic, weak, nullable) id<MANativeAdDelegate> nativeAdDelegate;

/**
 * A delegate that will be notified about ad revenue events.
 */
@property (nonatomic, weak, nullable) id<MAAdRevenueDelegate> revenueDelegate;

/**
 * Load a new MAX native ad. Set @code [MANativeAdLoader nativeAdDelegate] @endcode to assign a delegate that should be notified about ad load state.
 */
- (void)loadAd;

/**
 * The placement name that you assign when you integrate each ad format, for granular reporting in ad events (e.g. "Rewarded_Store", "Rewarded_LevelEnd").
 */
@property (nonatomic, copy, nullable) NSString *placement;

/**
 * The ad unit identifier this @c MANativeAdLoader was initialized with and is loading ads for.
 */
@property (nonatomic, copy, readonly) NSString *adUnitIdentifier;

@end

NS_ASSUME_NONNULL_END
