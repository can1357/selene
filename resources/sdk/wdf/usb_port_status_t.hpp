#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_20_port_status_t.hpp"
#include "usb_30_port_status_t.hpp"

#include "magic/usb_port_status_t.start.hpp"
namespace wdf
{
    // [union _USB_PORT_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_port_status_t                                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m00 uint16_t                        as_ushort16;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort16
        _m01 union wdf::usb_20_port_status_t usb20_port_status;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Usb20PortStatus
        _m02 union wdf::usb_30_port_status_t usb30_port_status;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Usb30PortStatus
                                                               
        SDK_MAGIC_PROPERTIES( "_USB_PORT_STATUS.$", 0x2, true, 0xda0f4a7b626f3fb2 );                  
        SDK_FIXED_SIZE( usb_port_status_t, 0x2 );                  
    };                                                         
};
#include "magic/usb_port_status_t.end.hpp"
SDK_VERIFY( union wdf::usb_port_status_t, 0x2 );
