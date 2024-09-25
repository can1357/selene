#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_high_speed_maxpacket_t.start.hpp"
namespace wdf
{
    // [union _USB_HIGH_SPEED_MAXPACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_high_speed_maxpacket_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2   
        //               
        _m00 uint16_t us;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .us
                                    
        SDK_MAGIC_PROPERTIES( "_USB_HIGH_SPEED_MAXPACKET.$", 0x2, true, 0x669477463662c8b2 );   
        SDK_FIXED_SIZE( usb_high_speed_maxpacket_t, 0x2 );   
    };                              
};
#include "magic/usb_high_speed_maxpacket_t.end.hpp"
SDK_VERIFY( union wdf::usb_high_speed_maxpacket_t, 0x2 );
