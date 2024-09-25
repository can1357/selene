#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_PD_COUNTER_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pd_counter_type_t : int32_t
    {                                     
        unknown =        0x0,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive_queue =  0x1,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        transmit_queue = 0x2,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive_filter = 0x3,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0x4,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
