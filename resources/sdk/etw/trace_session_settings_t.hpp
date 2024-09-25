#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trace_session_settings_t.start.hpp"
namespace etw
{
    // [struct _ETW_TRACE_SESSION_SETTINGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct trace_session_settings_t   
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t buffer_size;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BufferSize
        _m02 uint32_t minimum_buffers;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MinimumBuffers
        _m03 uint32_t maximum_buffers;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .MaximumBuffers
        _m04 uint32_t logger_mode;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LoggerMode
        _m05 uint32_t flush_timer;      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .FlushTimer
        _m06 uint32_t flush_threshold;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FlushThreshold
        _m07 uint32_t clock_type;       //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .ClockType
                                      
        SDK_NONVOL_PROPERTIES( "_ETW_TRACE_SESSION_SETTINGS.$", 0x20, true, 0xce320e2b8b803ae3 );                
        SDK_FIXED_SIZE( trace_session_settings_t, 0x20 );                
    };                                
};
#include "magic/trace_session_settings_t.end.hpp"
SDK_VERIFY( struct etw::trace_session_settings_t, 0x20 );
