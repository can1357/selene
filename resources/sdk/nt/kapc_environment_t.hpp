#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KAPC_ENVIRONMENT]
    //  WDK 10
    //
    enum class kapc_environment_t : int32_t
    {                                      
        original_apc_environment = 0x0,      // WDK 10
        attached_apc_environment = 0x1,      // WDK 10
        current_apc_environment =  0x2,      // WDK 10
        insert_apc_environment =   0x3,      // WDK 10
    };                                     
};
