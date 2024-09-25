#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_capability_billboard_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_capability_billboard_descriptor_t                                          
    {                                                                                            
        union u0_vconn_power_t                                                                   
        {                                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                       
            //                                                                                   
            _m06 uint16_t as_ushort;                                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort
            _m07 uint3_t  v_conn_power_needed_for_full_functionality;                              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VConnPowerNeededForFullFunctionality
            _m08 uint1_t  no_vconn_power_required;                                                 //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .NoVconnPowerRequired
                                                                                                 
            SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.VconnPower.$", 0x2, true, 0x8624b35b8f3aaf02 );                                                                       
            SDK_FIXED_SIZE( u0_vconn_power_t, 0x2 );                                                                       
        };                                                                                       
                                                                                                 
        struct u4_alternate_mode_t                                                               
        {                                                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                     
            //                                                                                   
            _m12 uint16_t w_svid;                                                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wSVID
            _m13 uint8_t  b_alternate_mode;                                                        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bAlternateMode
            _m14 uint8_t  i_alternate_mode_setting;                                                //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .iAlternateModeSetting
                                                                                                 
            SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.AlternateMode.$", 0x4, true, 0x8bec79132b140008 );                                                     
            SDK_FIXED_SIZE( u4_alternate_mode_t, 0x4 );                                                     
        };                                                                                       
                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                                       
        _m00 uint8_t                                                 b_length;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                                                 b_descriptor_type;            //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t                                                 b_dev_capability_type;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bDevCapabilityType
        _m03 uint8_t                                                 i_addtional_info_url;         //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .iAddtionalInfoURL
        _m04 uint8_t                                                 b_number_of_alternate_modes;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bNumberOfAlternateModes
        _m05 uint8_t                                                 b_preferred_alternate_mode;   //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bPreferredAlternateMode
        _m09 u0_vconn_power_t                                        vconn_power;                  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .VconnPower
        _m10 sdk::array<uint8_t, 32>                                 bm_configured;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bmConfigured
        _m11 uint32_t                                                b_reserved;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .bReserved
        _m15 sdk::array<u4_alternate_mode_t, 1>                      alternate_mode;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .AlternateMode
                                                                                                 
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.$", 0x30, true, 0x9313989e1a4eb7b0 );                            
        SDK_FIXED_SIZE( usb_device_capability_billboard_descriptor_t, 0x30 );                            
    };                                                                                           
};
#include "magic/usb_device_capability_billboard_descriptor_t.end.hpp"
SDK_VERIFY( union wdf::usb_device_capability_billboard_descriptor_t::u0_vconn_power_t, 0x2 );
SDK_VERIFY( struct wdf::usb_device_capability_billboard_descriptor_t::u4_alternate_mode_t, 0x4 );
SDK_VERIFY( struct wdf::usb_device_capability_billboard_descriptor_t, 0x30 );
