#pragma once
#include <sdkgen/support_library.hpp>
#include "../wmi/trace_message_packet_t.hpp"

#include "magic/message_trace_header_t.start.hpp"
namespace win
{
    // [struct _MESSAGE_TRACE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct message_trace_header_t                       
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                              
        _m00 uint32_t                           marker;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Marker
        _m01 uint16_t                           size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m02 uint8_t                            version;  //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Version
        _m03 uint32_t                           header;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Header
        _m04 struct wmi::trace_message_packet_t packet;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Packet
                                                        
        SDK_MAGIC_PROPERTIES( "_MESSAGE_TRACE_HEADER.$", 0x8, true, 0x1fc97ef784925b50 );        
        SDK_FIXED_SIZE( message_trace_header_t, 0x8 );        
    };                                                  
};
#include "magic/message_trace_header_t.end.hpp"
SDK_VERIFY( struct win::message_trace_header_t, 0x8 );
