#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PERFINFO_KERNELMEMORY_USAGE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class perfinfo_kernelmemory_usage_type_t : int32_t
    {                                                      
        pfn_metadata = 0x0,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =          0x1,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
