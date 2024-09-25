#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_LWF_REFTAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class lwf_reftag_t : uint8_t
    {                                
        detaching =        0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        workitem =         0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //number_of_tags = 0x2,        // Windows 10 v1607
        pktmon =           0x2,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        number_of_tags =   0x3,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
