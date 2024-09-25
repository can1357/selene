#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_QUERYSTATISTICS_TYPE]
    //  WDK 10
    //
    enum class querystatistics_type_t : int32_t
    {                                          
        adapter =               0x0,             // WDK 10
        process =               0x1,             // WDK 10
        process_adapter =       0x2,             // WDK 10
        segment =               0x3,             // WDK 10
        process_segment =       0x4,             // WDK 10
        node =                  0x5,             // WDK 10
        process_node =          0x6,             // WDK 10
        vidpnsource =           0x7,             // WDK 10
        process_vidpnsource =   0x8,             // WDK 10
        process_segment_group = 0x9,             // WDK 10
        physical_adapter =      0xa,             // WDK 10
    };                                         
};
