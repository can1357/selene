#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trace_message_packet_t.start.hpp"
namespace wmi
{
    // [struct _WMI_TRACE_MESSAGE_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_message_packet_t    
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t message_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MessageNumber
        _m01 uint16_t option_flags;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .OptionFlags
                                     
        SDK_MAGIC_PROPERTIES( "_WMI_TRACE_MESSAGE_PACKET.$", 0x4, true, 0xf630266b2aca6b1a );               
        SDK_FIXED_SIZE( trace_message_packet_t, 0x4 );               
    };                               
};
#include "magic/trace_message_packet_t.end.hpp"
SDK_VERIFY( struct wmi::trace_message_packet_t, 0x4 );
