#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_ktimer2_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_SET_KTIMER2_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_ktimer2_event_t             
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint64_t due_time;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DueTime
        _m01 uint64_t maximum_due_time;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumDueTime
        _m02 uint64_t period;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Period
        _m03 uint64_t timer_key;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TimerKey
        _m04 uint64_t callback;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Callback
        _m05 uint64_t callback_context_key;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CallbackContextKey
        _m06 uint8_t  flags;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
                                           
        SDK_MAGIC_PROPERTIES( "_ETW_SET_KTIMER2_EVENT.$", 0x38, true, 0x34bb665499c6c853 );                     
        SDK_FIXED_SIZE( set_ktimer2_event_t, 0x38 );                     
    };                                     
};
#include "magic/set_ktimer2_event_t.end.hpp"
SDK_VERIFY( struct etw::set_ktimer2_event_t, 0x38 );
