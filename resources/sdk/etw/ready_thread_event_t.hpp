#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ready_thread_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_READY_THREAD_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ready_thread_event_t                 
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t thread_id;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 uint8_t  adjust_reason;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AdjustReason
        _m02 int8_t   adjust_increment;           //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .AdjustIncrement
        _m03 uint1_t  executing_dpc;              //{ +0x0006@0  +0x0006@0  +0x0006@0  +0x0006@0  } | .ExecutingDpc
        _m04 uint1_t  kernel_stack_not_resident;  //{ +0x0006@1  +0x0006@1  +0x0006@1  +0x0006@1  } | .KernelStackNotResident
        _m05 uint1_t  process_out_of_memory;      //{ +0x0006@2  +0x0006@2  +0x0006@2  +0x0006@2  } | .ProcessOutOfMemory
        _m06 uint1_t  direct_switch_attempt;      //{ +0x0006@3  +0x0006@3  +0x0006@3  +0x0006@3  } | .DirectSwitchAttempt
        _m07 uint8_t  flags;                      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Flags
                                                
        SDK_MAGIC_PROPERTIES( "_ETW_READY_THREAD_EVENT.$", 0x8, true, 0xd7859f7b006af2b );                          
        SDK_FIXED_SIZE( ready_thread_event_t, 0x8 );                          
    };                                          
};
#include "magic/ready_thread_event_t.end.hpp"
SDK_VERIFY( struct etw::ready_thread_event_t, 0x8 );
