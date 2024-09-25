#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/pshed_pi_trace_event_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PSHED_PI_TRACE_EVENT]
    // => Windows 11
    //
    struct pshed_pi_trace_event_t                                
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    } | .WheaEventLogEntry
        _m01 sdk::array<char, 256>          buffer;                //{ +0x0020    } | .Buffer
                                                                 
        SDK_MAGIC_PROPERTIES( "_WHEA_PSHED_PI_TRACE_EVENT.$", 0x0, false, 0xc447aac48769916a );                     
        SDK_FIXED_SIZE( pshed_pi_trace_event_t, 0x120 );                     
    };                                                           
};
#include "magic/pshed_pi_trace_event_t.end.hpp"
SDK_VERIFY( struct whea::pshed_pi_trace_event_t, 0x120 );
