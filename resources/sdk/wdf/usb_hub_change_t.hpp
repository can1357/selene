#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_hub_change_t.start.hpp"
namespace wdf
{
    // [union _USB_HUB_CHANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_hub_change_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint16_t as_ushort16;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUshort16
        _m01 uint1_t  local_power_change;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .LocalPowerChange
        _m02 uint1_t  over_current_change;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .OverCurrentChange
                                          
        SDK_MAGIC_PROPERTIES( "_USB_HUB_CHANGE.$", 0x2, true, 0x2dfbc7b096fdf );                    
        SDK_FIXED_SIZE( usb_hub_change_t, 0x2 );                    
    };                                    
};
#include "magic/usb_hub_change_t.end.hpp"
SDK_VERIFY( union wdf::usb_hub_change_t, 0x2 );
