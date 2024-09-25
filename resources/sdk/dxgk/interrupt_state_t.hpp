#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_INTERRUPT_STATE]
    //  WDK 10
    //
    enum class interrupt_state_t : int32_t
    {                                     
        enable =  0x0,                      // WDK 10
        disable = 0x1,                      // WDK 10
    };                                    
};
