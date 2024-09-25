#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _SYSTEM_FEATURE_CONFIGURATION_SECTION_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_feature_configuration_section_type_t : int32_t
    {                                                               
        boot =           0x0,                                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        runtime =        0x1,                                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        usage_triggers = 0x2,                                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =          0x3,                                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                              
};
