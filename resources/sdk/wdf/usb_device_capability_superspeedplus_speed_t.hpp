#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_capability_superspeedplus_speed_t.start.hpp"
namespace wdf
{
    // [union _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_device_capability_superspeedplus_speed_t
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t as_ulong32;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong32
        _m01 uint4_t  sublink_speed_attr_id;            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SublinkSpeedAttrID
        _m02 uint2_t  lane_speed_exponent;              //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .LaneSpeedExponent
        _m03 uint1_t  sublink_type_mode;                //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .SublinkTypeMode
        _m04 uint1_t  sublink_type_dir;                 //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .SublinkTypeDir
        _m05 uint2_t  link_protocol;                    //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .LinkProtocol
        _m06 uint16_t lane_speed_mantissa;              //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .LaneSpeedMantissa
                                                      
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED.$", 0x4, true, 0x774141fc56ba69fb );                      
        SDK_FIXED_SIZE( usb_device_capability_superspeedplus_speed_t, 0x4 );                      
    };                                                
};
#include "magic/usb_device_capability_superspeedplus_speed_t.end.hpp"
SDK_VERIFY( union wdf::usb_device_capability_superspeedplus_speed_t, 0x4 );
