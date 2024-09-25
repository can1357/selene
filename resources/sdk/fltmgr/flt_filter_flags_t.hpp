#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FLT_FILTER_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class flt_filter_flags_t : int32_t    
    {                                          
        mandatory_unload_in_progress = 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filtering_initiated =          0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        name_provider =                0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        supports_pipes_mailslots =     0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        backed_by_pagefile =           0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        supports_dax_volume =          0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        supports_wcos =                0x40,     // Windows 11
        filters_read_write =           0x80,     // Windows 11
    };                                         
};
