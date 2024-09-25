#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_PROTOCOL_UFS_DATA_TYPE]
    //  WDK 10
    //
    enum class storage_protocol_ufs_data_type_t : int32_t
    {                                                    
        unknown =          0x0,                            // WDK 10
        query_descriptor = 0x1,                            // WDK 10
        max =              0x2,                            // WDK 10
    };                                                   
};
