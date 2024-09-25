#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_PD_PROVIDER_CONTROL_CODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pd_provider_control_code_t : int32_t
    {                                              
        pdpctl_unknown =      0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdpctl_capabilities = 0x1,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdpctl_max =          0x2,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
