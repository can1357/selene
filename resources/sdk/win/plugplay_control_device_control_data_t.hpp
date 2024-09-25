#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_device_control_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_DEVICE_CONTROL_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_device_control_data_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 nt::unicode_view device_instance;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInstance
        _m01 uint32_t         flags;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                                 
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_DEVICE_CONTROL_DATA.$", 0x18, true, 0x7739b2803a984c13 );                
        SDK_FIXED_SIZE( plugplay_control_device_control_data_t, 0x18 );                
    };                                           
};
#include "magic/plugplay_control_device_control_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_device_control_data_t, 0x18 );
