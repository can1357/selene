#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/wmitrace_work_t.start.hpp"
namespace etw
{
    // [struct _ETW_WMITRACE_WORK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmitrace_work_t                           
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                           
        _m00 uint32_t              logger_id;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LoggerId
        _m01 sdk::array<char, 65>  logger_name;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LoggerName
        _m02 sdk::array<char, 129> file_name;          //{ +0x0049    +0x0049    +0x0049    +0x0049    } | .FileName
        _m03 uint32_t              maximum_file_size;  //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .MaximumFileSize
        _m04 uint32_t              min_buffers;        //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .MinBuffers
        _m05 uint32_t              max_buffers;        //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .MaxBuffers
        _m06 uint32_t              buffer_size;        //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .BufferSize
        _m07 uint32_t              mode;               //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .Mode
        _m08 uint32_t              flush_timer;        //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .FlushTimer
        _m09 uint64_t              match_any;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MatchAny
        _m10 uint64_t              match_all;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MatchAll
        _m11 uint32_t              enable_property;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EnableProperty
        _m12 struct nt::guid_t     guid;               //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Guid
        _m13 uint8_t               level;              //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Level
        _m14 int32_t               status;             //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .Status
                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                           
        _m15 uint32_t              silo_session_id;    //{ +0x0004    +0x0004    +0x0004    } | .SiloSessionId
                                                     
        // Windows 10 v1607                          
        //                                           
        _m16 uint32_t              spare_ulong;        //{ +0x0004    } | .SpareUlong
                                                     
        SDK_MAGIC_PROPERTIES( "_ETW_WMITRACE_WORK.$", 0xf0, true, 0x495873d99de202d4 );                  
        SDK_FIXED_SIZE( wmitrace_work_t, 0xf0 );                  
    };                                               
};
#include "magic/wmitrace_work_t.end.hpp"
SDK_VERIFY( struct etw::wmitrace_work_t, 0xf0 );
