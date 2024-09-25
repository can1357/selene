#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum ACTIVATION_OBJECT_CONFIG_BEHAVIOR]
    //  Windows 11
    //
    enum class activation_object_config_behavior_t : int32_t
    {                                                       
        _default =                      0x0,                  // Windows 11
        setforegroundwithinappprocess = 0x1,                  // Windows 11
    };                                                      
};
