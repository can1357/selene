#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _CALLBACK_NODE_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class callback_node_flags_t : int32_t  
    {                                           
        skip_paging_io =                0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        skip_cached_io =                0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_name_callback_ex =          0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        skip_non_dasd_io =              0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        skip_non_cached_non_paging_io = 0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
