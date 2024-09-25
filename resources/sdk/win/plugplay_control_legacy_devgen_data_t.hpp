#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_legacy_devgen_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_LEGACY_DEVGEN_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_legacy_devgen_data_t     
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                           
        _m00 nt::unicode_view service_name;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ServiceName
        _m01 wchar_t*         device_instance;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceInstance
        _m02 uint32_t         device_instance_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeviceInstanceLength
                                                     
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_LEGACY_DEVGEN_DATA.$", 0x20, true, 0x226ebcc8b47836c7 );                       
        SDK_FIXED_SIZE( plugplay_control_legacy_devgen_data_t, 0x20 );                       
    };                                               
};
#include "magic/plugplay_control_legacy_devgen_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_legacy_devgen_data_t, 0x20 );
