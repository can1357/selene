#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __x_Windows_CFoundation_CDiagnostics_CCausalitySource]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class x_windows_c_foundation_c_diagnostics_c_causality_source_t : int32_t
    {                                                                             
        application = 0x0,                                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        library =     0x1,                                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system =      0x2,                                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                            
};
