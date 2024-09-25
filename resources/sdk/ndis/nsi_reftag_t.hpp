#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NSI_REFTAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class nsi_reftag_t : uint8_t
    {                                
        ioctl =          0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        status =         0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iftop =          0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ifstats =        0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ifoid =          0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        number_of_tags = 0x5,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
