#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_VERIFIER_INFORMATION_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class verifier_information_class_t : int32_t
    {                                                
        verifier_all_information =           0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verifier_page_heaps_information =    0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verifier_runtime_flags_information = 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verifier_fault_inject_information =  0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_verifier_information =           0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
