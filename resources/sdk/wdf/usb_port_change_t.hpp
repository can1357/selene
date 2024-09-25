#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_20_port_change_t.hpp"
#include "usb_30_port_change_t.hpp"

#include "magic/usb_port_change_t.start.hpp"
namespace wdf
{
    // [union _USB_PORT_CHANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_port_change_t                                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m00 uint16_t                        as_ushort16;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort16
        _m01 union wdf::usb_20_port_change_t usb20_port_change;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Usb20PortChange
        _m02 union wdf::usb_30_port_change_t usb30_port_change;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Usb30PortChange
                                                               
        SDK_MAGIC_PROPERTIES( "_USB_PORT_CHANGE.$", 0x2, true, 0x66dd1278f5cfd0a7 );                  
        SDK_FIXED_SIZE( usb_port_change_t, 0x2 );                  
    };                                                         
};
#include "magic/usb_port_change_t.end.hpp"
SDK_VERIFY( union wdf::usb_port_change_t, 0x2 );
