#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _QUERY_FILE_LAYOUT_FILTER_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class query_file_layout_filter_type_t : int32_t
    {                                                   
        filter_type_none =               0x0,             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_type_clusters =           0x1,             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_type_fileid =             0x2,             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_type_storage_reserve_id = 0x3,             // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //num_filter_types =             0x3,             // Windows 10 v1607
        num_filter_types =               0x4,             // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
