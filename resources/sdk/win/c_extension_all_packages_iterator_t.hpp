#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/c_extension_all_packages_iterator_t.start.hpp"
namespace win
{
    // [class CExtensionAllPackagesIterator]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_extension_all_packages_iterator_t                              
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                 
        _m00 const class win::opaque_string_t contract_id;                   //{ +0x0010    +0x0010    +0x0010    } | ._contractId
        _m01 bool                             processing_user_apps;          //{ +0x0020    +0x0020    +0x0020    } | ._processingUserApps
        _m02 class win::opaque_string_t       current_deploying_package_id;  //{ +0x0040    +0x0040    +0x0040    } | ._currentDeployingPackageId
        _m03 class win::opaque_string_t       current_effective_package_id;  //{ +0x0048    +0x0048    +0x0048    } | ._currentEffectivePackageId
        _m04 uint32_t                         current_package_index;         //{ +0x0060    +0x0060    +0x0060    } | ._currentPackageIndex
                                                                           
        SDK_MAGIC_PROPERTIES( "CExtensionAllPackagesIterator.$", 0x68, true, 0x8d35fef11e8b711b );                             
        SDK_FIXED_SIZE( c_extension_all_packages_iterator_t, 0x68 );                             
    };                                                                     
};
#include "magic/c_extension_all_packages_iterator_t.end.hpp"
SDK_VERIFY( class win::c_extension_all_packages_iterator_t, 0x68 );
