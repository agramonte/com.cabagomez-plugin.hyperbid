# solar2d-HyperBid-Plugin
HyperBid Plugin for solar2d (Beta)   

Please note:   
1. HyperBid is GameAnalytics new ad mediation platform.   
2. This plugin is not the official HyperBid plugin. I imagine that at somepoint they'll release a solar2d version since they have supported solar2d for a very long time.   
3. The iOS plugin with Unity enabled crashes on devices running anything under iOS 10. I have a segment set up for devices under iOS 10 and exclude Unity.   
4. Tappx only available on Android and only for banner. If you use it and have not registered please use my affiliate link:
https://dashboard.tappx.com/?h=a386595d4c1005fd21b82c8a44d45766.   

Integration steps:   
1. Register for Hyperbid https://app.hyperbid.com.   

2. For iOS add plist:   
```
plist = {
            NSAppTransportSecurity = { NSAllowsArbitraryLoads=true },
            SKAdNetworkItems = 
            {
                { SKAdNetworkIdentifier = "xxxx-lowercasealphanumeric-xxxx.skadnetwork" },
                { SKAdNetworkIdentifier = "xxxx-lowercasealphanumeric-xxxx.skadnetwork" }
            },
}
```   
3. Plugin supports Android 21 and above. Add to your build settings file:
```
minSdkVersion = "21",
```   
4. Refrence the plugin:
```
local hyperbid = require( "plugin.hyperbid" )
```   
5. Init. 
```
hyperbid.init(
    adListerner, -- Listerner. Required.
        {
            hyperBidAppID = <appId>, -- Replace with your appId.
            hyperBidAppKey = <appKey>, -- Replace with your key.
            showDebugLog=false, -- Optional debug param. Defaults to false. Show extended logs.
            coppaUnderAge=false, -- Optional. Defaults to false.
            gdprUnderAge=false, -- Optional. Defaults to false.
            userId="xsdsfsd", -- Optional. UserId. If not provided hyperbid will autogenerate one.
            hasUserConsent=false, -- Optional. Targeted ads. Defaults to false.
            ccpaDoNotSell=false, -- Optional. False = Sell the data. True = do not sell. Default is false.
            channel = <anything> -- Optional. String value to use as a segment.
        } -- Table with options.
    )
```   
6. Show.
```
    hyperbid.show("<adtype>", -- Ad type. Valid values are: "interstitial", "rewardedVideo", "banner"      {
            y=<bannerPosition>, -- Optional. Valid for banner. Valid values are "top" and "bottom". Defaults to "bottom".
            placementId=<placementId> -- Required.
        } -- Optional table.
    )
```

7. Is Available.
```
    hyperbid.isAvailable("<adtype>") -- Ad type. Valid values are: "interstitial", "banner", "rewardedVideo".
```  
8. Hide.
```
    hyperbid.hide() -- Only functions for banner.
```

9. Load.
```
   hyperbid.load( "<adType>", -- Ad type. Valid values are: "interstitial", "banner", "rewardedVideo".
        {
            placementId=<placement id> -- Required.
        } 
    ) 
```    
11. If using:   
AdColony add these schemes (iOS only):   
```
    LSApplicationQueriesSchemes = 
    {   
            "fb",
            "instagram",
            "tumblr",
            "twitter"}
```   

iOS mediation networks:   
    HyperBidBanner:5.7.79   	
    AdColony:4.7.2     
    AppLovinSDK:10.3.5     
    Chartboost / Helium :8.4.2 / 2.3.1   
    Facebook:6.7.0  
    UnityAds:3.7.5    
    VungleSDK:6.10.3 
    Inmobi:10.0.0  
    IronSource:7.1.11.0
    GoogleMobileAds:8.10.0   

Android mediation networks:   
    com.hyperbid.sdk:core:5.7.78   

    //Facebook    
    com.hyperbid.sdk:adapter-facebook:5.7.78   
    com.facebook.android:audience-network-sdk:6.7.0   

    //Admob   
    com.hyperbid.sdk:adapter-admob:5.7.78   
    com.google.android.gms:play-services-ads:20.3.0"    

    //AppLovin    
    com.hyperbid.sdk:adapter-applovin:5.7.78      
    com.applovin:applovin-sdk:10.3.4"    

    //UnityAds   
    com.hyperbid.sdk:adapter-unityads:5.7.78   
    com.unity3d.ads:unity-ads:3.7.5"   

    //Chartboost   
    com.hyperbid.sdk:adapter-chartboost:5.7.78   
    com.chartboost:chartboost-sdk:8.2.1   
    com.chartboost:helium:2.2.1   

    //Vungle    
    com.hyperbid.sdk:adapter-vungle:5.7.78   
    com.vungle:publisher-sdk-android:6.10.2   

    //Inmobi   
    com.hyperbid.sdk:adapter-inmobi:5.7.78   
    com.inmobi.monetization:inmobi-ads:9.2.1  

    //Ironsource   
    com.hyperbid.sdk:adapter-ironsource:5.7.78   
    com.ironsource.sdk:mediationsdk:7.1.10   

    //AdColony
    com.hyperbid.sdk:adapter-adcolony:5.7.78   
    com.adcolony:sdk:4.6.4   

    //Tappx
    Custom Adapter
    



THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
