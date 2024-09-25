#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KMTUMDVERSION]
    //  WDK 10
    //
    enum class kmtumdversion_t : int32_t
    {                                   
        kmtumdversion_dx9 =  0x0,         // WDK 10
        kmtumdversion_dx10 = 0x1,         // WDK 10
        kmtumdversion_dx11 = 0x2,         // WDK 10
        kmtumdversion_dx12 = 0x3,         // WDK 10
        num_kmtumdversions = 0x4,         // WDK 10
    };                                  
};
