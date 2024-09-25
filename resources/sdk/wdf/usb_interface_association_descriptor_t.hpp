#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_interface_association_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_INTERFACE_ASSOCIATION_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_interface_association_descriptor_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint8_t b_length;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t b_descriptor_type;            //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t b_first_interface;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bFirstInterface
        _m03 uint8_t b_interface_count;            //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bInterfaceCount
        _m04 uint8_t b_function_class;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bFunctionClass
        _m05 uint8_t b_function_sub_class;         //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bFunctionSubClass
        _m06 uint8_t b_function_protocol;          //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bFunctionProtocol
        _m07 uint8_t i_function;                   //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .iFunction
                                                 
        SDK_MAGIC_PROPERTIES( "_USB_INTERFACE_ASSOCIATION_DESCRIPTOR.$", 0x8, true, 0x63cbbc724d76a472 );                     
        SDK_FIXED_SIZE( usb_interface_association_descriptor_t, 0x8 );                     
    };                                           
};
#include "magic/usb_interface_association_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_interface_association_descriptor_t, 0x8 );
