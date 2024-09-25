#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_CERTIFICATE_TYPE]
    //  WDK 10
    //
    enum class certificate_type_t : int32_t    
    {                                          
        force_ulong =                  -0x1,     // WDK 10
        opm_certificate =              0x0,      // WDK 10
        copp_certificate =             0x1,      // WDK 10
        uab_certificate =              0x2,      // WDK 10
        indirect_display_certificate = 0x3,      // WDK 10
    };                                         
};
