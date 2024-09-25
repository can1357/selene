#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plugplay_control_conflict_entry_t.start.hpp"
namespace win
{
    // [struct _PLUGPLAY_CONTROL_CONFLICT_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct plugplay_control_conflict_entry_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t device_instance;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceInstance
        _m01 uint32_t device_flags;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceFlags
        _m02 uint32_t resource_type;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResourceType
        _m03 uint64_t resource_start;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResourceStart
        _m04 uint64_t resource_end;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ResourceEnd
        _m05 uint32_t resource_flags;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ResourceFlags
                                            
        SDK_MAGIC_PROPERTIES( "_PLUGPLAY_CONTROL_CONFLICT_ENTRY.$", 0x28, true, 0x11262ccbad208081 );                
        SDK_FIXED_SIZE( plugplay_control_conflict_entry_t, 0x28 );                
    };                                      
};
#include "magic/plugplay_control_conflict_entry_t.end.hpp"
SDK_VERIFY( struct win::plugplay_control_conflict_entry_t, 0x28 );
