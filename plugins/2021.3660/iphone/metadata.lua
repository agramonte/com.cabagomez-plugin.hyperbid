local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = {"bz2","iconv","c++","z","sqlite3","xml2","c++abi","resolv.9","plugin_hyperbid"},
		frameworks = {
			--Core
			'HyperBidBanner', 
			'HyperBidInterstitial',
			'HyperBidNative',
			'HyperBidRewardedVideo',
			'HyperBidSDK',
			'HyperBidSplash',
			--AdColony
			'AdColony',
			'HyperBidAdColonyAdapter',
			--AppLovin
			'AppLovinSDK',
			'HyperBidApplovinAdapter',
			--Chartboost
			'Chartboost',
			'HeliumAdapterChartboost',
			'HyperBidChartboostAdapter',
			--Unity
			'UnityAds',
			'HyperBidUnityAdsAdapter',
			--Vungle
			'VungleSDK',
			'HyperBidVungleAdapter',
			--IronSource
			'IronSource',
			'HyperBidIronSourceAdapter',
			--GoogleAds
			'GoogleMobileAds',
			'GoogleUtilities',
			'GoogleAppMeasurement',
			'nanopb',
			'UserMessagingPlatform',
			'PromisesObjC',
			'HyperBidAdmobAdapter',
			--Facebook
			'FBAudienceNetwork',
			'HyperBidFacebookAdapter',
			--Inmobi
			'InMobiSDK',
			'HyperBidInmobiAdapter',
			--StartApp
			'StartApp',
			'HyperBidStartAppAdapter',
			--Tapjoy
			'Tapjoy',
			'HyperBidStartAppAdapter',
			--Other
			"Accelerate",
			"AdSupport",
			"AppTrackingTransparency",
			"AudioToolbox",
			"AVFoundation",
			"CoreGraphics",
			"CoreLocation",
			"CoreFoundation",
			"CoreMedia",
			"CoreMotion",
			"CoreTelephony",
			"Foundation",
			"MediaPlayer",
			"MessageUI",
			"QuartzCore",
			"SafariServices",
			"StoreKit",
			"SystemConfiguration",
			"UIKit",
			"WebKit"
		},
		usesSwift = true
	},
}



return metadata
