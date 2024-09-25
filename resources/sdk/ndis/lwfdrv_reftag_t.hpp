#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_LWFDRV_REFTAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class lwfdrv_reftag_t : uint8_t
    {                                   
        attaching =      0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ioworkitem =     0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ioworkitemc =    0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filtermodule =   0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pd_client =      0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        number_of_tags = 0x5,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
