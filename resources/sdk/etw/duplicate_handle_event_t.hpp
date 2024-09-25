#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/duplicate_handle_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_DUPLICATE_HANDLE_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct duplicate_handle_event_t     
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 void*    object;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint32_t source_handle;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SourceHandle
        _m02 uint32_t target_handle;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TargetHandle
        _m03 uint32_t target_process_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetProcessId
        _m04 uint16_t object_type;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ObjectType
        _m05 uint32_t source_process_id;  //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .SourceProcessId
                                        
        SDK_MAGIC_PROPERTIES( "_ETW_DUPLICATE_HANDLE_EVENT.$", 0x1a, true, 0xc9ae03c790e18cad );                  
        SDK_FIXED_SIZE( duplicate_handle_event_t, 0x1a );                  
    };                                  
};
#include "magic/duplicate_handle_event_t.end.hpp"
SDK_VERIFY( struct etw::duplicate_handle_event_t, 0x1a );
