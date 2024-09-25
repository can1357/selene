#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PASSWORD_POLICY_VALIDATION_TYPE]
    //  WDK 10
    //
    enum class password_policy_validation_type_t : int32_t
    {                                                     
        authentication =  0x1,                              // WDK 10
        password_change = 0x2,                              // WDK 10
        password_reset =  0x3,                              // WDK 10
    };                                                    
};
