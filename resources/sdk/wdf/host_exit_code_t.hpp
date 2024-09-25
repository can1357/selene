#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_HOST_EXIT_CODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class host_exit_code_t : int32_t                  
    {                                                      
        still_active =                       0x103,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        code_unknown =                       0x70000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_driver_stop_reported =      0x70000001,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_driver_stop_report_failed = 0x70000002,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        external_termination =               0x70000003,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
