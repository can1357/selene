#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_endpoint_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_ENDPOINT_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_endpoint_descriptor_t     
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint8_t  b_length;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t  b_descriptor_type;   //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t  b_endpoint_address;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bEndpointAddress
        _m03 uint8_t  bm_attributes;       //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bmAttributes
        _m04 uint16_t w_max_packet_size;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wMaxPacketSize
        _m05 uint8_t  b_interval;          //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bInterval
                                         
        SDK_MAGIC_PROPERTIES( "_USB_ENDPOINT_DESCRIPTOR.$", 0x7, true, 0x46055073bfa6bab1 );                   
        SDK_FIXED_SIZE( usb_endpoint_descriptor_t, 0x7 );                   
    };                                   
};
#include "magic/usb_endpoint_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_endpoint_descriptor_t, 0x7 );
