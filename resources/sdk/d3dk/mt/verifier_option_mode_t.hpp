#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_VERIFIER_OPTION_MODE]
    //  WDK 10
    //
    enum class verifier_option_mode_t : int32_t
    {                                          
        query = 0x0,                             // WDK 10
        set =   0x1,                             // WDK 10
    };                                         
};
