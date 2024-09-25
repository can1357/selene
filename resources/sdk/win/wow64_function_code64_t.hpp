#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _WOW64_FUNCTION_CODE64]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wow64_function_code64_t : int32_t 
    {                                            
        nop =                             0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_process_debug_info =        0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cpu_turbo_thunk_control =         0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cpu_cfg_dispatch_control =        0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //maximum =                       0x3,     // Windows 10 v1607
        cpu_optimize_chpe_import_thunks = 0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =                         0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
