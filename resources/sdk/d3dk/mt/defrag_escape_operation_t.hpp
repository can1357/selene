#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_DEFRAG_ESCAPE_OPERATION]
    //  WDK 10
    //
    enum class defrag_escape_operation_t : int32_t
    {                                             
        get_fragmentation_stats = 0x0,              // WDK 10
        defrag_upward =           0x1,              // WDK 10
        defrag_downward =         0x2,              // WDK 10
        defrag_pass =             0x3,              // WDK 10
        verify_transfer =         0x4,              // WDK 10
    };                                            
};
