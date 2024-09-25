#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_QOS_SQ_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class qos_sq_type_t : int32_t
    {                                 
        undefined = 0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        standard =  0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        gft =       0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x3,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};