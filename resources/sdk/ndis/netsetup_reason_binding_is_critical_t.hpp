#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NETSETUP_REASON_BINDING_IS_CRITICAL]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class netsetup_reason_binding_is_critical_t : int32_t
    {                                                         
        is_security_critical = 0x1,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_media_converter =   0x2,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        provides_boot_device = 0x3,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
