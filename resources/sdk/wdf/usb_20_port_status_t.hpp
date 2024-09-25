#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_20_port_status_t.start.hpp"
namespace wdf
{
    // [union _USB_20_PORT_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_20_port_status_t                   
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint16_t as_ushort16;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort16
        _m01 uint1_t  current_connect_status;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CurrentConnectStatus
        _m02 uint1_t  port_enabled_disabled;       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PortEnabledDisabled
        _m03 uint1_t  suspend;                     //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Suspend
        _m04 uint1_t  over_current;                //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .OverCurrent
        _m05 uint1_t  reset;                       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Reset
        _m06 uint1_t  l1;                          //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .L1
        _m07 uint1_t  port_power;                  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PortPower
        _m08 uint1_t  low_speed_device_attached;   //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .LowSpeedDeviceAttached
        _m09 uint1_t  high_speed_device_attached;  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .HighSpeedDeviceAttached
        _m10 uint1_t  port_test_mode;              //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .PortTestMode
        _m11 uint1_t  port_indicator_control;      //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .PortIndicatorControl
                                                 
        SDK_MAGIC_PROPERTIES( "_USB_20_PORT_STATUS.$", 0x2, true, 0xff6e9255a8eeb4fb );                           
        SDK_FIXED_SIZE( usb_20_port_status_t, 0x2 );                           
    };                                           
};
#include "magic/usb_20_port_status_t.end.hpp"
SDK_VERIFY( union wdf::usb_20_port_status_t, 0x2 );
