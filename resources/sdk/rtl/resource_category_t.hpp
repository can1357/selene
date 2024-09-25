#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_RESOURCE_CATEGORY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class resource_category_t : int32_t
    {                                       
        physical_memory_tier =       0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disk_space_tier =            0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disk_speed_tier =            0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disk_write_constraint_tier = 0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                      0x3,     // Windows 10 v1607
        max =                        0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
