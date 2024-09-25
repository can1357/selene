#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_BIND_FILTER_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bind_filter_flags_t : int32_t
    {                                       
        optional =              0x1,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitoring =            0x2,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unbind_on_attach =      0x4,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unbind_on_detach =      0x8,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_start_at_boot_hint = 0x10,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
