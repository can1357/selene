#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FLT_POSTOP_CALLBACK_STATUS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class flt_postop_callback_status_t : int32_t
    {                                                
        finished_processing =      0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        more_processing_required = 0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disallow_fsfilter_io =     0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
