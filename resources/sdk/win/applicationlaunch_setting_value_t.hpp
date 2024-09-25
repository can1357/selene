#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/applicationlaunch_setting_value_t.start.hpp"
namespace win
{
    // [struct _APPLICATIONLAUNCH_SETTING_VALUE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct applicationlaunch_setting_value_t
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 int64_t  activation_time;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ActivationTime
        _m01 uint32_t flags;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint32_t button_instance_id;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ButtonInstanceID
                                            
        SDK_NONVOL_PROPERTIES( "_APPLICATIONLAUNCH_SETTING_VALUE.$", 0x10, true, 0x9506b74d8c53061d );                   
        SDK_FIXED_SIZE( applicationlaunch_setting_value_t, 0x10 );                   
    };                                      
};
#include "magic/applicationlaunch_setting_value_t.end.hpp"
SDK_VERIFY( struct win::applicationlaunch_setting_value_t, 0x10 );
