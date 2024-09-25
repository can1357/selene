#pragma once
#include <sdkgen/support_library.hpp>

namespace boot
{
    // [enum _BOOT_ENTROPY_SOURCE_RESULT_CODE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class entropy_source_result_code_t : int32_t
    {                                                
        structure_uninitialized = 0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_by_policy =      0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_present =             0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =                   0x3,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        success =                 0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
