#pragma once
#include <sdkgen/support_library.hpp>

namespace sec
{
    // [enum _SecDelegationType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class delegation_type_t : int32_t
    {                                     
        full =      0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        service =   0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tree =      0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        directory = 0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        object =    0x4,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
