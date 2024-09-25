#pragma once
#include <sdkgen/support_library.hpp>
#include "usb_device_capability_superspeedplus_speed_t.hpp"

#include "magic/usb_device_capability_superspeedplus_usb_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_capability_superspeedplus_usb_descriptor_t           
    {                                                                      
        union u0_bm_attributes_t                                           
        {                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
            //                                                             
            _m04 uint32_t as_ulong;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong
            _m05 uint5_t  sublink_speed_attr_count;                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SublinkSpeedAttrCount
            _m06 uint4_t  sublink_speed_id_count;                            //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .SublinkSpeedIDCount
                                                                           
            SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.bmAttributes.$", 0x4, true, 0x8cc5339538262118 );                                                 
            SDK_FIXED_SIZE( u0_bm_attributes_t, 0x4 );                                                 
        };                                                                 
                                                                           
        union u4_w_functionality_support_t                                 
        {                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
            //                                                             
            _m08 uint16_t as_ushort;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort
            _m09 uint4_t  sublink_speed_attr_id;                             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SublinkSpeedAttrID
            _m10 uint4_t  min_rx_lane_count;                                 //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .MinRxLaneCount
            _m11 uint4_t  min_tx_lane_count;                                 //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .MinTxLaneCount
                                                                           
            SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.wFunctionalitySupport.$", 0x2, true, 0xd2fc5d2bd7366b3b );                                              
            SDK_FIXED_SIZE( u4_w_functionality_support_t, 0x2 );                                              
        };                                                                 
                                                                           
        using bm_sublink_speed_attr_t = sdk::array<union wdf::usb_device_capability_superspeedplus_speed_t, 1>;                        
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                 
        _m00 uint8_t                               b_length;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                               b_descriptor_type;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t                               b_dev_capability_type;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bDevCapabilityType
        _m03 uint8_t                               b_reserved;               //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bReserved
        _m07 u0_bm_attributes_t                    bm_attributes;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bmAttributes
        _m12 u4_w_functionality_support_t          w_functionality_support;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wFunctionalitySupport
        _m13 uint16_t                              w_reserved;               //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .wReserved
        _m14 bm_sublink_speed_attr_t               bm_sublink_speed_attr;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .bmSublinkSpeedAttr
                                                                           
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR.$", 0x10, true, 0xe9d0f8d94c869a3 );                        
        SDK_FIXED_SIZE( usb_device_capability_superspeedplus_usb_descriptor_t, 0x10 );                        
    };                                                                     
};
#include "magic/usb_device_capability_superspeedplus_usb_descriptor_t.end.hpp"
SDK_VERIFY( union wdf::usb_device_capability_superspeedplus_usb_descriptor_t::u0_bm_attributes_t, 0x4 );
SDK_VERIFY( union wdf::usb_device_capability_superspeedplus_usb_descriptor_t::u4_w_functionality_support_t, 0x2 );
SDK_VERIFY( struct wdf::usb_device_capability_superspeedplus_usb_descriptor_t, 0x10 );
