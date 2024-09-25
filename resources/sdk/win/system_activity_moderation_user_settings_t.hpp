#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_activity_moderation_user_settings_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ACTIVITY_MODERATION_USER_SETTINGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_activity_moderation_user_settings_t
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                         
        _m00 void* user_key_handle;                    //{ +0x0000    +0x0000    +0x0000    } | .UserKeyHandle
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ACTIVITY_MODERATION_USER_SETTINGS.$", 0x8, true, 0x9db0c0bd140d7225 );                
        SDK_FIXED_SIZE( system_activity_moderation_user_settings_t, 0x8 );                
    };                                               
};
#include "magic/system_activity_moderation_user_settings_t.end.hpp"
SDK_VERIFY( struct win::system_activity_moderation_user_settings_t, 0x8 );
