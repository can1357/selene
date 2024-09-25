#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WPP_CTL_NAMES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wpp_ctl_names_t : int32_t
    {                                   
        ctl_kmdf_trace_guid = 0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        last_ctl =            0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
