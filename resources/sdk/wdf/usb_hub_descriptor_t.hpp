#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_hub_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_HUB_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_hub_descriptor_t                               
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint8_t                 b_descriptor_length;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bDescriptorLength
        _m01 uint8_t                 b_descriptor_type;         //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t                 b_number_of_ports;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bNumberOfPorts
        _m03 uint16_t                w_hub_characteristics;     //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .wHubCharacteristics
        _m04 uint8_t                 b_power_on_to_power_good;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bPowerOnToPowerGood
        _m05 uint8_t                 b_hub_control_current;     //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bHubControlCurrent
        _m06 sdk::array<uint8_t, 64> b_remove_and_power_mask;   //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .bRemoveAndPowerMask
                                                              
        SDK_MAGIC_PROPERTIES( "_USB_HUB_DESCRIPTOR.$", 0x47, true, 0x10ff77d38f9f2ebd );                         
        SDK_FIXED_SIZE( usb_hub_descriptor_t, 0x47 );                         
    };                                                        
};
#include "magic/usb_hub_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_hub_descriptor_t, 0x47 );
