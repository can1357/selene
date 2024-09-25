#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_common_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_COMMON_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_common_descriptor_t     
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 uint8_t b_length;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t b_descriptor_type;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
                                       
        SDK_MAGIC_PROPERTIES( "_USB_COMMON_DESCRIPTOR.$", 0x2, true, 0x388181a88f8b8190 );                  
        SDK_FIXED_SIZE( usb_common_descriptor_t, 0x2 );                  
    };                                 
};
#include "magic/usb_common_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_common_descriptor_t, 0x2 );
