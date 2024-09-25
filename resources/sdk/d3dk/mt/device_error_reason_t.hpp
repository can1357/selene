#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_DEVICE_ERROR_REASON]
    //  WDK 10
    //
    enum class device_error_reason_t : int32_t
    {                                         
        generic =      -0x80000000,             // WDK 10
        driver_error = -0x7ffffffa,             // WDK 10
    };                                        
};
