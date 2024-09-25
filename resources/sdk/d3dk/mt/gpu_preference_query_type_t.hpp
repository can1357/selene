#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_GPU_PREFERENCE_QUERY_TYPE]
    //  WDK 10
    //
    enum class gpu_preference_query_type_t : int32_t
    {                                               
        ihv_dlist =       0x0,                        // WDK 10
        dx_database =     0x1,                        // WDK 10
        user_preference = 0x2,                        // WDK 10
    };                                              
};
