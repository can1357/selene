#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum RegistrationSource]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class registration_source_t : int32_t
    {                                         
        system_registry =  0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        private_hive =     0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        packaged_com =     0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        winrt =            0x3,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sxs_manifest =     0x4,                 // Windows 11
        winrt_sxs =        0x4,                 // Windows 10 v2004, Windows 10 v20H2
        com_plus_catalog = 0x5,                 // Windows 11
        none =             0x6,                 // Windows 11
    };                                        
};
