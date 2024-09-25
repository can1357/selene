#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_ASSIGNED_REGION_TYPES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class assigned_region_types_t : int32_t
    {                                           
        non_paged_pool =           0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //pfn_database =           0x0,           // Windows 11
        //non_paged_pool =         0x1,           // Windows 11
        paged_pool =               0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //paged_pool =             0x2,           // Windows 11
        system_cache =             0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //system_cache =           0x3,           // Windows 11
        system_ptes =              0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //system_ptes =            0x4,           // Windows 11
        ultra_zero =               0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        kasan =                    0x5,           // Windows 11
        pfn_database =             0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        cfg =                      0x6,           // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //ultra_zero =             0x6,           // Windows 11
        //cfg =                    0x7,           // Windows 11
        hyper_space =              0x7,           // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //hyper_space =            0x8,           // Windows 11
        kernel_stacks =            0x8,           // Windows 10 v2004, Windows 10 v20H2
        //page_tables =            0x8,           // Windows 10 v1607
        //kernel_stacks =          0x9,           // Windows 11
        page_tables =              0x9,           // Windows 10 v2004, Windows 10 v20H2
        special_pool =             0x9,           // Windows 10 v1607
        //page_tables =            0xa,           // Windows 11
        session =                  0xa,           // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        secure_non_paged_pool =    0xb,           // Windows 10 v2004, Windows 10 v20H2
        //session =                0xb,           // Windows 11
        working_set_paged_pool =   0xb,           // Windows 10 v1607
        //secure_non_paged_pool =  0xc,           // Windows 11
        system_images =            0xc,           // Windows 10 v2004, Windows 10 v20H2
        working_set_system_cache = 0xc,           // Windows 10 v1607
        kernel_shadow_stacks =     0xd,           // Windows 11
        maximum =                  0xd,           // Windows 10 v2004, Windows 10 v20H2
        //system_images =          0xd,           // Windows 10 v1607
        //maximum =                0xe,           // Windows 10 v1607
        //system_images =          0xe,           // Windows 11
        //maximum =                0xf,           // Windows 11
    };                                          
};
