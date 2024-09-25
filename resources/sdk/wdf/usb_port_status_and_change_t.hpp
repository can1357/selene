#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_port_change_t.hpp"
#include "usb_port_status_t.hpp"

#include "magic/usb_port_status_and_change_t.start.hpp"
namespace wdf
{
    // [union _USB_PORT_STATUS_AND_CHANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_port_status_and_change_t                
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 uint32_t                     as_ulong32;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong32
        _m01 union wdf::usb_port_status_t port_status;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PortStatus
        _m02 union wdf::usb_port_change_t port_change;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .PortChange
                                                      
        SDK_MAGIC_PROPERTIES( "_USB_PORT_STATUS_AND_CHANGE.$", 0x4, true, 0x738f41b330e3bf64 );            
        SDK_FIXED_SIZE( usb_port_status_and_change_t, 0x4 );            
    };                                                
};
#include "magic/usb_port_status_and_change_t.end.hpp"
SDK_VERIFY( union wdf::usb_port_status_and_change_t, 0x4 );
