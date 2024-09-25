#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_configuration_power_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_CONFIGURATION_POWER_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_configuration_power_descriptor_t             
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                  
        _m00 uint8_t                b_length;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                b_descriptor_type;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 sdk::array<uint8_t, 3> self_power_consumed_d0;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SelfPowerConsumedD0
        _m03 uint8_t                b_power_summary_id;       //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bPowerSummaryId
        _m04 uint8_t                b_bus_power_saving_d1;    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bBusPowerSavingD1
        _m05 uint8_t                b_self_power_saving_d1;   //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .bSelfPowerSavingD1
        _m06 uint8_t                b_bus_power_saving_d2;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bBusPowerSavingD2
        _m07 uint8_t                b_self_power_saving_d2;   //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .bSelfPowerSavingD2
        _m08 uint8_t                b_bus_power_saving_d3;    //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .bBusPowerSavingD3
        _m09 uint8_t                b_self_power_saving_d3;   //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .bSelfPowerSavingD3
        _m10 uint16_t               transition_time_from_d1;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TransitionTimeFromD1
        _m11 uint16_t               transition_time_from_d2;  //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .TransitionTimeFromD2
        _m12 uint16_t               transition_time_from_d3;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TransitionTimeFromD3
                                                            
        SDK_MAGIC_PROPERTIES( "_USB_CONFIGURATION_POWER_DESCRIPTOR.$", 0x12, true, 0x3b2250bd925a2522 );                        
        SDK_FIXED_SIZE( usb_configuration_power_descriptor_t, 0x12 );                        
    };                                                      
};
#include "magic/usb_configuration_power_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::usb_configuration_power_descriptor_t, 0x12 );
