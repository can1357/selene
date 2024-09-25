#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MSV1_0_PROFILE_BUFFER_TYPE]
    //  WDK 10
    //
    enum class msv1_0_profile_buffer_type_t : int32_t
    {                                                
        v1_0_interactive_profile = 0x2,                // WDK 10
        v1_0_lm20_logon_profile =  0x3,                // WDK 10
        v1_0_smart_card_profile =  0x4,                // WDK 10
    };                                               
};
