#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum BINDING_ENABLED_OR_DISABLED]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class binding_enabled_or_disabled_t : int32_t
    {                                                 
        enabled =  0x0,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled = 0x1,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
