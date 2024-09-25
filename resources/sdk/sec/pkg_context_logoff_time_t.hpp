#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_logoff_time_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_LogoffTime]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_logoff_time_t
    {                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 int64_t ts_logoff_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tsLogoffTime
                                    
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_LogoffTime.$", 0x8, true, 0x6ae323151d0e878a );               
        SDK_FIXED_SIZE( pkg_context_logoff_time_t, 0x8 );               
    };                              
};
#include "magic/pkg_context_logoff_time_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_logoff_time_t, 0x8 );
