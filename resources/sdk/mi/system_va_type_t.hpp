#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_SYSTEM_VA_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_va_type_t : int32_t       
    {                                           
        unused =                        0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        session_space =                 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        process_space =                 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        boot_loaded =                   0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pfn_database =                  0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        non_paged_pool =                0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paged_pool =                    0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        special_pool_paged =            0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_cache =                  0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_ptes =                   0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hal =                           0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        formerly_session_global_space = 0xb,      // Windows 11
        session_global_space =          0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        driver_images =                 0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        special_pool_non_paged =        0xd,      // Windows 10 v1607
        system_ptes_large =             0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel_stacks =                 0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //maximum_type =                0xe,      // Windows 10 v1607
        secure_non_paged_pool =         0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //system_ptes_large =           0xf,      // Windows 10 v1607
        kernel_shadow_stacks =          0x10,     // Windows 11
        maximum_type =                  0x10,     // Windows 10 v2004, Windows 10 v20H2
        kasan =                         0x11,     // Windows 11
        //maximum_type =                0x12,     // Windows 11
    };                                          
};
