#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/generic_debug_event_t.start.hpp"
namespace win
{
    struct stack_trace_t;

    // [struct _GenericDebugEvent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct generic_debug_event_t                          
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                
        _m00 void*                      associated_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AssociatedObject
        _m01 sdk::hresult               status;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
        _m02 int32_t                    associated_number;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AssociatedNumber
        _m03 uint32_t                   thread_id;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ThreadId
        _m04 uint32_t                   sequence;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Sequence
        _m05 struct win::filetime_t     system_time;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SystemTime
        _m06 uint64_t                   tick_count;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TickCount
        _m07 struct win::stack_trace_t* stack_trace;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .StackTrace
                                                          
        SDK_MAGIC_PROPERTIES( "_GenericDebugEvent.$", 0x30, true, 0x404df31fd29fad7c );                  
        SDK_FIXED_SIZE( generic_debug_event_t, 0x30 );                  
    };                                                    
};
#include "magic/generic_debug_event_t.end.hpp"
SDK_VERIFY( struct win::generic_debug_event_t, 0x30 );
