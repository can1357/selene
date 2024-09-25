#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MEMORY_PARTITION_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607
    //
    enum class memory_partition_information_class_t : int32_t
    {                                                        
        information =        0x0,                              // WDK 10, Windows 10 v1607
        move_memory =        0x1,                              // WDK 10, Windows 10 v1607
        add_pagefile =       0x2,                              // WDK 10, Windows 10 v1607
        combine_memory =     0x3,                              // WDK 10, Windows 10 v1607
        initial_add_memory = 0x4,                              // WDK 10, Windows 10 v1607
        get_memory_events =  0x5,                              // WDK 10
        max =                0x6,                              // WDK 10
    };                                                       
};
