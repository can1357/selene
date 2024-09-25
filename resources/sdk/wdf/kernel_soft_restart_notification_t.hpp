#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/kernel_soft_restart_notification_t.start.hpp"
namespace wdf
{
    // [struct _KERNEL_SOFT_RESTART_NOTIFICATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kernel_soft_restart_notification_t
    {                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                             
        _m00 uint16_t          version;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t          size;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::guid_t event;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Event
                                             
        SDK_NONVOL_PROPERTIES( "_KERNEL_SOFT_RESTART_NOTIFICATION.$", 0x14, true, 0x8fcf16e22bef42bb );        
        SDK_FIXED_SIZE( kernel_soft_restart_notification_t, 0x14 );        
    };                                       
};
#include "magic/kernel_soft_restart_notification_t.end.hpp"
SDK_VERIFY( struct wdf::kernel_soft_restart_notification_t, 0x14 );
