#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/wnode_header_t.hpp"

namespace nt { struct event_filter_descriptor_t; }

#include "magic/properties_v2_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_PROPERTIES_V2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct properties_v2_t                                                 
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m000 struct stor::port::wnode_header_t     wnode;                   //{ +0x0000    +0x0000    +0x0000    } | .Wnode
        _m001 uint32_t                              buffer_size;             //{ +0x0030    +0x0030    +0x0030    } | .BufferSize
        _m002 uint32_t                              minimum_buffers;         //{ +0x0034    +0x0034    +0x0034    } | .MinimumBuffers
        _m003 uint32_t                              maximum_buffers;         //{ +0x0038    +0x0038    +0x0038    } | .MaximumBuffers
        _m004 uint32_t                              maximum_file_size;       //{ +0x003c    +0x003c    +0x003c    } | .MaximumFileSize
        _m005 uint32_t                              log_file_mode;           //{ +0x0040    +0x0040    +0x0040    } | .LogFileMode
        _m006 uint32_t                              flush_timer;             //{ +0x0044    +0x0044    +0x0044    } | .FlushTimer
        _m007 uint32_t                              enable_flags;            //{ +0x0048    +0x0048    +0x0048    } | .EnableFlags
        _m008 int32_t                               age_limit;               //{ +0x004c    +0x004c    +0x004c    } | .AgeLimit
        _m009 int32_t                               flush_threshold;         //{ +0x004c    +0x004c    +0x004c    } | .FlushThreshold
        _m010 uint32_t                              number_of_buffers;       //{ +0x0050    +0x0050    +0x0050    } | .NumberOfBuffers
        _m011 uint32_t                              free_buffers;            //{ +0x0054    +0x0054    +0x0054    } | .FreeBuffers
        _m012 uint32_t                              events_lost;             //{ +0x0058    +0x0058    +0x0058    } | .EventsLost
        _m013 uint32_t                              buffers_written;         //{ +0x005c    +0x005c    +0x005c    } | .BuffersWritten
        _m014 uint32_t                              log_buffers_lost;        //{ +0x0060    +0x0060    +0x0060    } | .LogBuffersLost
        _m015 uint32_t                              real_time_buffers_lost;  //{ +0x0064    +0x0064    +0x0064    } | .RealTimeBuffersLost
        _m016 void*                                 logger_thread_id;        //{ +0x0068    +0x0068    +0x0068    } | .LoggerThreadId
        _m017 uint32_t                              log_file_name_offset;    //{ +0x0070    +0x0070    +0x0070    } | .LogFileNameOffset
        _m018 uint32_t                              logger_name_offset;      //{ +0x0074    +0x0074    +0x0074    } | .LoggerNameOffset
        _m019 uint8_t                               version_number;          //{ +0x0078@0  +0x0078@0  +0x0078@0  } | .VersionNumber
        _m020 uint32_t                              v2_control;              //{ +0x0078    +0x0078    +0x0078    } | .V2Control
        _m021 uint32_t                              filter_desc_count;       //{ +0x007c    +0x007c    +0x007c    } | .FilterDescCount
        _m022 struct nt::event_filter_descriptor_t* filter_desc;             //{ +0x0080    +0x0080    +0x0080    } | .FilterDesc
        _m023 uint1_t                               wow;                     //{ +0x0088@0  +0x0088@0  +0x0088@0  } | .Wow
        _m024 uint1_t                               qpc_delta_tracking;      //{ +0x0088@1  +0x0088@1  +0x0088@1  } | .QpcDeltaTracking
        _m025 uint1_t                               large_mdl_pages;         //{ +0x0088@2  +0x0088@2  +0x0088@2  } | .LargeMdlPages
        _m026 uint1_t                               exclude_kernel_stack;    //{ +0x0088@3  +0x0088@3  +0x0088@3  } | .ExcludeKernelStack
        _m027 uint64_t                              v2_options;              //{ +0x0088    +0x0088    +0x0088    } | .V2Options
                                                                           
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PROPERTIES_V2.$", 0x90, true, 0xa12636455717d57d );                       
        SDK_FIXED_SIZE( properties_v2_t, 0x90 );                           
    };                                                                     
};
#include "magic/properties_v2_t.end.hpp"
SDK_VERIFY( struct etwi::properties_v2_t, 0x90 );
