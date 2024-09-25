#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_capability_firmware_status_descriptor_t.start.hpp"
namespace wdf
{
    // [struct _USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_device_capability_firmware_status_descriptor_t                     
    {                                                                             
        union u0_bm_attributes_t                                                  
        {                                                                         
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
            //                                                                    
            _m04 uint32_t as_ulong;                                                 //{ +0x0000    +0x0000    +0x0000    } | .AsUlong
            _m05 uint1_t  get_firmware_image_hash_support;                          //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .GetFirmwareImageHashSupport
            _m06 uint1_t  disallow_firmware_update_support;                         //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .DisallowFirmwareUpdateSupport
                                                                                  
            SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR.bmAttributes.$", 0x4, true, 0x8eb6a3eefc98324 );                                                        
            SDK_FIXED_SIZE( u0_bm_attributes_t, 0x4 );                                                        
        };                                                                        
                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                        
        _m00 uint8_t                                       b_length;                //{ +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                                       b_descriptor_type;       //{ +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint8_t                                       b_dev_capability_type;   //{ +0x0002    +0x0002    +0x0002    } | .bDevCapabilityType
        _m03 uint8_t                                       bcd_descriptor_version;  //{ +0x0003    +0x0003    +0x0003    } | .bcdDescriptorVersion
        _m07 u0_bm_attributes_t                            bm_attributes;           //{ +0x0004    +0x0004    +0x0004    } | .bmAttributes
                                                                                  
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR.$", 0x8, true, 0x4732e4b6d135ac3 );                       
        SDK_FIXED_SIZE( usb_device_capability_firmware_status_descriptor_t, 0x8 );                       
    };                                                                            
};
#include "magic/usb_device_capability_firmware_status_descriptor_t.end.hpp"
SDK_VERIFY( union wdf::usb_device_capability_firmware_status_descriptor_t::u0_bm_attributes_t, 0x4 );
SDK_VERIFY( struct wdf::usb_device_capability_firmware_status_descriptor_t, 0x8 );
