#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_interface_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_INTERFACE_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_interface_descriptor_t      
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 uint8_t b_length;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t b_descriptor_type;      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t b_interface_number;     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bInterfaceNumber
        _m03 uint8_t b_alternate_setting;    //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bAlternateSetting
        _m04 uint8_t b_num_endpoints;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bNumEndpoints
        _m05 uint8_t b_interface_class;      //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bInterfaceClass
        _m06 uint8_t b_interface_sub_class;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bInterfaceSubClass
        _m07 uint8_t b_interface_protocol;   //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .bInterfaceProtocol
        _m08 uint8_t i_interface;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iInterface
                                           
        SDK_MAGIC_PROPERTIES( "_USB_INTERFACE_DESCRIPTOR.$", 0x9, true, 0x81457244edfb9a7d );                      
        SDK_FIXED_SIZE( usb_interface_descriptor_t, 0x9 );                      
    };                                     
};
#include "magic/usb_interface_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_interface_descriptor_t, 0x9 );
