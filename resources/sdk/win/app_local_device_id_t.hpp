#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/app_local_device_id_t.start.hpp"
namespace win
{
    // [struct APP_LOCAL_DEVICE_ID]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct app_local_device_id_t           
    {                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                 
        _m00 sdk::array<uint8_t, 32> value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .value
                                           
        SDK_NONVOL_PROPERTIES( "APP_LOCAL_DEVICE_ID.$", 0x20, true, 0x17faf19ede5ab35e );      
        SDK_FIXED_SIZE( app_local_device_id_t, 0x20 );      
    };                                     
};
#include "magic/app_local_device_id_t.end.hpp"
SDK_VERIFY( struct win::app_local_device_id_t, 0x20 );
