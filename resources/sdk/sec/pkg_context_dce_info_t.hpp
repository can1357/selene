#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_dce_info_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_DceInfo]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_dce_info_t
    {                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t authz_svc;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AuthzSvc
        _m01 void*    p_pac;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pPac
                                 
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_DceInfo.$", 0x10, true, 0xfa21087b8ef871ab );          
        SDK_FIXED_SIZE( pkg_context_dce_info_t, 0x10 );          
    };                           
};
#include "magic/pkg_context_dce_info_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_dce_info_t, 0x10 );
