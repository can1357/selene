#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_bus_information_level_0_t.start.hpp"
namespace wdf
{
    // [struct _USB_BUS_INFORMATION_LEVEL_0]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_bus_information_level_0_t 
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t total_bandwidth;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalBandwidth
        _m01 uint32_t consumed_bandwidth;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ConsumedBandwidth
                                         
        SDK_MAGIC_PROPERTIES( "_USB_BUS_INFORMATION_LEVEL_0.$", 0x8, true, 0x44feb49358084c19 );                   
        SDK_FIXED_SIZE( usb_bus_information_level_0_t, 0x8 );                   
    };                                   
};
#include "magic/usb_bus_information_level_0_t.end.hpp"
SDK_VERIFY( struct wdf::usb_bus_information_level_0_t, 0x8 );
