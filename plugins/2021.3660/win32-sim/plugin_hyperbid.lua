-- Applovin plugin

local Library = require "CoronaLibrary"

-- Create library
local lib = Library:new{ name="plugin.hyperbid", publisherId="com.cabagomez", version=3 }

-------------------------------------------------------------------------------
-- BEGIN
-------------------------------------------------------------------------------

-- This sample implements the following Lua:
-- 
--    local hyperbid = require "plugin.hyperbid"
--    hyperbid.init()
--    

local function showWarning(functionName)
    print( functionName .. " WARNING: The hyperbid plugin is only supported on iOS and Android. Please build for device")
end

function lib.init()
    showWarning("hyperbid.init()")
end

-------------------------------------------------------------------------------
-- END
-------------------------------------------------------------------------------

-- Return an instance
return lib
