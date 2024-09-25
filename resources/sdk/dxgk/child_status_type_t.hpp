#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_CHILD_STATUS_TYPE]
    //  WDK 10
    //
    enum class child_status_type_t : int32_t
    {                                       
        uninitialized =       0x0,            // WDK 10
        connection =          0x1,            // WDK 10
        rotation =            0x2,            // WDK 10
        miracast_connection = 0x3,            // WDK 10
    };                                      
};
