#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/luid_t.start.hpp"
namespace nt
{
    // [struct _LUID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct luid_t               
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t low_part;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LowPart
        _m01 int32_t  high_part;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .HighPart
                                
        SDK_NONVOL_PROPERTIES( "_LUID.$", 0x8, true, 0x35a3a1c39be0425f );          
        SDK_FIXED_SIZE( luid_t, 0x8 );          
    };                          
};
#include "magic/luid_t.end.hpp"
SDK_VERIFY( struct nt::luid_t, 0x8 );
