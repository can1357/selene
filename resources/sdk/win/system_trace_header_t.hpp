#pragma once
#include <sdkgen/support_library.hpp>
#include "../wmi/trace_packet_t.hpp"

#include "magic/system_trace_header_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_TRACE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_trace_header_t                    
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                          
        _m00 uint32_t                   marker;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Marker
        _m01 uint16_t                   version;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m02 uint8_t                    header_type;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .HeaderType
        _m03 uint8_t                    flags;        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Flags
        _m04 uint32_t                   header;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Header
        _m05 struct wmi::trace_packet_t packet;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Packet
        _m06 uint32_t                   thread_id;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m07 uint32_t                   process_id;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ProcessId
        _m08 int64_t                    system_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SystemTime
        _m09 uint32_t                   kernel_time;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KernelTime
        _m10 uint32_t                   user_time;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .UserTime
                                                    
        SDK_MAGIC_PROPERTIES( "_SYSTEM_TRACE_HEADER.$", 0x20, true, 0x7a4ff0e5608a6c7d );            
        SDK_FIXED_SIZE( system_trace_header_t, 0x20 );            
    };                                              
};
#include "magic/system_trace_header_t.end.hpp"
SDK_VERIFY( struct win::system_trace_header_t, 0x20 );
