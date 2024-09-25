#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_bos_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_BOS_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_bos_descriptor_t         
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint8_t  b_length;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t  b_descriptor_type;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint16_t w_total_length;     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wTotalLength
        _m03 uint8_t  b_num_device_caps;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bNumDeviceCaps
                                        
        SDK_MAGIC_PROPERTIES( "_USB_BOS_DESCRIPTOR.$", 0x5, true, 0x9bd07462fb95043a );                  
        SDK_FIXED_SIZE( usb_bos_descriptor_t, 0x5 );                  
    };                                  
};
#include "magic/usb_bos_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_bos_descriptor_t, 0x5 );
