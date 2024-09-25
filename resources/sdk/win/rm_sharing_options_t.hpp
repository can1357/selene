#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _RM_SHARING_OPTIONS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rm_sharing_options_t : int32_t
    {                                        
        none =              0x0,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        donor =             0x1,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        first_recipient =   0x2,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        recipient =         0x2,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pple_recipient =    0x3,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        elastic_recipient = 0x4,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_recipient =    0x4,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        options_count =     0x5,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
