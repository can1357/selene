#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_port_ext_status_t.hpp"
#include "usb_port_status_and_change_t.hpp"

#include "magic/usb_port_ext_status_and_change_t.start.hpp"
namespace wdf
{
    // [union _USB_PORT_EXT_STATUS_AND_CHANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_port_ext_status_and_change_t                              
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                              
        _m00 uint64_t                                as_ulong64;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong64
        _m01 union wdf::usb_port_status_and_change_t port_status_change;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PortStatusChange
        _m02 union wdf::usb_port_ext_status_t        port_ext_status;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PortExtStatus
                                                                        
        SDK_MAGIC_PROPERTIES( "_USB_PORT_EXT_STATUS_AND_CHANGE.$", 0x8, true, 0xd1d3c2e027533fa4 );                   
        SDK_FIXED_SIZE( usb_port_ext_status_and_change_t, 0x8 );                   
    };                                                                  
};
#include "magic/usb_port_ext_status_and_change_t.end.hpp"
SDK_VERIFY( union wdf::usb_port_ext_status_and_change_t, 0x8 );
