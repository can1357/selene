#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_MEMORY_SEGMENT_GROUP]
    //  WDK 10
    //
    enum class memory_segment_group_t : int32_t
    {                                          
        local =     0x0,                         // WDK 10
        non_local = 0x1,                         // WDK 10
    };                                         
};
