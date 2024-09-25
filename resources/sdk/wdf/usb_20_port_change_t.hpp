#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_20_port_change_t.start.hpp"
namespace wdf
{
    // [union _USB_20_PORT_CHANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_20_port_change_t                      
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint16_t as_ushort16;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort16
        _m01 uint1_t  connect_status_change;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ConnectStatusChange
        _m02 uint1_t  port_enable_disable_change;     //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PortEnableDisableChange
        _m03 uint1_t  suspend_change;                 //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .SuspendChange
        _m04 uint1_t  over_current_indicator_change;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .OverCurrentIndicatorChange
        _m05 uint1_t  reset_change;                   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ResetChange
                                                    
        SDK_MAGIC_PROPERTIES( "_USB_20_PORT_CHANGE.$", 0x2, true, 0x9e7499cefb79bd4b );                              
        SDK_FIXED_SIZE( usb_20_port_change_t, 0x2 );                              
    };                                              
};
#include "magic/usb_20_port_change_t.end.hpp"
SDK_VERIFY( union wdf::usb_20_port_change_t, 0x2 );
