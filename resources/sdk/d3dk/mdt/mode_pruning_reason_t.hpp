#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_MODE_PRUNING_REASON]
    //  WDK 10
    //
    enum class mode_pruning_reason_t : int32_t               
    {                                                        
        uninitialized =                               0x0,     // WDK 10
        allcaps =                                     0x1,     // WDK 10
        descriptor_monitor_source_mode =              0x2,     // WDK 10
        descriptor_monitor_frequency_range =          0x3,     // WDK 10
        descriptor_override_monitor_source_mode =     0x4,     // WDK 10
        descriptor_override_monitor_frequency_range = 0x5,     // WDK 10
        default_profile_monitor_source_mode =         0x6,     // WDK 10
        driver_recommended_monitor_source_mode =      0x7,     // WDK 10
        monitor_frequency_range_override =            0x8,     // WDK 10
        clone_path_pruned =                           0x9,     // WDK 10
        maxvalid =                                    0xa,     // WDK 10
    };                                                       
};
