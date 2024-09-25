#pragma once
#include <sdkgen/support_library.hpp>

namespace cm { struct resource_list_t; }

#include "magic/plugplay_control_conflict_data_t.start.hpp"
namespace win
{
    struct plugplay_control_conflict_list_t;

    // [struct _PLUGPLAY_CONTROL_CONFLICT_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_conflict_data_t                                     
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                      
        _m00 nt::unicode_view                              device_instance;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInstance
        _m01 struct cm::resource_list_t*                   resource_list;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResourceList
        _m02 uint32_t                                      resource_list_size;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ResourceListSize
        _m03 struct win::plugplay_control_conflict_list_t* conflict_buffer;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ConflictBuffer
        _m04 uint32_t                                      conflict_buffer_size;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ConflictBufferSize
        _m05 uint32_t                                      flags;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
        _m06 int32_t                                       status;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Status
                                                                                
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_CONFLICT_DATA.$", 0x38, true, 0x6331eb1a3c3568c1 );                     
        SDK_FIXED_SIZE( plugplay_control_conflict_data_t, 0x38 );                     
    };                                                                          
};
#include "magic/plugplay_control_conflict_data_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_conflict_data_t, 0x38 );
