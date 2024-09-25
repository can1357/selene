#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_RFC6877_464XLAT_OFFLOAD_OPTIONS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rfc6877_464xlat_offload_options_t : int32_t
    {                                                     
        not_supported = 0x0,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =      0x1,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled =       0x2,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        on_demand =     0x3,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
