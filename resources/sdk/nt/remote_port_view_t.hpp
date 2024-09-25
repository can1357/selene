#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remote_port_view_t.start.hpp"
namespace nt
{
    // [struct _REMOTE_PORT_VIEW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct remote_port_view_t   
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t length;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint64_t view_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ViewSize
        _m02 void*    view_base;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ViewBase
                                
        SDK_NONVOL_PROPERTIES( "_REMOTE_PORT_VIEW.$", 0x18, true, 0xd5347e9d48959b9e );          
        SDK_FIXED_SIZE( remote_port_view_t, 0x18 );          
    };                          
};
#include "magic/remote_port_view_t.end.hpp"
SDK_VERIFY( struct nt::remote_port_view_t, 0x18 );
