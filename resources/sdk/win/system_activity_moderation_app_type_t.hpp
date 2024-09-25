#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYSTEM_ACTIVITY_MODERATION_APP_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_activity_moderation_app_type_t : int32_t
    {                                                         
        system_activity_moderation_app_type_classic =  0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_activity_moderation_app_type_packaged = 0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_system_activity_moderation_app_type =      0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
