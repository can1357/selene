#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FP_IEEE_COMPARE_RESULT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fp_ieee_compare_result_t : int32_t
    {                                            
        equal =     0x0,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        greater =   0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        less =      0x2,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unordered = 0x3,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
