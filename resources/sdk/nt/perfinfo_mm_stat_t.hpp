#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PERFINFO_MM_STAT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class perfinfo_mm_stat_t : int32_t
    {                                      
        not_used =               0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aggregate_page_combine = 0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iteration_page_combine = 0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                    0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
