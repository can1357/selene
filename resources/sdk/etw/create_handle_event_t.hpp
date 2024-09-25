#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/create_handle_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_CREATE_HANDLE_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct create_handle_event_t  
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 void*    object;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint32_t handle;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Handle
        _m02 uint16_t object_type;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ObjectType
                                  
        SDK_MAGIC_PROPERTIES( "_ETW_CREATE_HANDLE_EVENT.$", 0x10, true, 0x111c7691ef8a53bd );            
        SDK_FIXED_SIZE( create_handle_event_t, 0x10 );            
    };                            
};
#include "magic/create_handle_event_t.end.hpp"
SDK_VERIFY( struct etw::create_handle_event_t, 0x10 );
