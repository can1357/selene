#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_nego_status_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_NegoStatus]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_nego_status_t
    {                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t last_status;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LastStatus
                                    
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_NegoStatus.$", 0x4, true, 0x9cfe3599d589efdb );            
        SDK_FIXED_SIZE( pkg_context_nego_status_t, 0x4 );            
    };                              
};
#include "magic/pkg_context_nego_status_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_nego_status_t, 0x4 );
