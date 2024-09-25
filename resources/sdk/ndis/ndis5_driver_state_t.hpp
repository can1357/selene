#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_NDIS5_DRIVER_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ndis5_driver_state_t : int32_t
    {                                        
        unused =  0x0,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        paused =  0x1,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        running = 0x2,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
