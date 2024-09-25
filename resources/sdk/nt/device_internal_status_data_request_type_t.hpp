#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEVICE_INTERNAL_STATUS_DATA_REQUEST_TYPE]
    //  WDK 10
    //
    enum class device_internal_status_data_request_type_t : int32_t
    {                                                              
        internal_status_data_request_type_undefined = 0x0,           // WDK 10
        current_internal_status_data_header =         0x1,           // WDK 10
        current_internal_status_data =                0x2,           // WDK 10
    };                                                             
};
