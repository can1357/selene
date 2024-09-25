#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_hub_30_port_remote_wake_mask_t.start.hpp"
namespace wdf
{
    // [union _USB_HUB_30_PORT_REMOTE_WAKE_MASK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_hub_30_port_remote_wake_mask_t         
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                           
        _m00 uint8_t as_uchar8;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUchar8
        _m01 uint1_t connect_remote_wake_enable;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ConnectRemoteWakeEnable
        _m02 uint1_t disconnect_remote_wake_enable;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .DisconnectRemoteWakeEnable
        _m03 uint1_t over_current_remote_wake_enable;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .OverCurrentRemoteWakeEnable
                                                     
        SDK_MAGIC_PROPERTIES( "_USB_HUB_30_PORT_REMOTE_WAKE_MASK.$", 0x1, true, 0x80590b1c02f69fd );                                
        SDK_FIXED_SIZE( usb_hub_30_port_remote_wake_mask_t, 0x1 );                                
    };                                               
};
#include "magic/usb_hub_30_port_remote_wake_mask_t.end.hpp"
SDK_VERIFY( union wdf::usb_hub_30_port_remote_wake_mask_t, 0x1 );
