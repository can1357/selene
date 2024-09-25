#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trace_packet_t.start.hpp"
namespace wmi
{
    // [struct _WMI_TRACE_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_packet_t     
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint16_t size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t hook_id;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .HookId
        _m02 uint8_t  type;     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Type
        _m03 uint8_t  group;    //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Group
                              
        SDK_MAGIC_PROPERTIES( "_WMI_TRACE_PACKET.$", 0x4, true, 0x75b6c6b25298f097 );        
        SDK_FIXED_SIZE( trace_packet_t, 0x4 );        
    };                        
};
#include "magic/trace_packet_t.end.hpp"
SDK_VERIFY( struct wmi::trace_packet_t, 0x4 );
