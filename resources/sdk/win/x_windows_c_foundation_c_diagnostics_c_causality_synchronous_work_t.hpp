#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __x_Windows_CFoundation_CDiagnostics_CCausalitySynchronousWork]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class x_windows_c_foundation_c_diagnostics_c_causality_synchronous_work_t : int32_t
    {                                                                                       
        completion_notification = 0x0,                                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        progress_notification =   0x1,                                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        execution =               0x2,                                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                                      
};
