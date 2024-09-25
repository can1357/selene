#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_30_hub_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_30_HUB_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_30_hub_descriptor_t             
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint8_t  b_length;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t  b_descriptor_type;         //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t  b_number_of_ports;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bNumberOfPorts
        _m03 uint16_t w_hub_characteristics;     //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .wHubCharacteristics
        _m04 uint8_t  b_power_on_to_power_good;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bPowerOnToPowerGood
        _m05 uint8_t  b_hub_control_current;     //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bHubControlCurrent
        _m06 uint8_t  b_hub_hdr_dec_lat;         //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .bHubHdrDecLat
        _m07 uint16_t w_hub_delay;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wHubDelay
        _m08 uint16_t device_removable;          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .DeviceRemovable
                                               
        SDK_MAGIC_PROPERTIES( "_USB_30_HUB_DESCRIPTOR.$", 0xc, true, 0xadec1dd5fe063329 );                         
        SDK_FIXED_SIZE( usb_30_hub_descriptor_t, 0xc );                         
    };                                         
};
#include "magic/usb_30_hub_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_30_hub_descriptor_t, 0xc );
