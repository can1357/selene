#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_capability_usb20_extension_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_capability_usb20_extension_descriptor_t                     
    {                                                                             
        union u0_bm_attributes_t                                                  
        {                                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
            //                                                                    
            _m03 uint32_t as_ulong;                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong
            _m04 uint1_t  lpm_capable;                                              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .LPMCapable
            _m05 uint1_t  besl_and_alternate_hird_supported;                        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .BESLAndAlternateHIRDSupported
            _m06 uint1_t  baseline_besl_valid;                                      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .BaselineBESLValid
            _m07 uint1_t  deep_besl_valid;                                          //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .DeepBESLValid
            _m08 uint4_t  baseline_besl;                                            //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .BaselineBESL
            _m09 uint4_t  deep_besl;                                                //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .DeepBESL
                                                                                  
            SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bmAttributes.$", 0x4, true, 0xc8c74d2013722b09 );                                                        
            SDK_FIXED_SIZE( u0_bm_attributes_t, 0x4 );                                                        
        };                                                                        
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                        
        _m00 uint8_t                                        b_length;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                                        b_descriptor_type;      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t                                        b_dev_capability_type;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bDevCapabilityType
        _m10 u0_bm_attributes_t                             bm_attributes;          //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .bmAttributes
                                                                                  
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.$", 0x7, true, 0x639d74f8d6d04e17 );                      
        SDK_FIXED_SIZE( usb_device_capability_usb20_extension_descriptor_t, 0x7 );                      
    };                                                                            
};
#include "magic/usb_device_capability_usb20_extension_descriptor_t.end.hpp"
SDK_VERIFY( union wdf::usb_device_capability_usb20_extension_descriptor_t::u0_bm_attributes_t, 0x4 );
SDK_VERIFY( struct wdf::usb_device_capability_usb20_extension_descriptor_t, 0x7 );
