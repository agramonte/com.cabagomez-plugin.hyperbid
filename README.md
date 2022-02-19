# solar2d-HyperBid-Plugin
HyperBid Plugin for solar2d (Beta)   

Please note:   
1. HyperBid is GameAnalytics new ad mediation platform.   
2. This plugin is not the official HyperBid plugin. I imagine that at somepoint they'll release a solar2d version since they have supported solar2d for a very long time.   
3. The iOS plugin with Unity enabled crashes on devices running anything under iOS 10. I have a segment set up for devices under iOS 10 and exclude Unity.   
4. Tappx only available on Android and only for banner. If you use it and have not registered please use my affiliate link:
https://dashboard.tappx.com/?h=a386595d4c1005fd21b82c8a44d45766.  
5. StartIO is now a possible mediation provider on Android and Amazon. If you use it and have not registered please use my affiliate link:
https://portal.start.io/#/signup?referredby=b7977c81-d3e2-4b3d-b539-96dd6cffbcdc&preferredsite=pub&source=directURL 

Integration steps:   
1. Register for Hyperbid https://app.hyperbid.com.   
2. Add the plugin to your build settings:    
```
    ["plugin.hyperbid"] = 
        {
            publisherId = "com.cabagomez"
        }

```   
Also please make sure to add any other required entries based on the networks you select.   
3. For iOS add plist:   
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
4. Plugin supports Android 21 and above. Add to your build settings file:
```
minSdkVersion = "21",
```   
5. Refrence the plugin:
```
local hyperbid = require( "plugin.hyperbid" )
```   
6. Init. 
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
7. Show.
```
    hyperbid.show("<adtype>", -- Ad type. Valid values are: "interstitial", "rewardedVideo", "banner"      {
            y=<bannerPosition>, -- Optional. Valid for banner. Valid values are "top" and "bottom". Defaults to "bottom".
            placementId=<placementId> -- Required.
        } -- Optional table.
    )
```

8. Is Available.
```
    hyperbid.isAvailable("<adtype>") -- Ad type. Valid values are: "interstitial", "banner", "rewardedVideo".
```  
9. Hide.
```
    hyperbid.hide() -- Only functions for banner.
```

10. Load.
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
    HyperBidBid:5.7.79   	
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
    HyperBid:5.7.78   
    Facebook:6.8.0  
    Admob:19.8.0   
    Applovin:10.3.4   
    Unity:3.7.5   
    Chartboost:8.2.1 / Helium:2.2.1   
    Vungle:6.10.3   
    Tappx:3.1.17   
    AdColony:4.6.5      
    Inmobi:10.0.3   
    Pangle:3.9.0.5   
    StartApp:4.8.11   

Kindle mediation networks:   
    HyperBid:5.7.78    
    Facebook:6.8.0  
    Admob:19.8.0   
    Chartboost:8.2.1/Helium:2.2.1      
    Vungle:6.10.3   
    AdColony:4.6.5      
    Inmobi:10.0.3   
    Pangle:3.9.0.5   
    StartApp:4.8.11     

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
