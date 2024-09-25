#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_interface_status_t.start.hpp"
namespace wdf
{
    // [union _USB_INTERFACE_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_interface_status_t            
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint16_t as_ushort16;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort16
        _m01 uint1_t  remote_wakeup_capable;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RemoteWakeupCapable
        _m02 uint1_t  remote_wakeup_enabled;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .RemoteWakeupEnabled
                                            
        SDK_MAGIC_PROPERTIES( "_USB_INTERFACE_STATUS.$", 0x2, true, 0xcf59497051fbb971 );                      
        SDK_FIXED_SIZE( usb_interface_status_t, 0x2 );                      
    };                                      
};
#include "magic/usb_interface_status_t.end.hpp"
SDK_VERIFY( union wdf::usb_interface_status_t, 0x2 );
