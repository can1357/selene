#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum SPATIAL_INPUT_ACTIVATION_POLICY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class spatial_input_activation_policy_t : int32_t
    {                                                     
        activate =                     0x0,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        noactivate =                   0x1,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activateifappnotinforeground = 0x2,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        eat =                          0x4,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
