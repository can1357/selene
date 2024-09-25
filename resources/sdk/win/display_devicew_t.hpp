#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/display_devicew_t.start.hpp"
namespace win
{
    // [struct _DISPLAY_DEVICEW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct display_devicew_t                        
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 uint32_t                 cb;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cb
        _m01 sdk::array<wchar_t, 32>  device_name;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceName
        _m02 sdk::array<wchar_t, 128> device_string;  //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .DeviceString
        _m03 uint32_t                 state_flags;    //{ +0x0144    +0x0144    +0x0144    +0x0144    +0x0144    } | .StateFlags
        _m04 sdk::array<wchar_t, 128> device_id;      //{ +0x0148    +0x0148    +0x0148    +0x0148    +0x0148    } | .DeviceID
        _m05 sdk::array<wchar_t, 128> device_key;     //{ +0x0248    +0x0248    +0x0248    +0x0248    +0x0248    } | .DeviceKey
                                                    
        SDK_NONVOL_PROPERTIES( "_DISPLAY_DEVICEW.$", 0x348, true, 0x42c942997336dcb6 );              
        SDK_FIXED_SIZE( display_devicew_t, 0x348 );              
    };                                              
};
#include "magic/display_devicew_t.end.hpp"
SDK_VERIFY( struct win::display_devicew_t, 0x348 );
