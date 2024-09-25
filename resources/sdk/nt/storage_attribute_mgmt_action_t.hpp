#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_ATTRIBUTE_MGMT_ACTION]
    //  WDK 10
    //
    enum class storage_attribute_mgmt_action_t : int32_t
    {                                                   
        clear_attribute = 0x0,                            // WDK 10
        set_attribute =   0x1,                            // WDK 10
        reset_attribute = 0x2,                            // WDK 10
    };                                                  
};
