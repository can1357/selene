#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_target_relation_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_TARGET_RELATION_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_target_relation_data_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 void*    user_file_handle;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UserFileHandle
        _m01 int32_t  status;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
        _m02 uint32_t device_instance_len;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DeviceInstanceLen
        _m03 wchar_t* device_instance;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceInstance
                                                  
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_TARGET_RELATION_DATA.$", 0x18, true, 0x483f2c53b445ef95 );                    
        SDK_FIXED_SIZE( plugplay_control_target_relation_data_t, 0x18 );                    
    };                                            
};
#include "magic/plugplay_control_target_relation_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_target_relation_data_t, 0x18 );
