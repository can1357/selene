#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disable_ktimer2_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_DISABLE_KTIMER2_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct disable_ktimer2_event_t        
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t timer_key;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimerKey
        _m01 uint64_t disable_callback;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DisableCallback
        _m02 uint64_t disable_context_key;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DisableContextKey
        _m03 uint8_t  flags;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
                                          
        SDK_MAGIC_PROPERTIES( "_ETW_DISABLE_KTIMER2_EVENT.$", 0x20, true, 0x32679bec6d1c2c50 );                    
        SDK_FIXED_SIZE( disable_ktimer2_event_t, 0x20 );                    
    };                                    
};
#include "magic/disable_ktimer2_event_t.end.hpp"
SDK_VERIFY( struct etw::disable_ktimer2_event_t, 0x20 );
