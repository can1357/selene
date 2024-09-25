#pragma once
#include <sdkgen/support_library.hpp>
#include "../pnp/query_relation_t.hpp"

#include "magic/plugplay_control_device_relations_data_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_DEVICE_RELATIONS_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_device_relations_data_t     
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                              
        _m00 nt::unicode_view           device_instance;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInstance
        _m01 enum pnp::query_relation_t operation;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Operation
        _m02 uint32_t                   buffer_length;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .BufferLength
        _m03 wchar_t*                   buffer;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Buffer
                                                        
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_DEVICE_RELATIONS_DATA.$", 0x20, true, 0xcd65881fa257de5b );                
        SDK_FIXED_SIZE( plugplay_control_device_relations_data_t, 0x20 );                
    };                                                  
};
#include "magic/plugplay_control_device_relations_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_device_relations_data_t, 0x20 );
