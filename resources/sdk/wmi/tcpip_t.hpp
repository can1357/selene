#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tcpip_t.start.hpp"
namespace wmi
{
    // [struct _WMI_TCPIP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcpip_t              
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t context;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Context
        _m01 uint32_t size;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t dest_addr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DestAddr
        _m03 uint32_t src_addr;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SrcAddr
        _m04 uint16_t dest_port;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DestPort
        _m05 uint16_t src_port;   //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .SrcPort
                                
        SDK_MAGIC_PROPERTIES( "_WMI_TCPIP.$", 0x14, true, 0xb5301fe16ca7fee2 );          
        SDK_FIXED_SIZE( tcpip_t, 0x14 );          
    };                          
};
#include "magic/tcpip_t.end.hpp"
SDK_VERIFY( struct wmi::tcpip_t, 0x14 );
