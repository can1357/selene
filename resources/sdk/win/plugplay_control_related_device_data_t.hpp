#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_related_device_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_RELATED_DEVICE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_related_device_data_t            
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                   
        _m00 nt::unicode_view target_device_instance;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetDeviceInstance
        _m01 uint32_t         relation;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Relation
        _m02 wchar_t*         related_device_instance;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RelatedDeviceInstance
        _m03 uint32_t         related_device_instance_length;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RelatedDeviceInstanceLength
                                                             
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_RELATED_DEVICE_DATA.$", 0x28, true, 0x89ec83462c646955 );                               
        SDK_FIXED_SIZE( plugplay_control_related_device_data_t, 0x28 );                               
    };                                                       
};
#include "magic/plugplay_control_related_device_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_related_device_data_t, 0x28 );
