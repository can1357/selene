#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_30_port_change_t.start.hpp"
namespace wdf
{
    // [union _USB_30_PORT_CHANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_30_port_change_t                      
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint16_t as_ushort16;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort16
        _m01 uint1_t  connect_status_change;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ConnectStatusChange
        _m02 uint1_t  over_current_indicator_change;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .OverCurrentIndicatorChange
        _m03 uint1_t  reset_change;                   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ResetChange
        _m04 uint1_t  bh_reset_change;                //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .BHResetChange
        _m05 uint1_t  port_link_state_change;         //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PortLinkStateChange
        _m06 uint1_t  port_config_error_change;       //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .PortConfigErrorChange
                                                    
        SDK_MAGIC_PROPERTIES( "_USB_30_PORT_CHANGE.$", 0x2, true, 0x608e1907fcc82e5d );                              
        SDK_FIXED_SIZE( usb_30_port_change_t, 0x2 );                              
    };                                              
};
#include "magic/usb_30_port_change_t.end.hpp"
SDK_VERIFY( union wdf::usb_30_port_change_t, 0x2 );
