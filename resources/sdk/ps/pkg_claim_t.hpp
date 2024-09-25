#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_claim_t.start.hpp"
namespace ps
{
    // [struct _PS_PKG_CLAIM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_claim_t        
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                    
        _m00 varuint_t flags;   //{ +0x0000    +0x0000@0  +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 varuint_t origin;  //{ +0x0008    +0x0000@16 +0x0004@0  +0x0004@0  +0x0004@0  } | .Origin
                              
        SDK_MAGIC_PROPERTIES( "_PS_PKG_CLAIM.$", 0x8, true, 0x3e91ebc0be9d4e33 );       
        SDK_DYNAMIC_SIZE( pkg_claim_t );       
    };                        
};
#include "magic/pkg_claim_t.end.hpp"
