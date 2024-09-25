#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_VGPU_CAPABILITY_TYPE]
    //  WDK 10
    //
    enum class vgpu_capability_type_t : int32_t
    {                                          
        memory =  0x0,                           // WDK 10
        encode =  0x1,                           // WDK 10
        decode =  0x2,                           // WDK 10
        compute = 0x3,                           // WDK 10
        max =     0x4,                           // WDK 10
    };                                         
};
