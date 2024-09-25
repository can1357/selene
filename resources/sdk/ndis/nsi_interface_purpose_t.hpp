#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NSI_INTERFACE_PURPOSE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class nsi_interface_purpose_t : int32_t
    {                                           
        _default =             0x0,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_vswitch_nic = 0x1,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                  0x2,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
