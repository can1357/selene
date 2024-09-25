#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxWmiInstanceAction]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wmi_instance_action_t : int32_t
    {                                         
        instance_action_invalid = 0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add_instance =            0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_instance =         0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
