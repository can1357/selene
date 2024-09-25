#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/stor_power_setting_notification_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_POWER_SETTING_NOTIFICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_power_setting_notification_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                  
        _m00 uint32_t           guids_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GuidsCount
        _m01 struct nt::guid_t* guid;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Guid
        _m02 void**             handle;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Handle
                                            
        SDK_MAGIC_PROPERTIES( "_STOR_POWER_SETTING_NOTIFICATION.$", 0x18, true, 0xc75917cd25ccd4c1 );            
        SDK_FIXED_SIZE( stor_power_setting_notification_t, 0x18 );            
    };                                      
};
#include "magic/stor_power_setting_notification_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_power_setting_notification_t, 0x18 );
