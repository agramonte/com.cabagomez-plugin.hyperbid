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

function lib.show()
    showWarning("hyperbid.show()")
end

function lib.isAvailable()
    showWarning("hyperbid.isAvailable()")
end

function lib.hide()
    showWarning("hyperbid.hide()")
end

function lib.load()
    showWarning("hyperbid.load()")
end

-------------------------------------------------------------------------------
-- END
-------------------------------------------------------------------------------

-- Return an instance
return lib
