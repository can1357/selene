#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/last_dropped_event_struct_t.start.hpp"
namespace etw
{
    // [struct _ETW_LAST_DROPPED_EVENT_STRUCT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct last_dropped_event_struct_t    
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                
        _m00 uint32_t               count;  //{ +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<int64_t, 1> times;  //{ +0x0008    +0x0008    +0x0008    } | .Times
                                          
        SDK_MAGIC_PROPERTIES( "_ETW_LAST_DROPPED_EVENT_STRUCT.$", 0x10, true, 0x152fa1c50f906505 );      
        SDK_FIXED_SIZE( last_dropped_event_struct_t, 0x10 );      
    };                                    
};
#include "magic/last_dropped_event_struct_t.end.hpp"
SDK_VERIFY( struct etw::last_dropped_event_struct_t, 0x10 );
