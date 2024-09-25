#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FLT_PREOP_CALLBACK_STATUS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class flt_preop_callback_status_t : int32_t
    {                                               
        success_with_callback = 0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        success_no_callback =   0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending =               0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disallow_fastio =       0x3,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        complete =              0x4,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronize =           0x5,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disallow_fsfilter_io =  0x6,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_data_node =         0x2710,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
