#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_MEMORY_EVENT_TYPES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memory_event_types_t : int32_t  
    {                                          
        //low_available_pages_event =   0x0,     // Windows 10 v1607
        low_paged_pool_event =          0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //high_available_pages_event =  0x1,     // Windows 10 v1607
        high_paged_pool_event =         0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        low_non_paged_pool_event =      0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //low_paged_pool_event =        0x2,     // Windows 10 v1607
        high_non_paged_pool_event =     0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //high_paged_pool_event =       0x3,     // Windows 10 v1607
        low_available_pages_event =     0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //low_non_paged_pool_event =    0x4,     // Windows 10 v1607
        high_available_pages_event =    0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //high_non_paged_pool_event =   0x5,     // Windows 10 v1607
        low_commit_event =              0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_commit_event =             0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_commit_event =          0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_memory_detected_event =     0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        physical_memory_change_event =  0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        total_number_of_memory_events = 0xb,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
