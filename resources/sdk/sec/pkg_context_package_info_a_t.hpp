#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_package_info_a_t.start.hpp"
namespace sec
{
    struct pkg_info_a_t;

    // [struct _SecPkgContext_PackageInfoA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_package_info_a_t             
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                          
        _m00 struct sec::pkg_info_a_t* package_info;  //{ +0x0000    +0x0000    +0x0000    } | .PackageInfo
                                                    
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_PackageInfoA.$", 0x8, true, 0x1512a85d27a2be1c );             
        SDK_FIXED_SIZE( pkg_context_package_info_a_t, 0x8 );             
    };                                              
};
#include "magic/pkg_context_package_info_a_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_package_info_a_t, 0x8 );
