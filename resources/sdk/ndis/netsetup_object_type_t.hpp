#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NETSETUP_OBJECT_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class netsetup_object_type_t : int32_t
    {                                          
        unknown =            0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        global =             0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface =          0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_driver =      0x3,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        protocol_driver =    0x4,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        service_driver =     0x5,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_driver =      0x6,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        binding_path =       0x7,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mux =                0x8,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        transaction =        0x9,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reflected_property = 0xa,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bind_rule =          0xb,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_driver =   0xc,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =            0xd,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
