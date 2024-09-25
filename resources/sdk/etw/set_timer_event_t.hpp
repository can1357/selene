#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_timer_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_SET_TIMER_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_timer_event_t                 
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t expected_due_time;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExpectedDueTime
        _m01 uint64_t timer_address;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimerAddress
        _m02 uint16_t target_processor_group;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetProcessorGroup
        _m03 uint8_t  target_processor_index;  //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .TargetProcessorIndex
        _m04 uint8_t  flags;                   //{ +0x0013    +0x0013    +0x0013    +0x0013    } | .Flags
        _m05 uint32_t period;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Period
        _m06 uint8_t  encoded_delay;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EncodedDelay
                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m07 uint16_t unique_process_id;       //{ +0x001a    +0x001a    +0x001a    } | .UniqueProcessId
                                             
        SDK_MAGIC_PROPERTIES( "_ETW_SET_TIMER_EVENT.$", 0x20, true, 0x63b822f184497e4e );                       
        SDK_FIXED_SIZE( set_timer_event_t, 0x20 );                       
    };                                       
};
#include "magic/set_timer_event_t.end.hpp"
SDK_VERIFY( struct etw::set_timer_event_t, 0x20 );
