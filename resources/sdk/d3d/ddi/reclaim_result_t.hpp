#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_RECLAIM_RESULT]
    //  WDK 10
    //
    enum class reclaim_result_t : int32_t
    {                                    
        ok =            0x0,               // WDK 10
        discarded =     0x1,               // WDK 10
        not_committed = 0x2,               // WDK 10
    };                                   
};
