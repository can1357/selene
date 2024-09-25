#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_FeatureChangeTime]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_change_time_t : int32_t
    {                                         
        read =    0x0,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reload =  0x1,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        session = 0x2,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reboot =  0x3,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
