#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_interface_power_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_INTERFACE_POWER_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_interface_power_descriptor_t   
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint8_t  b_length;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t  b_descriptor_type;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t  bm_capabilities_flags;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bmCapabilitiesFlags
        _m03 uint8_t  b_bus_power_saving_d1;    //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bBusPowerSavingD1
        _m04 uint8_t  b_self_power_saving_d1;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bSelfPowerSavingD1
        _m05 uint8_t  b_bus_power_saving_d2;    //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bBusPowerSavingD2
        _m06 uint8_t  b_self_power_saving_d2;   //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bSelfPowerSavingD2
        _m07 uint8_t  b_bus_power_saving_d3;    //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .bBusPowerSavingD3
        _m08 uint8_t  b_self_power_saving_d3;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bSelfPowerSavingD3
        _m09 uint16_t transition_time_from_d1;  //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .TransitionTimeFromD1
        _m10 uint16_t transition_time_from_d2;  //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .TransitionTimeFromD2
        _m11 uint16_t transition_time_from_d3;  //{ +0x000d    +0x000d    +0x000d    +0x000d    } | .TransitionTimeFromD3
                                              
        SDK_MAGIC_PROPERTIES( "_USB_INTERFACE_POWER_DESCRIPTOR.$", 0xf, true, 0x370536c7d7e6f3b5 );                        
        SDK_FIXED_SIZE( usb_interface_power_descriptor_t, 0xf );                        
    };                                        
};
#include "magic/usb_interface_power_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_interface_power_descriptor_t, 0xf );
