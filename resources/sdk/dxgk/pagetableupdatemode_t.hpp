#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_PAGETABLEUPDATEMODE]
    //  WDK 10
    //
    enum class pagetableupdatemode_t : int32_t
    {                                         
        cpu_virtual =  0x0,                     // WDK 10
        gpu_virtual =  0x1,                     // WDK 10
        gpu_physical = 0x2,                     // WDK 10
    };                                        
};
