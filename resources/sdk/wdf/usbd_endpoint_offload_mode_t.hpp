#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _USBD_ENDPOINT_OFFLOAD_MODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usbd_endpoint_offload_mode_t : int32_t
    {                                                
        mode_not_supported = 0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        software_assisted =  0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware_assisted =  0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
