#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NETSETUP_BINDING_PATH_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class netsetup_binding_path_type_t : int32_t
    {                                                
        ndis_protocol = 0x0,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_filter =   0x1,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tdi =           0x2,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
