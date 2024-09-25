#pragma once
#include <sdkgen/support_library.hpp>
#include "debugging_device_in_use_t.hpp"

#include "magic/debugging_device_in_use_information_t.start.hpp"
namespace wdf
{
    // [struct _DEBUGGING_DEVICE_IN_USE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct debugging_device_in_use_information_t
    {                                           
        using device_t = sdk::array<struct wdf::debugging_device_in_use_t, 1>;             
                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                          
        _m00 uint32_t  device_count;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceCount
        _m01 device_t  device;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Device
                                                
        SDK_NONVOL_PROPERTIES( "_DEBUGGING_DEVICE_IN_USE_INFORMATION.$", 0x18, true, 0x5e61a184ed5b20b );             
        SDK_FIXED_SIZE( debugging_device_in_use_information_t, 0x18 );             
    };                                          
};
#include "magic/debugging_device_in_use_information_t.end.hpp"
SDK_VERIFY( struct wdf::debugging_device_in_use_information_t, 0x18 );
