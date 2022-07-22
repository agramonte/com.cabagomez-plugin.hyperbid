local metadata =
{
	plugin =
	{
		format = 'staticLibrary',
		staticLibs = {
			"bz2",
			"iconv",
			"c++",
			"z",
			"sqlite3",
			"xml2",
			"c++abi",
			"resolv.9",
			"plugin_hyperbid"
		},
		frameworks = {
			--Core
			'HyperBidBanner', 
			'HyperBidInterstitial',
			'HyperBidNative',
			'HyperBidRewardedVideo',
			'HyperBidSDK',
			'HyperBidSplash',
			--Unity
			'HyperBidUnityAdsAdapter',
			'UnityAds',
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
			--Vungle
			'VungleSDK',
			'HyperBidVungleAdapter',
			--GoogleAds
			'GoogleMobileAds',
			'GoogleUtilities',
			'GoogleAppMeasurement',
			'nanopb',
			'UserMessagingPlatform',
			'PromisesObjC',
			'GoogleAppMeasurementIdentitySupport',
			'HyperBidAdmobAdapter',
			--Facebook
			'FBAudienceNetwork',
			'FBSDKCoreKit_Basics',
			'HyperBidFacebookAdapter',
			--Tapjoy
			'Tapjoy',
			'HyperBidTapjoyAdapter',
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
			"WebKit",
			"VideoToolbox"
		},
		usesSwift = true
	},
}



return metadata
