#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_IInternetZoneManager_0002]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_internet_zone_manager_0002_t : int32_t
    {                                                       
        custom_edit =              0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add_sites =                0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        require_verification =     0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        include_proxy_override =   0x8,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        include_intranet_sites =   0x10,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_ui =                    0x20,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        supports_verification =    0x40,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unc_as_intranet =          0x80,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        detect_intranet =          0x100,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_locked_zones =         0x10000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verify_template_settings = 0x20000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_cache =                 0x40000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
