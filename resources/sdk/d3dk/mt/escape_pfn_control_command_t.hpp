#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_ESCAPE_PFN_CONTROL_COMMAND]
    //  WDK 10
    //
    enum class escape_pfn_control_command_t : int32_t
    {                                                
        _default =  0x0,                               // WDK 10
        force_cpu = 0x1,                               // WDK 10
        force_gpu = 0x2,                               // WDK 10
    };                                               
};
