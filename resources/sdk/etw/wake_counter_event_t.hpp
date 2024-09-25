#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wake_counter_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_WAKE_COUNTER_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wake_counter_event_t  
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 void*    object;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 uint64_t tag;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Tag
        _m02 uint32_t process_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessId
        _m03 int32_t  count;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Count
                                 
        SDK_MAGIC_PROPERTIES( "_ETW_WAKE_COUNTER_EVENT.$", 0x18, true, 0x92919ef2e406987c );           
        SDK_FIXED_SIZE( wake_counter_event_t, 0x18 );           
    };                           
};
#include "magic/wake_counter_event_t.end.hpp"
SDK_VERIFY( struct etw::wake_counter_event_t, 0x18 );
