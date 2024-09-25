#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NetSetupSubkeyType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_setup_subkey_type_t : int32_t
    {                                           
        root =           0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        property_bag =   0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel_summary = 0x2,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        writeback =      0x3,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        keywords =       0x4,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
