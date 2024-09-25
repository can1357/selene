#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_qualifier_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_QUALIFIER_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_qualifier_descriptor_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint8_t  b_length;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t  b_descriptor_type;      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint16_t bcd_usb;                //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bcdUSB
        _m03 uint8_t  b_device_class;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bDeviceClass
        _m04 uint8_t  b_device_sub_class;     //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bDeviceSubClass
        _m05 uint8_t  b_device_protocol;      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bDeviceProtocol
        _m06 uint8_t  b_max_packet_size0;     //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .bMaxPacketSize0
        _m07 uint8_t  b_num_configurations;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bNumConfigurations
        _m08 uint8_t  b_reserved;             //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .bReserved
                                            
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_QUALIFIER_DESCRIPTOR.$", 0xa, true, 0x2f643dc9e0ddacba );                     
        SDK_FIXED_SIZE( usb_device_qualifier_descriptor_t, 0xa );                     
    };                                      
};
#include "magic/usb_device_qualifier_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_device_qualifier_descriptor_t, 0xa );
