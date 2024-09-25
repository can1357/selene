#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/c_extension_packages_iterator_t.start.hpp"
namespace win
{
    // [class CExtensionPackagesIterator]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_extension_packages_iterator_t                                  
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                 
        _m00 const class win::opaque_string_t contract_id;                   //{ +0x0010    +0x0010    +0x0010    } | ._contractId
        _m01 bool                             processing_user_apps;          //{ +0x0020    +0x0020    +0x0020    } | ._processingUserApps
        _m02 class win::opaque_string_t       current_deploying_package_id;  //{ +0x0040    +0x0040    +0x0040    } | ._currentDeployingPackageId
        _m03 class win::opaque_string_t       current_effective_package_id;  //{ +0x0048    +0x0048    +0x0048    } | ._currentEffectivePackageId
                                                                           
        SDK_MAGIC_PROPERTIES( "CExtensionPackagesIterator.$", 0x50, true, 0xcb8cbbaf80537568 );                             
        SDK_FIXED_SIZE( c_extension_packages_iterator_t, 0x50 );                             
    };                                                                     
};
#include "magic/c_extension_packages_iterator_t.end.hpp"
SDK_VERIFY( class win::c_extension_packages_iterator_t, 0x50 );
