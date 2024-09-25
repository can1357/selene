#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_nego_package_info_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_NegoPackageInfo]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_nego_package_info_t
    {                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t package_mask;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PackageMask
                                          
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_NegoPackageInfo.$", 0x4, true, 0x24ba5525296ff69d );             
        SDK_FIXED_SIZE( pkg_context_nego_package_info_t, 0x4 );             
    };                                    
};
#include "magic/pkg_context_nego_package_info_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_nego_package_info_t, 0x4 );
