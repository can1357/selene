#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/notify_user_power_setting_t.start.hpp"
namespace win
{
    // [struct NOTIFY_USER_POWER_SETTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct notify_user_power_setting_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                          
        _m00 struct nt::guid_t guid;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Guid
                                      
        SDK_MAGIC_PROPERTIES( "NOTIFY_USER_POWER_SETTING.$", 0x10, true, 0xa26403b317567add );     
        SDK_FIXED_SIZE( notify_user_power_setting_t, 0x10 );     
    };                                
};
#include "magic/notify_user_power_setting_t.end.hpp"
SDK_VERIFY( struct win::notify_user_power_setting_t, 0x10 );
