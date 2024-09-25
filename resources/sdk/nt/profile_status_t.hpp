#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum PROFILE_STATUS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class profile_status_t : int32_t
    {                                    
        notdockdevice =      0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        quiescent =          0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        arriving =           0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        departing =          0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ejectirp_completed = 0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
