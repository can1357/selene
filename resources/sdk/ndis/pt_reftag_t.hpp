#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PT_REFTAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pt_reftag_t : uint8_t
    {                               
        bind_iter =      0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        readregistry =   0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindnotify =     0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unbindnotify =   0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reconfig =       0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unloadnotify =   0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unbinding =      0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        binding =        0x7,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindingx =       0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        open =           0x9,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reenumerate =    0xa,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        qunbind =        0xb,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindcomplete =   0xc,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bindfailnotify = 0xd,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pd_client =      0xe,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        number_of_tags = 0xf,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
