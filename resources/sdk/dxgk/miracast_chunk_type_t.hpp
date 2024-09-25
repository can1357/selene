#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_MIRACAST_CHUNK_TYPE]
    //  WDK 10
    //
    enum class miracast_chunk_type_t : int32_t   
    {                                            
        encode_driver_defined_1 = -0x80000000,     // WDK 10
        encode_driver_defined_2 = -0x7fffffff,     // WDK 10
        unknown =                 0x0,             // WDK 10
        color_convert_complete =  0x1,             // WDK 10
        encode_complete =         0x2,             // WDK 10
        frame_start =             0x3,             // WDK 10
        frame_dropped =           0x4,             // WDK 10
    };                                           
};
