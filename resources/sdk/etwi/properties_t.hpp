#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/wnode_header_t.hpp"

#include "magic/properties_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_PROPERTIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct properties_t                                               
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m00 struct stor::port::wnode_header_t wnode;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Wnode
        _m01 uint32_t                          buffer_size;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BufferSize
        _m02 uint32_t                          minimum_buffers;         //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .MinimumBuffers
        _m03 uint32_t                          maximum_buffers;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MaximumBuffers
        _m04 uint32_t                          maximum_file_size;       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .MaximumFileSize
        _m05 uint32_t                          log_file_mode;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .LogFileMode
        _m06 uint32_t                          flush_timer;             //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .FlushTimer
        _m07 uint32_t                          enable_flags;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EnableFlags
        _m08 int32_t                           age_limit;               //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .AgeLimit
        _m09 int32_t                           flush_threshold;         //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .FlushThreshold
        _m10 uint32_t                          number_of_buffers;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NumberOfBuffers
        _m11 uint32_t                          free_buffers;            //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .FreeBuffers
        _m12 uint32_t                          events_lost;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .EventsLost
        _m13 uint32_t                          buffers_written;         //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .BuffersWritten
        _m14 uint32_t                          log_buffers_lost;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .LogBuffersLost
        _m15 uint32_t                          real_time_buffers_lost;  //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .RealTimeBuffersLost
        _m16 void*                             logger_thread_id;        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .LoggerThreadId
        _m17 uint32_t                          log_file_name_offset;    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .LogFileNameOffset
        _m18 uint32_t                          logger_name_offset;      //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .LoggerNameOffset
                                                                      
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PROPERTIES.$", 0x78, true, 0x2897fece3f7c3f3d );                       
        SDK_FIXED_SIZE( properties_t, 0x78 );                         
    };                                                                
};
#include "magic/properties_t.end.hpp"
SDK_VERIFY( struct etwi::properties_t, 0x78 );
