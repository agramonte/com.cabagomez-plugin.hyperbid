-----------------------------------------------------------------------------------------
--
-- main.lua
--
-----------------------------------------------------------------------------------------
local hyperbid = require( "plugin.hyperbid" )
local json = require( "json" )

local listerner = function(event)
    print("+++++hyperbid:",json.prettify(event))

    if event.phase == "init" then
        
        hyperbid.load("interstitial", { placementId = "<interplacementId>" })
        hyperbid.load("rewardedVideo", { placementId = "<rewardplacementId>" })
        hyperbid.load("banner", { placementId = "<bannerplacementId>"} )

    elseif event.phase == "loaded" then
        
    elseif event.phase == "reward" then
        
    elseif event.phase == "closed" then
        
    end

end


local onShowBannerPressed = function(event)
   if hyperbid.isAvailable( "banner" ) then
        hyperbid.show("banner")
   end

end

local onShowInterPressed = function(event)
    if hyperbid.isAvailable( "interstitial" ) then
        hyperbid.show("interstitial")
    end
end

local onShowRewardedPressed = function(event)
    if hyperbid.isAvailable( "rewardedVideo" ) then
        hyperbid.show("rewardedVideo")
    
    end

end

local onHideBannerPressed = function(event)
    hyperbid.hide("banner")

end


hyperbid.init( listerner, { 
    hyperBidAppID = "<appId>",
    hyperBidAppKey = "<appKey>",
    hasUserConsent = true,  -- GDPR consent.
    ccpaDoNotSell = false,
    coppaUnderAge = false,
    gdprUnderAge = false,
    userId = "123456", -- Optional. Useful for server to server rewards
    channel = "Google", -- Optional. I usually provide the store.
    showDebugLog = false 
} )



-- Banner show
local bannerShowBttn = display.newRect( 100, 120, 100, 20 )
bannerShowBttn:addEventListener("touch", onShowBannerPressed)

local bannerTxtBttn = display.newText({text="show banner", x=bannerShowBttn.x, y=bannerShowBttn.y, width = bannerShowBttn.width, height = bannerShowBttn.height, font=native.systemFont, fontSize=15, align = "center"})
bannerTxtBttn:setFillColor(0)


-- Banner Hide
local bannerHideBttn = display.newRect( 100, 150, 100, 20 )
bannerHideBttn:addEventListener("touch", onHideBannerPressed)

local bannerHidTxtBttn = display.newText({text="hide banner", x=bannerShowBttn.x, y=bannerHideBttn.y, width = bannerShowBttn.width, height = bannerShowBttn.height, font=native.systemFont, fontSize=15, align = "center"})
bannerHidTxtBttn:setFillColor(0)


-- Inter
local interShowBttn = display.newRect( 100, 180, 100, 20 )
interShowBttn:addEventListener("touch", onShowInterPressed)

local interTxtBttn = display.newText({text="show inter", x=bannerShowBttn.x, y=interShowBttn.y, width = bannerShowBttn.width, height = bannerShowBttn.height, font=native.systemFont, fontSize=15, align = "center"})
interTxtBttn:setFillColor(0)

-- Rwd
local rwdShowBttn = display.newRect( 100, 210, 100, 20 )
interShowBttn:addEventListener("touch", onShowRewardedPressed)

local rwdTxtBttn = display.newText({text="show reward", x=bannerShowBttn.x, y=rwdShowBttn.y, width = bannerShowBttn.width, height = bannerShowBttn.height, font=native.systemFont, fontSize=15, align = "center"})
rwdTxtBttn:setFillColor(0)
                
