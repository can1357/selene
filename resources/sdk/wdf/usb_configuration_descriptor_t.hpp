#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_configuration_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_CONFIGURATION_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_configuration_descriptor_t   
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint8_t  b_length;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t  b_descriptor_type;      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint16_t w_total_length;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wTotalLength
        _m03 uint8_t  b_num_interfaces;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bNumInterfaces
        _m04 uint8_t  b_configuration_value;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bConfigurationValue
        _m05 uint8_t  i_configuration;        //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .iConfiguration
        _m06 uint8_t  bm_attributes;          //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .bmAttributes
        _m07 uint8_t  max_power;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxPower
                                            
        SDK_MAGIC_PROPERTIES( "_USB_CONFIGURATION_DESCRIPTOR.$", 0x9, true, 0x350384b96a9990d3 );                      
        SDK_FIXED_SIZE( usb_configuration_descriptor_t, 0x9 );                      
    };                                      
};
#include "magic/usb_configuration_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_configuration_descriptor_t, 0x9 );
