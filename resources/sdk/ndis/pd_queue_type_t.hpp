#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_PD_QUEUE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pd_queue_type_t : int32_t
    {                                   
        unknown =  0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive =  0x1,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        transmit = 0x2,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =      0x3,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
