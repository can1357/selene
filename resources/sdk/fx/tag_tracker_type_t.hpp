#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxTagTrackerType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class tag_tracker_type_t : uint8_t
    {                                      
        handle = 0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power =  0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
