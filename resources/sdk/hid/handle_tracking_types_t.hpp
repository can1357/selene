#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum HandleTrackingTypes]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class handle_tracking_types_t : int32_t
    {                                           
        open =                  0x0,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        open_for_read =         0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        open_for_write =        0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        restriction_for_read =  0x3,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        restriction_for_write = 0x4,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        restriction_for_any =   0x5,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =                 0x6,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
