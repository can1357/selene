#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PARTITION_INFORMATION_CLASS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class partition_information_class_t : int32_t
    {                                                 
        information =                  0x0,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        move_memory =                  0x1,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        add_pagefile =                 0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        combine_memory =               0x3,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        initial_add_memory =           0x4,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_memory_events =            0x5,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_attributes =               0x6,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        node_information =             0x7,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_large_pages =           0x8,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dedicated_memory_information = 0x9,             // Windows 11
        max =                          0x9,             // Windows 10 v2004, Windows 10 v20H2
        open_dedicated_memory =        0xa,             // Windows 11
        memory_charge_attributes =     0xb,             // Windows 11
        clear_attributes =             0xc,             // Windows 11
        //max =                        0xd,             // Windows 11
    };                                                
};
