#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __x_Windows_CFoundation_CDiagnostics_CCausalityRelation]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class x_windows_c_foundation_c_diagnostics_c_causality_relation_t : int32_t
    {                                                                               
        assign_delegate = 0x0,                                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        join =            0x1,                                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        choice =          0x2,                                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel =          0x3,                                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =           0x4,                                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                              
};
