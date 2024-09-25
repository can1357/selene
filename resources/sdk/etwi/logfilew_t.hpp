#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/event_trace_t.hpp"
#include "../trace/logfile_header_t.hpp"

namespace nt { struct event_record_t; }

#include "magic/logfilew_t.start.hpp"
namespace etwi
{
    struct logfilew_t;

    // [struct _EVENT_TRACE_LOGFILEW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logfilew_t                                                               
    {                                                                               
        using pevent_trace_buffer_callbackw_t = sdk::function<uint32_t(struct etwi::logfilew_t*)>*;                      
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                          
        _m00 wchar_t*                                         log_file_name;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LogFileName
        _m01 wchar_t*                                         logger_name;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LoggerName
        _m02 int64_t                                          current_time;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentTime
        _m03 uint32_t                                         buffers_read;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BuffersRead
        _m04 uint32_t                                         log_file_mode;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .LogFileMode
        _m05 uint32_t                                         process_trace_mode;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ProcessTraceMode
        _m06 struct win::event_trace_t                        current_event;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CurrentEvent
        _m07 struct trace::logfile_header_t                   logfile_header;         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .LogfileHeader
        _m08 pevent_trace_buffer_callbackw_t                  buffer_callback;        //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .BufferCallback
        _m09 uint32_t                                         buffer_size;            //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .BufferSize
        _m10 uint32_t                                         filled;                 //{ +0x019c    +0x019c    +0x019c    +0x019c    } | .Filled
        _m11 uint32_t                                         events_lost;            //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .EventsLost
        _m12 sdk::function<void(struct win::event_trace_t*)>* event_callback;         //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .EventCallback
        _m13 sdk::function<void(struct nt::event_record_t*)>* event_record_callback;  //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .EventRecordCallback
        _m14 uint32_t                                         is_kernel_trace;        //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .IsKernelTrace
        _m15 void*                                            context;                //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .Context
                                                                                    
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_LOGFILEW.$", 0x1c0, true, 0xb5dd7c4d5ce3ec5b );                      
        SDK_FIXED_SIZE( logfilew_t, 0x1c0 );                                        
    };                                                                              
};
#include "magic/logfilew_t.end.hpp"
SDK_VERIFY( struct etwi::logfilew_t, 0x1c0 );
