#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_device_status_t.start.hpp"
namespace wdf
{
    // [union _USB_DEVICE_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_device_status_t       
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t as_ushort16;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort16
        _m01 uint1_t  self_powered;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SelfPowered
        _m02 uint1_t  remote_wakeup;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .RemoteWakeup
        _m03 uint1_t  u1_enable;      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .U1Enable
        _m04 uint1_t  u2_enable;      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .U2Enable
        _m05 uint1_t  ltm_enable;     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .LtmEnable
                                    
        SDK_MAGIC_PROPERTIES( "_USB_DEVICE_STATUS.$", 0x2, true, 0xe5455fe379323d0e );              
        SDK_FIXED_SIZE( usb_device_status_t, 0x2 );              
    };                              
};
#include "magic/usb_device_status_t.end.hpp"
SDK_VERIFY( union wdf::usb_device_status_t, 0x2 );
