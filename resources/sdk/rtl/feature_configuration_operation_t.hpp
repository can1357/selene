#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_FEATURE_CONFIGURATION_OPERATION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_configuration_operation_t : int32_t
    {                                                     
        none =          0x0,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        feature_state = 0x1,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        variant_state = 0x2,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reset_state =   0x4,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
