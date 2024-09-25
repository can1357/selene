#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_device_interface_enabled_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_DEVICE_INTERFACE_ENABLED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_device_interface_enabled_t
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                     
        _m00 nt::unicode_view device_interface;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInterface
        _m01 uint32_t         flags;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m02 uint8_t          enabled;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Enabled
                                                      
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_DEVICE_INTERFACE_ENABLED.$", 0x18, true, 0xdf53b4c4133730d4 );                 
        SDK_FIXED_SIZE( plugplay_control_device_interface_enabled_t, 0x18 );                 
    };                                                
};
#include "magic/plugplay_control_device_interface_enabled_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_device_interface_enabled_t, 0x18 );
