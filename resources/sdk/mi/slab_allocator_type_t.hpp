#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_SLAB_ALLOCATOR_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class slab_allocator_type_t : int32_t 
    {                                          
        execute_protected =             0x0,     // Windows 11
        slat_protected =                0x0,     // Windows 10 v2004, Windows 10 v20H2
        slat_protected_start =          0x0,     // Windows 11
        read_only_protected =           0x1,     // Windows 11
        unprotected =                   0x1,     // Windows 10 v2004, Windows 10 v20H2
        max =                           0x2,     // Windows 10 v2004, Windows 10 v20H2
        no_access_protected =           0x2,     // Windows 11
        kernel_shadow_stack_protected = 0x3,     // Windows 11
        slat_protected_last =           0x3,     // Windows 11
        image_unprotected =             0x4,     // Windows 11
        slat_unprotected_start =        0x4,     // Windows 11
        generic_unprotected =           0x5,     // Windows 11
        non_paged_unprotected =         0x6,     // Windows 11
        slat_unprotected_last =         0x6,     // Windows 11
        //max =                         0x7,     // Windows 11
    };                                         
};
