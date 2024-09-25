#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_SLAB_ALLOCATOR_PROTECTION]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class slab_allocator_protection_t : int32_t
    {                                               
        read_execute = 0x0,                           // Windows 10 v2004, Windows 10 v20H2
        read_only =    0x1,                           // Windows 10 v2004, Windows 10 v20H2
        no_access =    0x2,                           // Windows 10 v2004, Windows 10 v20H2
        read_write =   0x3,                           // Windows 10 v2004, Windows 10 v20H2
        max =          0x4,                           // Windows 10 v2004, Windows 10 v20H2
    };                                              
};
