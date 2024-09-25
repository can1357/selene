#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/ums_event_context_switch_t.start.hpp"
namespace etw
{
    // [struct _ETW_UMS_EVENT_CONTEXT_SWITCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ums_event_context_switch_t                              
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                         
        _m00 struct win::system_trace_header_t header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                          scheduled_thread_id;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ScheduledThreadId
        _m02 uint32_t                          switch_count;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SwitchCount
        _m03 uint32_t                          kernel_yield_count;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .KernelYieldCount
        _m04 uint32_t                          mixed_yield_count;    //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .MixedYieldCount
        _m05 uint32_t                          yield_count;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .YieldCount
                                                                   
        SDK_MAGIC_PROPERTIES( "_ETW_UMS_EVENT_CONTEXT_SWITCH.$", 0x38, true, 0x6307e8e18b1d09ae );                    
        SDK_FIXED_SIZE( ums_event_context_switch_t, 0x38 );                    
    };                                                             
};
#include "magic/ums_event_context_switch_t.end.hpp"
SDK_VERIFY( struct etw::ums_event_context_switch_t, 0x38 );
