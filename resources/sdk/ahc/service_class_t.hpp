#pragma once
#include <sdkgen/support_library.hpp>

namespace ahc
{
    // [enum _AHC_SERVICE_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class service_class_t : int32_t
    {                                   
        lookup =            0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove =            0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        update =            0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clear =             0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        snap_statistics =   0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        snap_cache =        0x5,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lookup_cdb =        0x6,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        refresh_cdb =       0x7,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        map_quirks =        0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hw_id_query =       0x9,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        init_process_data = 0xa,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =             0xa,          // Windows 10 v1607
        lookup_process =    0xb,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =               0xc,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
