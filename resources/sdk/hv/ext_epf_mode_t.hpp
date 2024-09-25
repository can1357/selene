#pragma once
#include <sdkgen/support_library.hpp>

namespace hv
{
    // [enum _HV_EXT_EPF_MODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ext_epf_mode_t : int32_t
    {                                  
        min = 0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nt =  0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max = 0x1,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
