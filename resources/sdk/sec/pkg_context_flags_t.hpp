#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_flags_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_Flags]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_flags_t
    {                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                              
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_Flags.$", 0x4, true, 0x8f4d3e43cc50158c );      
        SDK_FIXED_SIZE( pkg_context_flags_t, 0x4 );      
    };                        
};
#include "magic/pkg_context_flags_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_flags_t, 0x4 );
