#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_PROTOCOL_NVME_DATA_TYPE]
    //  WDK 10
    //
    enum class storage_protocol_nvme_data_type_t : int32_t
    {                                                     
        unknown =  0x0,                                     // WDK 10
        identify = 0x1,                                     // WDK 10
        log_page = 0x2,                                     // WDK 10
        feature =  0x3,                                     // WDK 10
    };                                                    
};
