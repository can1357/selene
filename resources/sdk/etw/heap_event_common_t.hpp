#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/heap_event_common_t.start.hpp"
namespace etw
{
    // [struct _ETW_HEAP_EVENT_COMMON]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_event_common_t                        
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                            
        _m00 struct win::system_trace_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             handle;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Handle
                                                      
        SDK_MAGIC_PROPERTIES( "_ETW_HEAP_EVENT_COMMON.$", 0x28, true, 0xd18edfc3d0671720 );       
        SDK_FIXED_SIZE( heap_event_common_t, 0x28 );       
    };                                                
};
#include "magic/heap_event_common_t.end.hpp"
SDK_VERIFY( struct etw::heap_event_common_t, 0x28 );
