#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_retrieve_dock_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_RETRIEVE_DOCK_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_retrieve_dock_data_t
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t device_instance_length;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInstanceLength
        _m01 wchar_t* device_instance;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceInstance
                                                
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_RETRIEVE_DOCK_DATA.$", 0x10, true, 0xfc56a4164eb9eb8d );                       
        SDK_FIXED_SIZE( plugplay_control_retrieve_dock_data_t, 0x10 );                       
    };                                          
};
#include "magic/plugplay_control_retrieve_dock_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_retrieve_dock_data_t, 0x10 );
