#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_30_port_status_t.start.hpp"
namespace wdf
{
    // [union _USB_30_PORT_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_30_port_status_t                
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint16_t as_ushort16;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort16
        _m01 uint1_t  current_connect_status;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CurrentConnectStatus
        _m02 uint1_t  port_enabled_disabled;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PortEnabledDisabled
        _m03 uint1_t  over_current;             //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .OverCurrent
        _m04 uint1_t  reset;                    //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Reset
        _m05 uint4_t  port_link_state;          //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PortLinkState
        _m06 uint1_t  port_power;               //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .PortPower
        _m07 uint3_t  negotiated_device_speed;  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .NegotiatedDeviceSpeed
                                              
        SDK_MAGIC_PROPERTIES( "_USB_30_PORT_STATUS.$", 0x2, true, 0x559f37d455b13a9a );                        
        SDK_FIXED_SIZE( usb_30_port_status_t, 0x2 );                        
    };                                        
};
#include "magic/usb_30_port_status_t.end.hpp"
SDK_VERIFY( union wdf::usb_30_port_status_t, 0x2 );
