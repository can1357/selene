#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_endpoint_status_t.start.hpp"
namespace wdf
{
    // [union _USB_ENDPOINT_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_endpoint_status_t   
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint16_t as_ushort16;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort16
        _m01 uint1_t  halt;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Halt
                                  
        SDK_MAGIC_PROPERTIES( "_USB_ENDPOINT_STATUS.$", 0x2, true, 0x72a1c66cc4f2e3d9 );            
        SDK_FIXED_SIZE( usb_endpoint_status_t, 0x2 );            
    };                            
};
#include "magic/usb_endpoint_status_t.end.hpp"
SDK_VERIFY( union wdf::usb_endpoint_status_t, 0x2 );
