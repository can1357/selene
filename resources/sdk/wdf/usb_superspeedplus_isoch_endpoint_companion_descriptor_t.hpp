#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_superspeedplus_isoch_endpoint_companion_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_superspeedplus_isoch_endpoint_companion_descriptor_t
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint8_t  b_length;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t  b_descriptor_type;                             //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint16_t w_reserved;                                    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wReserved
        _m03 uint32_t dw_bytes_per_interval;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwBytesPerInterval
                                                                   
        SDK_MAGIC_PROPERTIES( "_USB_SUPERSPEEDPLUS_ISOCH_ENDPOINT_COMPANION_DESCRIPTOR.$", 0x8, true, 0x3b9dd1ffe77fe930 );                      
        SDK_FIXED_SIZE( usb_superspeedplus_isoch_endpoint_companion_descriptor_t, 0x8 );                      
    };                                                             
};
#include "magic/usb_superspeedplus_isoch_endpoint_companion_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_superspeedplus_isoch_endpoint_companion_descriptor_t, 0x8 );
