#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_lifespan_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_Lifespan]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_lifespan_t
    {                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 int64_t ts_start;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tsStart
        _m01 int64_t ts_expiry;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .tsExpiry
                                 
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_Lifespan.$", 0x10, true, 0xac6c11249621c442 );          
        SDK_FIXED_SIZE( pkg_context_lifespan_t, 0x10 );          
    };                           
};
#include "magic/pkg_context_lifespan_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_lifespan_t, 0x10 );
