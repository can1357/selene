#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_port_ext_status_t.start.hpp"
namespace wdf
{
    // [union _USB_PORT_EXT_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_port_ext_status_t           
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t as_ulong32;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong32
        _m01 uint4_t  rx_sublink_speed_id;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RxSublinkSpeedID
        _m02 uint4_t  tx_sublink_speed_id;  //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .TxSublinkSpeedID
        _m03 uint4_t  rx_lane_count;        //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .RxLaneCount
        _m04 uint4_t  tx_lane_count;        //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .TxLaneCount
                                          
        SDK_MAGIC_PROPERTIES( "_USB_PORT_EXT_STATUS.$", 0x4, true, 0x29d70e04415f5e58 );                    
        SDK_FIXED_SIZE( usb_port_ext_status_t, 0x4 );                    
    };                                    
};
#include "magic/usb_port_ext_status_t.end.hpp"
SDK_VERIFY( union wdf::usb_port_ext_status_t, 0x4 );
