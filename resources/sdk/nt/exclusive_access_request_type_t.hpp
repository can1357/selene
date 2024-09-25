#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _EXCLUSIVE_ACCESS_REQUEST_TYPE]
    //  WDK 10
    //
    enum class exclusive_access_request_type_t : int32_t
    {                                                   
        query_state =   0x0,                              // WDK 10
        lock_device =   0x1,                              // WDK 10
        unlock_device = 0x2,                              // WDK 10
    };                                                  
};
