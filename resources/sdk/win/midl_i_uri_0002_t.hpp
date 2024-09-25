#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_IUri_0002]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_uri_0002_t : int32_t
    {                                     
        unknown = 0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dns =     0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ipv4 =    0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ipv6 =    0x3,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        idn =     0x4,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
