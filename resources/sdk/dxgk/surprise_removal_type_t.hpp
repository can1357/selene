#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_SURPRISE_REMOVAL_TYPE]
    //  WDK 10
    //
    enum class surprise_removal_type_t : int32_t
    {                                           
        hibernation = 0x0,                        // WDK 10
        pn_p_notify = 0x1,                        // WDK 10
    };                                          
};
