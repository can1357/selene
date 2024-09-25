#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_handle_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_OBJECT_HANDLE_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_handle_event_t  
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 void*    object;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint32_t process_id;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessId
        _m02 uint32_t handle;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Handle
        _m03 uint16_t object_type;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectType
                                  
        SDK_MAGIC_PROPERTIES( "_ETW_OBJECT_HANDLE_EVENT.$", 0x18, true, 0x42a3cd2ce5989a2c );            
        SDK_FIXED_SIZE( object_handle_event_t, 0x18 );            
    };                            
};
#include "magic/object_handle_event_t.end.hpp"
SDK_VERIFY( struct etw::object_handle_event_t, 0x18 );
