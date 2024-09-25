#pragma once
#include <sdkgen/support_library.hpp>

namespace fs
{
    // [enum _FS_FILTER_SECTION_SYNC_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class filter_section_sync_type_t : int32_t
    {                                              
        other =          0x0,                        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_section = 0x1,                        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
