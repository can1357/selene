#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipt_trace_event_data_t.start.hpp"
namespace win
{
    // [struct _IPT_TRACE_EVENT_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipt_trace_event_data_t                         
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint64_t               time_stamp;             //{ +0x0000    +0x0000    +0x0000    } | .TimeStamp
        _m01 uint32_t               process_id;             //{ +0x0008    +0x0008    +0x0008    } | .ProcessId
        _m02 uint32_t               thread_id;              //{ +0x000c    +0x000c    +0x000c    } | .ThreadId
        _m03 uint64_t               ipt_option;             //{ +0x0010    +0x0010    +0x0010    } | .IptOption
        _m04 uint32_t               ipt_trace_size;         //{ +0x0018    +0x0018    +0x0018    } | .IptTraceSize
        _m05 uint32_t               ipt_trace_stop_offset;  //{ +0x001c    +0x001c    +0x001c    } | .IptTraceStopOffset
        _m06 sdk::array<uint8_t, 1> ipt_trace;              //{ +0x0020    +0x0020    +0x0020    } | .IptTrace
                                                          
        SDK_MAGIC_PROPERTIES( "_IPT_TRACE_EVENT_DATA.$", 0x28, true, 0x1ed71c0d4232c74e );                      
        SDK_FIXED_SIZE( ipt_trace_event_data_t, 0x28 );                      
    };                                                    
};
#include "magic/ipt_trace_event_data_t.end.hpp"
SDK_VERIFY( struct win::ipt_trace_event_data_t, 0x28 );
