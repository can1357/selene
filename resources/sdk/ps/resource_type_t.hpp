#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [enum _PS_RESOURCE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class resource_type_t : int32_t
    {                                   
        non_paged_pool = 0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paged_pool =     0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        page_file =      0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        working_set =    0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
