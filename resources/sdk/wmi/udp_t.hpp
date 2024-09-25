#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/udp_t.start.hpp"
namespace wmi
{
    // [struct _WMI_UDP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct udp_t                
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t pid;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PID
        _m01 uint16_t size;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t dest_addr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DestAddr
        _m03 uint32_t src_addr;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SrcAddr
        _m04 uint16_t dest_port;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DestPort
        _m05 uint16_t src_port;   //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .SrcPort
                                
        SDK_MAGIC_PROPERTIES( "_WMI_UDP.$", 0x14, true, 0x356b1a75069de422 );          
        SDK_FIXED_SIZE( udp_t, 0x14 );          
    };                          
};
#include "magic/udp_t.end.hpp"
SDK_VERIFY( struct wmi::udp_t, 0x14 );
