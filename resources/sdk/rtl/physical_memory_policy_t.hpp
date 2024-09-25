#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum RTL_PHYSICAL_MEMORY_POLICY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class physical_memory_policy_t : int32_t
    {                                            
        low =    0xa,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal = 0x14,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
