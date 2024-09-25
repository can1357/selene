#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_capability_superspeed_usb_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_capability_superspeed_usb_descriptor_t
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint8_t  b_length;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t  b_descriptor_type;                      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t  b_dev_capability_type;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bDevCapabilityType
        _m03 uint8_t  bm_attributes;                          //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bmAttributes
        _m04 uint16_t w_speeds_supported;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wSpeedsSupported
        _m05 uint8_t  b_functionality_support;                //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bFunctionalitySupport
        _m06 uint8_t  b_u1_dev_exit_lat;                      //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .bU1DevExitLat
        _m07 uint16_t w_u2_dev_exit_lat;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wU2DevExitLat
                                                            
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR.$", 0xa, true, 0x739b04f3fb0d7bda );                        
        SDK_FIXED_SIZE( usb_device_capability_superspeed_usb_descriptor_t, 0xa );                        
    };                                                      
};
#include "magic/usb_device_capability_superspeed_usb_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_device_capability_superspeed_usb_descriptor_t, 0xa );
