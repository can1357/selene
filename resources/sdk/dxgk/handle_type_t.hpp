#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_HANDLE_TYPE]
    //  WDK 10
    //
    enum class handle_type_t : int32_t
    {                                 
        allocation = 0x1,               // WDK 10
        resource =   0x2,               // WDK 10
    };                                
};
