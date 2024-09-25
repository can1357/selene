#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_CROSS_PARTITION_CHARGE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cross_partition_charge_type_t : int32_t
    {                                                 
        section_res_avail_charge =      0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        section_commit_charge =         0x1,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //large_page_res_avail_charge = 0x2,            // Windows 11
        page_combine_res_avail_charge = 0x2,            // Windows 10 v2004, Windows 10 v20H2
        //large_page_commit_charge =    0x3,            // Windows 11
        page_combine_commit_charge =    0x3,            // Windows 10 v2004, Windows 10 v20H2
        large_page_res_avail_charge =   0x4,            // Windows 10 v2004, Windows 10 v20H2
        small_awe_res_avail_charge =    0x4,            // Windows 11
        large_page_commit_charge =      0x5,            // Windows 10 v2004, Windows 10 v20H2
        small_awe_commit_charge =       0x5,            // Windows 11
        page_clone_res_avail_charge =   0x6,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        aggregate_res_avail_charge =    0x7,            // Windows 11
        maximum_charge =                0x7,            // Windows 10 v2004, Windows 10 v20H2
        aggregate_commit_charge =       0x8,            // Windows 11
        //maximum_charge =              0x9,            // Windows 11
    };                                                
};
