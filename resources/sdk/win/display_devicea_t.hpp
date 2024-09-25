#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/display_devicea_t.start.hpp"
namespace win
{
    // [struct _DISPLAY_DEVICEA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct display_devicea_t                     
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                       
        _m00 uint32_t              cb;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cb
        _m01 sdk::array<char, 32>  device_name;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceName
        _m02 sdk::array<char, 128> device_string;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .DeviceString
        _m03 uint32_t              state_flags;    //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .StateFlags
        _m04 sdk::array<char, 128> device_id;      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .DeviceID
        _m05 sdk::array<char, 128> device_key;     //{ +0x0128    +0x0128    +0x0128    +0x0128    +0x0128    } | .DeviceKey
                                                 
        SDK_NONVOL_PROPERTIES( "_DISPLAY_DEVICEA.$", 0x1a8, true, 0xd0317945b2dd9b88 );              
        SDK_FIXED_SIZE( display_devicea_t, 0x1a8 );              
    };                                           
};
#include "magic/display_devicea_t.end.hpp"
SDK_VERIFY( struct win::display_devicea_t, 0x1a8 );
