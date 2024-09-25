#pragma once
#include <sdkgen/support_library.hpp>

namespace se
{
    // [enum _SE_OBJECT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class object_type_t : int32_t   
    {                                    
        unknown_object_type =     0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_object =             0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        service =                 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        printer =                 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        registry_key =            0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lmshare =                 0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel_object =           0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        window_object =           0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ds_object =               0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ds_object_all =           0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        provider_defined_object = 0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wmiguid_object =          0xb,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        registry_wow64_32key =    0xc,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        registry_wow64_64key =    0xd,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
