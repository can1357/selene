#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_function_suspend_options_t.start.hpp"
namespace wdf
{
    // [union _USB_FUNCTION_SUSPEND_OPTIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union usb_function_suspend_options_t 
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t as_uchar;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUchar
        _m01 uint1_t power_state;          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerState
        _m02 uint1_t remote_wake_enabled;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .RemoteWakeEnabled
                                         
        SDK_MAGIC_PROPERTIES( "_USB_FUNCTION_SUSPEND_OPTIONS.$", 0x1, true, 0x70a1e759c4061280 );                    
        SDK_FIXED_SIZE( usb_function_suspend_options_t, 0x1 );                    
    };                                   
};
#include "magic/usb_function_suspend_options_t.end.hpp"
SDK_VERIFY( union wdf::usb_function_suspend_options_t, 0x1 );
