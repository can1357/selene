#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/support_t.start.hpp"
namespace pm
{
    // [struct _PM_SUPPORT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct support_t            
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint1_t rsvd2;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Rsvd2
        _m01 uint1_t d1;          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .D1
        _m02 uint1_t d2;          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .D2
        _m03 uint1_t pmed0;       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PMED0
        _m04 uint1_t pmed1;       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PMED1
        _m05 uint1_t pmed2;       //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .PMED2
        _m06 uint1_t pmed3_hot;   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .PMED3Hot
        _m07 uint1_t pmed3_cold;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .PMED3Cold
                                
        SDK_NONVOL_PROPERTIES( "_PM_SUPPORT.$", 0x1, true, 0xa37a39a2a67a916 );           
        SDK_FIXED_SIZE( support_t, 0x1 );           
    };                          
};
#include "magic/support_t.end.hpp"
SDK_VERIFY( struct pm::support_t, 0x1 );
