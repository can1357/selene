#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_capability_pd_consumer_port_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_capability_pd_consumer_port_descriptor_t      
    {                                                               
        union u0_bm_capabilities_t                                  
        {                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                      
            _m04 uint16_t as_ushort;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort
            _m05 uint1_t  battery_charging;                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .BatteryCharging
            _m06 uint1_t  usb_power_delivery;                         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .USBPowerDelivery
            _m07 uint1_t  usb_type_c_current;                         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .USBTypeCCurrent
                                                                    
            SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.bmCapabilities.$", 0x2, true, 0x200022496d7ef947 );                                          
            SDK_FIXED_SIZE( u0_bm_capabilities_t, 0x2 );                                          
        };                                                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                          
        _m00 uint8_t                         b_length;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                         b_descriptor_type;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t                         b_dev_capability_type;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bDevCapabilityType
        _m03 uint8_t                         b_reserved;              //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bReserved
        _m08 u0_bm_capabilities_t            bm_capabilities;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bmCapabilities
        _m09 uint16_t                        w_min_voltage;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .wMinVoltage
        _m10 uint16_t                        w_max_voltage;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wMaxVoltage
        _m11 uint16_t                        w_reserved;              //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .wReserved
        _m12 uint32_t                        dw_max_operating_power;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwMaxOperatingPower
        _m13 uint32_t                        dw_max_peak_power;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwMaxPeakPower
        _m14 uint32_t                        dw_max_peak_power_time;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwMaxPeakPowerTime
                                                                    
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.$", 0x18, true, 0x6f0ef5f8fa4f46b8 );                       
        SDK_FIXED_SIZE( usb_device_capability_pd_consumer_port_descriptor_t, 0x18 );                       
    };                                                              
};
#include "magic/usb_device_capability_pd_consumer_port_descriptor_t.end.hpp"
SDK_VERIFY( union wdf::usb_device_capability_pd_consumer_port_descriptor_t::u0_bm_capabilities_t, 0x2 );
SDK_VERIFY( struct wdf::usb_device_capability_pd_consumer_port_descriptor_t, 0x18 );
