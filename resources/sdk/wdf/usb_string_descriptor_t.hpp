#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_string_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_STRING_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_string_descriptor_t                    
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                b_length;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                b_descriptor_type;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 sdk::array<wchar_t, 1> b_string;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bString
                                                      
        SDK_MAGIC_PROPERTIES( "_USB_STRING_DESCRIPTOR.$", 0x4, true, 0x5be85e95d8f09279 );                  
        SDK_FIXED_SIZE( usb_string_descriptor_t, 0x4 );                  
    };                                                
};
#include "magic/usb_string_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_string_descriptor_t, 0x4 );
