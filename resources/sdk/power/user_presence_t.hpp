#pragma once
#include <sdkgen/support_library.hpp>
#include "user_presence_type_t.hpp"

#include "magic/user_presence_t.start.hpp"
namespace power
{
    // [struct _POWER_USER_PRESENCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct user_presence_t                                   
    {                                                        
        enum class u0_user_presence_t : int32_t              
        {                                                    
            not_present = 0x0,                                 // WDK 10
            present =     0x1,                                 // WDK 10
            unknown =     0xff,                                // WDK 10
        };                                                   
                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                   
        _m00 int32_t                           user_presence;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UserPresence
                                                             
        SDK_NONVOL_PROPERTIES( "_POWER_USER_PRESENCE.$", 0x4, true, 0x2362922643c27410 );              
        SDK_FIXED_SIZE( user_presence_t, 0x4 );              
    };                                                       
};
#include "magic/user_presence_t.end.hpp"
SDK_VERIFY( struct power::user_presence_t, 0x4 );
