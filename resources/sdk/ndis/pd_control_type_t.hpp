#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_PD_CONTROL_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pd_control_type_t : int32_t
    {                                     
        in =    0x0,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        out =   0x1,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        inout = 0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
