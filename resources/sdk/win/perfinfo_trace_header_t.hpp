#pragma once
#include <sdkgen/support_library.hpp>
#include "../wmi/trace_packet_t.hpp"

#include "magic/perfinfo_trace_header_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_TRACE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_trace_header_t                  
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                          
        _m00 uint32_t                   marker;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Marker
        _m01 uint16_t                   version;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m02 uint8_t                    header_type;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .HeaderType
        _m03 uint8_t                    flags;        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Flags
        _m04 uint32_t                   header;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Header
        _m05 struct wmi::trace_packet_t packet;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Packet
        _m06 uint64_t                   ts;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TS
        _m07 int64_t                    system_time;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SystemTime
        _m08 sdk::array<uint8_t, 1>     data;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Data
                                                    
        SDK_MAGIC_PROPERTIES( "_PERFINFO_TRACE_HEADER.$", 0x18, true, 0x49de908dbb1bda46 );            
        SDK_FIXED_SIZE( perfinfo_trace_header_t, 0x18 );            
    };                                              
};
#include "magic/perfinfo_trace_header_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_trace_header_t, 0x18 );
