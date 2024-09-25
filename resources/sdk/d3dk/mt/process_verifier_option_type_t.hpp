#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_PROCESS_VERIFIER_OPTION_TYPE]
    //  WDK 10
    //
    enum class process_verifier_option_type_t : int32_t
    {                                                  
        flags =           0x3e8,                         // WDK 10
        restrict_budget = 0x3e9,                         // WDK 10
    };                                                 
};
