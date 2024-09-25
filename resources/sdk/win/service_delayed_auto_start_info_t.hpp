#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_delayed_auto_start_info_t.start.hpp"
namespace win
{
    // [struct _SERVICE_DELAYED_AUTO_START_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_delayed_auto_start_info_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 int32_t f_delayed_autostart;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fDelayedAutostart
                                            
        SDK_MAGIC_PROPERTIES( "_SERVICE_DELAYED_AUTO_START_INFO.$", 0x4, true, 0xdd72ffddc8c980cd );                    
        SDK_FIXED_SIZE( service_delayed_auto_start_info_t, 0x4 );                    
    };                                      
};
#include "magic/service_delayed_auto_start_info_t.end.hpp"
SDK_VERIFY( struct win::service_delayed_auto_start_info_t, 0x4 );
