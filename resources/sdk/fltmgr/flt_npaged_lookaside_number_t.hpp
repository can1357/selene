#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FLT_NPAGED_LOOKASIDE_NUMBER]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class flt_npaged_lookaside_number_t : int32_t
    {                                                 
        lookaside_small_irp_ctrl_list = 0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lookaside_large_irp_ctrl_list = 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        num_lookaside_lists =           0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
