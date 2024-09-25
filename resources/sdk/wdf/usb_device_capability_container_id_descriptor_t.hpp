#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_capability_container_id_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_capability_container_id_descriptor_t 
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                 
        _m00 uint8_t                 b_length;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                 b_descriptor_type;      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t                 b_dev_capability_type;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bDevCapabilityType
        _m03 uint8_t                 b_reserved;             //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bReserved
        _m04 sdk::array<uint8_t, 16> container_id;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ContainerID
                                                           
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR.$", 0x14, true, 0xb58d474b0a4feff1 );                      
        SDK_FIXED_SIZE( usb_device_capability_container_id_descriptor_t, 0x14 );                      
    };                                                     
};
#include "magic/usb_device_capability_container_id_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_device_capability_container_id_descriptor_t, 0x14 );
