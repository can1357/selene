#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scope_id_t.start.hpp"
namespace ndis
{
    // [struct SCOPE_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct scope_id_t       
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint28_t zone;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Zone
        _m01 uint4_t  level;  //{ +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 +0x0000@28 } | .Level
        _m02 uint32_t value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                            
        SDK_NONVOL_PROPERTIES( "SCOPE_ID.$", 0x4, true, 0xb8e5cf0b74387173 );      
        SDK_FIXED_SIZE( scope_id_t, 0x4 );      
    };                      
};
#include "magic/scope_id_t.end.hpp"
SDK_VERIFY( struct ndis::scope_id_t, 0x4 );
