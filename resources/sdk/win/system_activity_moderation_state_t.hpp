#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYSTEM_ACTIVITY_MODERATION_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_activity_moderation_state_t : int32_t                       
    {                                                                             
        system_activity_moderation_state_system_managed =                  0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_activity_moderation_state_user_managed_allow_throttling =   0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_activity_moderation_state_user_managed_disable_throttling = 0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_system_activity_moderation_state =                             0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                            
};
