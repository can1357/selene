#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_user_flags_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_UserFlags]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_user_flags_t
    {                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t user_flags;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UserFlags
                                   
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_UserFlags.$", 0x4, true, 0xffe99479c4574abc );           
        SDK_FIXED_SIZE( pkg_context_user_flags_t, 0x4 );           
    };                             
};
#include "magic/pkg_context_user_flags_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_user_flags_t, 0x4 );
