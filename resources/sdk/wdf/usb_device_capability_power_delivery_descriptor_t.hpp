#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_capability_power_delivery_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_capability_power_delivery_descriptor_t        
    {                                                               
        union u0_bm_attributes_t                                    
        {                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                      
            _m04 uint32_t as_ulong;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong
            _m05 uint1_t  battery_charging;                           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .BatteryCharging
            _m06 uint1_t  usb_power_delivery;                         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .USBPowerDelivery
            _m07 uint1_t  provider;                                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Provider
            _m08 uint1_t  consumer;                                   //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Consumer
            _m09 uint1_t  charging_policy;                            //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ChargingPolicy
            _m10 uint1_t  type_c_current;                             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .TypeCCurrent
            _m11 uint1_t  ac_supply;                                  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ACSupply
            _m12 uint1_t  battery;                                    //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .Battery
            _m13 uint1_t  other;                                      //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Other
            _m14 uint3_t  num_batteries;                              //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .NumBatteries
            _m15 uint1_t  uses_vbus;                                  //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .UsesVbus
                                                                    
            SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.$", 0x4, true, 0xcaa305d9e0b65c16 );                                          
            SDK_FIXED_SIZE( u0_bm_attributes_t, 0x4 );                                          
        };                                                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                          
        _m00 uint8_t                         b_length;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                         b_descriptor_type;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t                         b_dev_capability_type;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bDevCapabilityType
        _m03 uint8_t                         b_reserved;              //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bReserved
        _m16 u0_bm_attributes_t              bm_attributes;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bmAttributes
        _m17 uint16_t                        bm_provider_ports;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bmProviderPorts
        _m18 uint16_t                        bm_consumer_ports;       //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .bmConsumerPorts
        _m19 uint16_t                        bcd_bc_version;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .bcdBCVersion
        _m20 uint16_t                        bcd_pd_version;          //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .bcdPDVersion
        _m21 uint16_t                        bcd_usb_type_c_version;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bcdUSBTypeCVersion
                                                                    
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.$", 0x12, true, 0xec71204fe89dff37 );                       
        SDK_FIXED_SIZE( usb_device_capability_power_delivery_descriptor_t, 0x12 );                       
    };                                                              
};
#include "magic/usb_device_capability_power_delivery_descriptor_t.end.hpp"
SDK_VERIFY( union wdf::usb_device_capability_power_delivery_descriptor_t::u0_bm_attributes_t, 0x4 );
SDK_VERIFY( struct wdf::usb_device_capability_power_delivery_descriptor_t, 0x12 );
