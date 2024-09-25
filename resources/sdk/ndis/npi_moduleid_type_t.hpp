#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NPI_MODULEID_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class npi_moduleid_type_t : int32_t
    {                                       
        guid =    0x1,                        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        if_luid = 0x2,                        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
