#pragma once
#include <sdkgen/support_library.hpp>
#include "dispatcher_header_t.hpp"

#include "magic/kevent_t.start.hpp"
namespace nt
{
    // [struct _KEVENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kevent_t                                
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                         
        _m00 struct nt::dispatcher_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
                                                   
        SDK_NONVOL_PROPERTIES( "_KEVENT.$", 0x18, true, 0x8cd3414e49cedd9e );       
        SDK_FIXED_SIZE( kevent_t, 0x18 );          
    };                                             
};
#include "magic/kevent_t.end.hpp"
SDK_VERIFY( struct nt::kevent_t, 0x18 );
