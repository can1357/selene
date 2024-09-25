#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_bus_information_level_1_t.start.hpp"
namespace wdf
{
    // [struct _USB_BUS_INFORMATION_LEVEL_1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_bus_information_level_1_t                           
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                         
        _m00 uint32_t               total_bandwidth;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalBandwidth
        _m01 uint32_t               consumed_bandwidth;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ConsumedBandwidth
        _m02 uint32_t               controller_name_length;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ControllerNameLength
        _m03 sdk::array<wchar_t, 1> controller_name_unicode_string;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ControllerNameUnicodeString
                                                                   
        SDK_MAGIC_PROPERTIES( "_USB_BUS_INFORMATION_LEVEL_1.$", 0x10, true, 0x5214e60d560e0832 );                               
        SDK_FIXED_SIZE( usb_bus_information_level_1_t, 0x10 );                               
    };                                                             
};
#include "magic/usb_bus_information_level_1_t.end.hpp"
SDK_VERIFY( struct wdf::usb_bus_information_level_1_t, 0x10 );
