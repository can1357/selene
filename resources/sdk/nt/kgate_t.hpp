#pragma once
#include <sdkgen/support_library.hpp>
#include "dispatcher_header_t.hpp"

#include "magic/kgate_t.start.hpp"
namespace nt
{
    // [struct _KGATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kgate_t                                 
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                         
        _m00 struct nt::dispatcher_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
                                                   
        SDK_NONVOL_PROPERTIES( "_KGATE.$", 0x18, true, 0x65384038e99536e8 );       
        SDK_FIXED_SIZE( kgate_t, 0x18 );           
    };                                             
};
#include "magic/kgate_t.end.hpp"
SDK_VERIFY( struct nt::kgate_t, 0x18 );
